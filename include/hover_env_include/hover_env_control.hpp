// Header file for basic_quad_control.cpp
//
// By: Patrick Ledzian
// Date: 01 October 2020
//

#ifndef SET_ROTOR_VEL_HPP
#define SET_ROTOR_VEL_HPP

#include <gazebo/gazebo.hh>
#include <gazebo/gazebo_config.h>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>
#include <gazebo/common/common.hh>
#include <string.h>
#include <cmath>
#include <eigen3/Eigen/Eigen>          // we have options here: ignition (limited), xtensor (like numpy), eigen (standard?)
//#include <eigen3/Eigen/StdVector>
#include <iostream>
#include <fstream>

#include <gazebo/gazebo_client.hh>
#include "../../msgs/include/Float.pb.h"
#include "../../msgs/include/local_poses_stamped.pb.h"

// gazebo related variables
gazebo::transport::NodePtr node_handle;
typedef const boost::shared_ptr<const std_msgs::msgs::Float> MotorSpeedPtr;         // points to protobuf custom message "Float"
typedef const boost::shared_ptr<const gazebo::msgs::LocalPosesStamped> ConstLocalPosesStampedPtr;

// simulation time
double sim_time = 0.0;
double prev_sim_time = 0.0;
double prev_sim_time_pos = 0.0;
double prev_sim_time_att = 0.0;
double sim_time_delta = 0.0;

// simulation state
int sim_state = 0;              // 0 - not armed, 1 - pre-armed, 2 - armed

// Reference motor values that are published
std_msgs::msgs::Float ref_motor_vel0;
std_msgs::msgs::Float ref_motor_vel1;
std_msgs::msgs::Float ref_motor_vel2;
std_msgs::msgs::Float ref_motor_vel3;

// Actions; for the state machine
std::string steps ("steps");
std::string hover ("hover");
std::string min_snap ("min_snap");
std::string _circle ("circle");
std::string _figure_eight ("fig8");

// TODO: I could probably pull this directly from the SDF file, not via head, but maybe dynamically at program start

// environmental variables
double _gravity = 9.81;     // m/s^2

// initialize physical properties of the vehicle
double _mass = 1.5;          // kg
double _hover_point = 665.0; // rad/s for one motor only
double _motor_force_const = 8.54858e-06;
Eigen::Matrix4d _motor_mapping((Eigen::Matrix4d() << 1.0, 0.5, 0.5, 1.0, 1.0, -0.5, 0.5, -1.0, 1.0, -0.5, -0.5, 1.0, 1.0, 0.5, -0.5, -1.0).finished());

// Setpoints for step response trajectory
bool _set_pt1 = 1;
bool _set_pt2 = 0;
bool _set_pt3 = 0;
bool _set_pt4 = 0;

// Minimum snap trajectory variables
Eigen::MatrixXd _traj_setpoints(6, 3);      // positions to achieve
Eigen::MatrixXd _ts(5,1);                   // one less x dimension as _trajectory
Eigen::MatrixXd _coef(40, 3);               // 8*(m_-1) x 3; where m_ is the row dimension of _traj_setpoints; resized in optimizer
double _total_traj_time;
bool _is_optimized = 0;                           // 0 -- not yet optimized, 1 -- optimal coefficients found
bool _start_traj = 0;                             // 0 -- not started,       1 -- started / in-progress
double _traj_time = 0.0;                          // current trajectory time
double _traj_start_time = 0.0;
bool _traj_finished = 0;

// Measured sensor values
Eigen::Matrix<double,1,4> _sensor_quat((Eigen::Matrix<double,1,4>() << 1.0, 0.0, 0.0, 0.0).finished());
Eigen::Matrix<double,1,3> _sensor_pos;

// Previous values for derivations
Eigen::Matrix<double,1,3> _prev_sensor_pos;
Eigen::Matrix<double,1,3> _prev_derived_euler_att;

// Derived values from sensor measurments
Eigen::Matrix<double,1,3> _derived_lin_vel;
Eigen::Matrix<double,1,3> _derived_euler_att;
Eigen::Matrix<double,1,3> _derived_pqr_att;

// Desired values to achieve
Eigen::Matrix<double,1,3> _desired_pos;
Eigen::Matrix<double,1,3> _desired_vel;
Eigen::Matrix<double,1,3> _desired_acc;
Eigen::Matrix<double,1,3> _desired_euler_att;
Eigen::Matrix<double,1,3> _orig_desired_euler_att;          // for attitude troubleshooting
Eigen::Array<double,1,3> _desired_pqr_att;
Eigen::Matrix<double,1,4> _desired_thrust((Eigen::Matrix<double,1,4>() << 0.0, 0.0, 0.0, 0.0).finished());
double _desired_tot_thrust_delta;

// Helper variables
Eigen::Matrix3d _q_hat((Eigen::Matrix3d() << 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0).finished());
Eigen::Matrix<double,1,4> _quat_normalized((Eigen::Matrix<double,1,4>() << 1.0, 0.0, 0.0, 0.0).finished());
Eigen::Matrix<double,1,3> _final_att_deltas;

// Controller gains
static Eigen::Matrix<double,1,3> _Kp_pos;
static Eigen::Matrix<double,1,3> _Kd_pos;
static Eigen::Matrix<double,1,3> _Kp_ang;
static Eigen::Matrix<double,1,3> _Kd_ang;

// Function declarations
void setpoint_trajectory();
void test_ol_takeoff();
void test_ol_land();
void test_cl_takeoff();
void derived_sensor_values();
void initialize_variables();
void basic_position_controller();
void basic_attitude_controller();
void minimum_snap_trajectory();
void generate_ts();
void min_snap_optimization();
void basic_hover();
void circling_trajectory();
void figure_eight_trajectory();

// Helper functions
Eigen::Matrix3d quat2rot(const Eigen::Ref<const Eigen::Matrix<double,1,4>>& q);
Eigen::Matrix<double,1,3> quat2euler(const Eigen::Ref<const Eigen::Matrix<double,1,4>>& q);
Eigen::Matrix<double,1,3> derive_ang_velocity(const Eigen::Ref<const Eigen::Matrix<double,1,3>>& e_);

#endif // SET_ROTOR_VEL_HPP
