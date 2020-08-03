// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frame.proto

#include "frame.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace PbFrame {
class EstimatorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Estimator>
      _instance;
} _Estimator_default_instance_;
}  // namespace PbFrame
namespace protobuf_frame_2eproto {
void InitDefaultsEstimatorImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_math_2eproto::InitDefaultsQuaternion();
  {
    void* ptr = &::PbFrame::_Estimator_default_instance_;
    new (ptr) ::PbFrame::Estimator();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PbFrame::Estimator::InitAsDefaultInstance();
}

void InitDefaultsEstimator() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsEstimatorImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFrame::Estimator, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFrame::Estimator, rs_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFrame::Estimator, ps_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFrame::Estimator, vs_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::PbFrame::Estimator)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::PbFrame::_Estimator_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "frame.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013frame.proto\022\007PbFrame\032\nmath.proto\"k\n\tEs"
      "timator\022\036\n\002RS\030\001 \003(\0132\022.PbMath.Quaternion\022"
      "\036\n\002PS\030\002 \003(\0132\022.PbMath.Quaternion\022\036\n\002VS\030\003 "
      "\003(\0132\022.PbMath.Quaternionb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 151);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "frame.proto", &protobuf_RegisterTypes);
  ::protobuf_math_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_frame_2eproto
namespace PbFrame {

// ===================================================================

void Estimator::InitAsDefaultInstance() {
}
void Estimator::clear_rs() {
  rs_.Clear();
}
void Estimator::clear_ps() {
  ps_.Clear();
}
void Estimator::clear_vs() {
  vs_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Estimator::kRSFieldNumber;
const int Estimator::kPSFieldNumber;
const int Estimator::kVSFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Estimator::Estimator()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_frame_2eproto::InitDefaultsEstimator();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PbFrame.Estimator)
}
Estimator::Estimator(const Estimator& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      rs_(from.rs_),
      ps_(from.ps_),
      vs_(from.vs_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:PbFrame.Estimator)
}

void Estimator::SharedCtor() {
  _cached_size_ = 0;
}

Estimator::~Estimator() {
  // @@protoc_insertion_point(destructor:PbFrame.Estimator)
  SharedDtor();
}

void Estimator::SharedDtor() {
}

void Estimator::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Estimator::descriptor() {
  ::protobuf_frame_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_frame_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Estimator& Estimator::default_instance() {
  ::protobuf_frame_2eproto::InitDefaultsEstimator();
  return *internal_default_instance();
}

Estimator* Estimator::New(::google::protobuf::Arena* arena) const {
  Estimator* n = new Estimator;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Estimator::Clear() {
// @@protoc_insertion_point(message_clear_start:PbFrame.Estimator)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rs_.Clear();
  ps_.Clear();
  vs_.Clear();
  _internal_metadata_.Clear();
}

bool Estimator::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PbFrame.Estimator)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .PbMath.Quaternion RS = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_rs()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .PbMath.Quaternion PS = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_ps()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .PbMath.Quaternion VS = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_vs()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PbFrame.Estimator)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PbFrame.Estimator)
  return false;
#undef DO_
}

void Estimator::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PbFrame.Estimator)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .PbMath.Quaternion RS = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->rs_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->rs(static_cast<int>(i)), output);
  }

  // repeated .PbMath.Quaternion PS = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ps_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->ps(static_cast<int>(i)), output);
  }

  // repeated .PbMath.Quaternion VS = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vs_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->vs(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:PbFrame.Estimator)
}

::google::protobuf::uint8* Estimator::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:PbFrame.Estimator)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .PbMath.Quaternion RS = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->rs_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->rs(static_cast<int>(i)), deterministic, target);
  }

  // repeated .PbMath.Quaternion PS = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ps_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->ps(static_cast<int>(i)), deterministic, target);
  }

  // repeated .PbMath.Quaternion VS = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vs_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->vs(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PbFrame.Estimator)
  return target;
}

size_t Estimator::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PbFrame.Estimator)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .PbMath.Quaternion RS = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->rs_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->rs(static_cast<int>(i)));
    }
  }

  // repeated .PbMath.Quaternion PS = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->ps_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->ps(static_cast<int>(i)));
    }
  }

  // repeated .PbMath.Quaternion VS = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->vs_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->vs(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Estimator::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PbFrame.Estimator)
  GOOGLE_DCHECK_NE(&from, this);
  const Estimator* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Estimator>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PbFrame.Estimator)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PbFrame.Estimator)
    MergeFrom(*source);
  }
}

void Estimator::MergeFrom(const Estimator& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PbFrame.Estimator)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  rs_.MergeFrom(from.rs_);
  ps_.MergeFrom(from.ps_);
  vs_.MergeFrom(from.vs_);
}

void Estimator::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PbFrame.Estimator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Estimator::CopyFrom(const Estimator& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PbFrame.Estimator)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Estimator::IsInitialized() const {
  return true;
}

void Estimator::Swap(Estimator* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Estimator::InternalSwap(Estimator* other) {
  using std::swap;
  rs_.InternalSwap(&other->rs_);
  ps_.InternalSwap(&other->ps_);
  vs_.InternalSwap(&other->vs_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Estimator::GetMetadata() const {
  protobuf_frame_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_frame_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace PbFrame

// @@protoc_insertion_point(global_scope)
