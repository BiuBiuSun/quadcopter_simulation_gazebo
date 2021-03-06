// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: local_poses_stamped.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "local_poses_stamped.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* LocalPosesStamped_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LocalPosesStamped_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_local_5fposes_5fstamped_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_local_5fposes_5fstamped_2eproto() {
  protobuf_AddDesc_local_5fposes_5fstamped_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "local_poses_stamped.proto");
  GOOGLE_CHECK(file != NULL);
  LocalPosesStamped_descriptor_ = file->message_type(0);
  static const int LocalPosesStamped_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalPosesStamped, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalPosesStamped, pose_),
  };
  LocalPosesStamped_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LocalPosesStamped_descriptor_,
      LocalPosesStamped::default_instance_,
      LocalPosesStamped_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalPosesStamped, _has_bits_[0]),
      -1,
      -1,
      sizeof(LocalPosesStamped),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalPosesStamped, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_local_5fposes_5fstamped_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LocalPosesStamped_descriptor_, &LocalPosesStamped::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_local_5fposes_5fstamped_2eproto() {
  delete LocalPosesStamped::default_instance_;
  delete LocalPosesStamped_reflection_;
}

void protobuf_AddDesc_local_5fposes_5fstamped_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_local_5fposes_5fstamped_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_time_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_local_5fpose_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031local_poses_stamped.proto\022\013gazebo.msgs"
    "\032\ntime.proto\032\020local_pose.proto\"Z\n\021LocalP"
    "osesStamped\022\037\n\004time\030\001 \002(\0132\021.gazebo.msgs."
    "Time\022$\n\004pose\030\002 \003(\0132\026.gazebo.msgs.LocalPo"
    "se", 162);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "local_poses_stamped.proto", &protobuf_RegisterTypes);
  LocalPosesStamped::default_instance_ = new LocalPosesStamped();
  LocalPosesStamped::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_local_5fposes_5fstamped_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_local_5fposes_5fstamped_2eproto {
  StaticDescriptorInitializer_local_5fposes_5fstamped_2eproto() {
    protobuf_AddDesc_local_5fposes_5fstamped_2eproto();
  }
} static_descriptor_initializer_local_5fposes_5fstamped_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LocalPosesStamped::kTimeFieldNumber;
const int LocalPosesStamped::kPoseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LocalPosesStamped::LocalPosesStamped()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LocalPosesStamped)
}

void LocalPosesStamped::InitAsDefaultInstance() {
  time_ = const_cast< ::gazebo::msgs::Time*>(&::gazebo::msgs::Time::default_instance());
}

LocalPosesStamped::LocalPosesStamped(const LocalPosesStamped& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LocalPosesStamped)
}

void LocalPosesStamped::SharedCtor() {
  _cached_size_ = 0;
  time_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LocalPosesStamped::~LocalPosesStamped() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LocalPosesStamped)
  SharedDtor();
}

void LocalPosesStamped::SharedDtor() {
  if (this != default_instance_) {
    delete time_;
  }
}

void LocalPosesStamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LocalPosesStamped::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LocalPosesStamped_descriptor_;
}

const LocalPosesStamped& LocalPosesStamped::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_local_5fposes_5fstamped_2eproto();
  return *default_instance_;
}

LocalPosesStamped* LocalPosesStamped::default_instance_ = NULL;

LocalPosesStamped* LocalPosesStamped::New(::google::protobuf::Arena* arena) const {
  LocalPosesStamped* n = new LocalPosesStamped;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LocalPosesStamped::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.LocalPosesStamped)
  if (has_time()) {
    if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
  }
  pose_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool LocalPosesStamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.LocalPosesStamped)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Time time = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_time()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pose;
        break;
      }

      // repeated .gazebo.msgs.LocalPose pose = 2;
      case 2: {
        if (tag == 18) {
         parse_pose:
          DO_(input->IncrementRecursionDepth());
         parse_loop_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_pose()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_pose;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gazebo.msgs.LocalPosesStamped)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.LocalPosesStamped)
  return false;
