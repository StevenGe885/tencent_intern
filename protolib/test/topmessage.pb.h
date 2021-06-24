// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: topmessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_topmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_topmessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_topmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_topmessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_topmessage_2eproto;
class TopMessage;
struct TopMessageDefaultTypeInternal;
extern TopMessageDefaultTypeInternal _TopMessage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::TopMessage* Arena::CreateMaybeMessage<::TopMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class TopMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TopMessage) */ {
 public:
  inline TopMessage() : TopMessage(nullptr) {}
  ~TopMessage() override;
  explicit constexpr TopMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TopMessage(const TopMessage& from);
  TopMessage(TopMessage&& from) noexcept
    : TopMessage() {
    *this = ::std::move(from);
  }

  inline TopMessage& operator=(const TopMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TopMessage& operator=(TopMessage&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TopMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const TopMessage* internal_default_instance() {
    return reinterpret_cast<const TopMessage*>(
               &_TopMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TopMessage& a, TopMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TopMessage* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TopMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TopMessage* New() const final {
    return new TopMessage();
  }

  TopMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TopMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TopMessage& from);
  void MergeFrom(const TopMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TopMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TopMessage";
  }
  protected:
  explicit TopMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 3,
    kValFieldNumber = 2,
    kIdFieldNumber = 1,
    kCheckedFieldNumber = 4,
  };
  // string name = 3;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // double val = 2;
  void clear_val();
  double val() const;
  void set_val(double value);
  private:
  double _internal_val() const;
  void _internal_set_val(double value);
  public:

  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool checked = 4;
  void clear_checked();
  bool checked() const;
  void set_checked(bool value);
  private:
  bool _internal_checked() const;
  void _internal_set_checked(bool value);
  public:

  // @@protoc_insertion_point(class_scope:TopMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  double val_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  bool checked_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_topmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TopMessage

// int32 id = 1;
inline void TopMessage::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TopMessage::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TopMessage::id() const {
  // @@protoc_insertion_point(field_get:TopMessage.id)
  return _internal_id();
}
inline void TopMessage::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void TopMessage::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:TopMessage.id)
}

// double val = 2;
inline void TopMessage::clear_val() {
  val_ = 0;
}
inline double TopMessage::_internal_val() const {
  return val_;
}
inline double TopMessage::val() const {
  // @@protoc_insertion_point(field_get:TopMessage.val)
  return _internal_val();
}
inline void TopMessage::_internal_set_val(double value) {
  
  val_ = value;
}
inline void TopMessage::set_val(double value) {
  _internal_set_val(value);
  // @@protoc_insertion_point(field_set:TopMessage.val)
}

// string name = 3;
inline void TopMessage::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& TopMessage::name() const {
  // @@protoc_insertion_point(field_get:TopMessage.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TopMessage::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:TopMessage.name)
}
inline std::string* TopMessage::mutable_name() {
  // @@protoc_insertion_point(field_mutable:TopMessage.name)
  return _internal_mutable_name();
}
inline const std::string& TopMessage::_internal_name() const {
  return name_.Get();
}
inline void TopMessage::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* TopMessage::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* TopMessage::release_name() {
  // @@protoc_insertion_point(field_release:TopMessage.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void TopMessage::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:TopMessage.name)
}

// bool checked = 4;
inline void TopMessage::clear_checked() {
  checked_ = false;
}
inline bool TopMessage::_internal_checked() const {
  return checked_;
}
inline bool TopMessage::checked() const {
  // @@protoc_insertion_point(field_get:TopMessage.checked)
  return _internal_checked();
}
inline void TopMessage::_internal_set_checked(bool value) {
  
  checked_ = value;
}
inline void TopMessage::set_checked(bool value) {
  _internal_set_checked(value);
  // @@protoc_insertion_point(field_set:TopMessage.checked)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_topmessage_2eproto