#undef DO_
}

void LocalPosesStamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.LocalPosesStamped)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->time_, output);
  }

  // repeated .gazebo.msgs.LocalPose pose = 2;
  for (unsigned int i = 0, n = this->pose_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->pose(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.LocalPosesStamped)
}

::google::protobuf::uint8* LocalPosesStamped::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LocalPosesStamped)
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->time_, false, target);
  }

  // repeated .gazebo.msgs.LocalPose pose = 2;
  for (unsigned int i = 0, n = this->pose_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->pose(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LocalPosesStamped)
  return target;
}

int LocalPosesStamped::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.LocalPosesStamped)
  int total_size = 0;

  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->time_);
  }
  // repeated .gazebo.msgs.LocalPose pose = 2;
  total_size += 1 * this->pose_size();
  for (int i = 0; i < this->pose_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pose(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LocalPosesStamped::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.LocalPosesStamped)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LocalPosesStamped* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LocalPosesStamped>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.LocalPosesStamped)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.LocalPosesStamped)
    MergeFrom(*source);
  }
}

void LocalPosesStamped::MergeFrom(const LocalPosesStamped& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.LocalPosesStamped)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  pose_.MergeFrom(from.pose_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      mutable_time()->::gazebo::msgs::Time::MergeFrom(from.time());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void LocalPosesStamped::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.LocalPosesStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocalPosesStamped::CopyFrom(const LocalPosesStamped& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.LocalPosesStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalPosesStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_time()) {
    if (!this->time_->IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->pose())) return false;
  return true;
}

void LocalPosesStamped::Swap(LocalPosesStamped* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LocalPosesStamped::InternalSwap(LocalPosesStamped* other) {
  std::swap(time_, other->time_);
  pose_.UnsafeArenaSwap(&other->pose_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LocalPosesStamped::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LocalPosesStamped_descriptor_;
  metadata.reflection = LocalPosesStamped_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LocalPosesStamped

// required .gazebo.msgs.Time time = 1;
bool LocalPosesStamped::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LocalPosesStamped::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
void LocalPosesStamped::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
void LocalPosesStamped::clear_time() {
  if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
  clear_has_time();
}
const ::gazebo::msgs::Time& LocalPosesStamped::time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LocalPosesStamped.time)
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
::gazebo::msgs::Time* LocalPosesStamped::mutable_time() {
  set_has_time();
  if (time_ == NULL) {
    time_ = new ::gazebo::msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LocalPosesStamped.time)
  return time_;
}
::gazebo::msgs::Time* LocalPosesStamped::release_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LocalPosesStamped.time)
  clear_has_time();
  ::gazebo::msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
void LocalPosesStamped::set_allocated_time(::gazebo::msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LocalPosesStamped.time)
}

// repeated .gazebo.msgs.LocalPose pose = 2;
int LocalPosesStamped::pose_size() const {
  return pose_.size();
}
void LocalPosesStamped::clear_pose() {
  pose_.Clear();
}
const ::gazebo::msgs::LocalPose& LocalPosesStamped::pose(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LocalPosesStamped.pose)
  return pose_.Get(index);
}
::gazebo::msgs::LocalPose* LocalPosesStamped::mutable_pose(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LocalPosesStamped.pose)
  return pose_.Mutable(index);
}
::gazebo::msgs::LocalPose* LocalPosesStamped::add_pose() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.LocalPosesStamped.pose)
  return pose_.Add();
}
::google::protobuf::RepeatedPtrField< ::gazebo::msgs::LocalPose >*
LocalPosesStamped::mutable_pose() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.LocalPosesStamped.pose)
  return &pose_;
}
const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::LocalPose >&
LocalPosesStamped::pose() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.LocalPosesStamped.pose)
  return pose_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
