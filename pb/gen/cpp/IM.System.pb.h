// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.System.proto

#ifndef PROTOBUF_IM_2eSystem_2eproto__INCLUDED
#define PROTOBUF_IM_2eSystem_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace IM {
namespace System {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_IM_2eSystem_2eproto();
void protobuf_AssignDesc_IM_2eSystem_2eproto();
void protobuf_ShutdownFile_IM_2eSystem_2eproto();

class IMSystemMsgInfo;

// ===================================================================

class IMSystemMsgInfo : public ::google::protobuf::MessageLite {
 public:
  IMSystemMsgInfo();
  virtual ~IMSystemMsgInfo();

  IMSystemMsgInfo(const IMSystemMsgInfo& from);

  inline IMSystemMsgInfo& operator=(const IMSystemMsgInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const IMSystemMsgInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const IMSystemMsgInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(IMSystemMsgInfo* other);

  // implements Message ----------------------------------------------

  IMSystemMsgInfo* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const IMSystemMsgInfo& from);
  void MergeFrom(const IMSystemMsgInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 from_user_id = 1;
  inline bool has_from_user_id() const;
  inline void clear_from_user_id();
  static const int kFromUserIdFieldNumber = 1;
  inline ::google::protobuf::uint32 from_user_id() const;
  inline void set_from_user_id(::google::protobuf::uint32 value);

  // required uint32 to_user_id = 2;
  inline bool has_to_user_id() const;
  inline void clear_to_user_id();
  static const int kToUserIdFieldNumber = 2;
  inline ::google::protobuf::uint32 to_user_id() const;
  inline void set_to_user_id(::google::protobuf::uint32 value);

  // optional bytes addition_msg = 3;
  inline bool has_addition_msg() const;
  inline void clear_addition_msg();
  static const int kAdditionMsgFieldNumber = 3;
  inline const ::std::string& addition_msg() const;
  inline void set_addition_msg(const ::std::string& value);
  inline void set_addition_msg(const char* value);
  inline void set_addition_msg(const void* value, size_t size);
  inline ::std::string* mutable_addition_msg();
  inline ::std::string* release_addition_msg();
  inline void set_allocated_addition_msg(::std::string* addition_msg);

  // optional bytes attach_data = 20;
  inline bool has_attach_data() const;
  inline void clear_attach_data();
  static const int kAttachDataFieldNumber = 20;
  inline const ::std::string& attach_data() const;
  inline void set_attach_data(const ::std::string& value);
  inline void set_attach_data(const char* value);
  inline void set_attach_data(const void* value, size_t size);
  inline ::std::string* mutable_attach_data();
  inline ::std::string* release_attach_data();
  inline void set_allocated_attach_data(::std::string* attach_data);

  // @@protoc_insertion_point(class_scope:IM.System.IMSystemMsgInfo)
 private:
  inline void set_has_from_user_id();
  inline void clear_has_from_user_id();
  inline void set_has_to_user_id();
  inline void clear_has_to_user_id();
  inline void set_has_addition_msg();
  inline void clear_has_addition_msg();
  inline void set_has_attach_data();
  inline void clear_has_attach_data();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 from_user_id_;
  ::google::protobuf::uint32 to_user_id_;
  ::std::string* addition_msg_;
  ::std::string* attach_data_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_IM_2eSystem_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_IM_2eSystem_2eproto();
  #endif
  friend void protobuf_AssignDesc_IM_2eSystem_2eproto();
  friend void protobuf_ShutdownFile_IM_2eSystem_2eproto();

  void InitAsDefaultInstance();
  static IMSystemMsgInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// IMSystemMsgInfo

// required uint32 from_user_id = 1;
inline bool IMSystemMsgInfo::has_from_user_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IMSystemMsgInfo::set_has_from_user_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IMSystemMsgInfo::clear_has_from_user_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IMSystemMsgInfo::clear_from_user_id() {
  from_user_id_ = 0u;
  clear_has_from_user_id();
}
inline ::google::protobuf::uint32 IMSystemMsgInfo::from_user_id() const {
  // @@protoc_insertion_point(field_get:IM.System.IMSystemMsgInfo.from_user_id)
  return from_user_id_;
}
inline void IMSystemMsgInfo::set_from_user_id(::google::protobuf::uint32 value) {
  set_has_from_user_id();
  from_user_id_ = value;
  // @@protoc_insertion_point(field_set:IM.System.IMSystemMsgInfo.from_user_id)
}

// required uint32 to_user_id = 2;
inline bool IMSystemMsgInfo::has_to_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IMSystemMsgInfo::set_has_to_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IMSystemMsgInfo::clear_has_to_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IMSystemMsgInfo::clear_to_user_id() {
  to_user_id_ = 0u;
  clear_has_to_user_id();
}
inline ::google::protobuf::uint32 IMSystemMsgInfo::to_user_id() const {
  // @@protoc_insertion_point(field_get:IM.System.IMSystemMsgInfo.to_user_id)
  return to_user_id_;
}
inline void IMSystemMsgInfo::set_to_user_id(::google::protobuf::uint32 value) {
  set_has_to_user_id();
  to_user_id_ = value;
  // @@protoc_insertion_point(field_set:IM.System.IMSystemMsgInfo.to_user_id)
}

// optional bytes addition_msg = 3;
inline bool IMSystemMsgInfo::has_addition_msg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IMSystemMsgInfo::set_has_addition_msg() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IMSystemMsgInfo::clear_has_addition_msg() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IMSystemMsgInfo::clear_addition_msg() {
  if (addition_msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    addition_msg_->clear();
  }
  clear_has_addition_msg();
}
inline const ::std::string& IMSystemMsgInfo::addition_msg() const {
  // @@protoc_insertion_point(field_get:IM.System.IMSystemMsgInfo.addition_msg)
  return *addition_msg_;
}
inline void IMSystemMsgInfo::set_addition_msg(const ::std::string& value) {
  set_has_addition_msg();
  if (addition_msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    addition_msg_ = new ::std::string;
  }
  addition_msg_->assign(value);
  // @@protoc_insertion_point(field_set:IM.System.IMSystemMsgInfo.addition_msg)
}
inline void IMSystemMsgInfo::set_addition_msg(const char* value) {
  set_has_addition_msg();
  if (addition_msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    addition_msg_ = new ::std::string;
  }
  addition_msg_->assign(value);
  // @@protoc_insertion_point(field_set_char:IM.System.IMSystemMsgInfo.addition_msg)
}
inline void IMSystemMsgInfo::set_addition_msg(const void* value, size_t size) {
  set_has_addition_msg();
  if (addition_msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    addition_msg_ = new ::std::string;
  }
  addition_msg_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IM.System.IMSystemMsgInfo.addition_msg)
}
inline ::std::string* IMSystemMsgInfo::mutable_addition_msg() {
  set_has_addition_msg();
  if (addition_msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    addition_msg_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IM.System.IMSystemMsgInfo.addition_msg)
  return addition_msg_;
}
inline ::std::string* IMSystemMsgInfo::release_addition_msg() {
  clear_has_addition_msg();
  if (addition_msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = addition_msg_;
    addition_msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMSystemMsgInfo::set_allocated_addition_msg(::std::string* addition_msg) {
  if (addition_msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete addition_msg_;
  }
  if (addition_msg) {
    set_has_addition_msg();
    addition_msg_ = addition_msg;
  } else {
    clear_has_addition_msg();
    addition_msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IM.System.IMSystemMsgInfo.addition_msg)
}

// optional bytes attach_data = 20;
inline bool IMSystemMsgInfo::has_attach_data() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void IMSystemMsgInfo::set_has_attach_data() {
  _has_bits_[0] |= 0x00000008u;
}
inline void IMSystemMsgInfo::clear_has_attach_data() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void IMSystemMsgInfo::clear_attach_data() {
  if (attach_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    attach_data_->clear();
  }
  clear_has_attach_data();
}
inline const ::std::string& IMSystemMsgInfo::attach_data() const {
  // @@protoc_insertion_point(field_get:IM.System.IMSystemMsgInfo.attach_data)
  return *attach_data_;
}
inline void IMSystemMsgInfo::set_attach_data(const ::std::string& value) {
  set_has_attach_data();
  if (attach_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    attach_data_ = new ::std::string;
  }
  attach_data_->assign(value);
  // @@protoc_insertion_point(field_set:IM.System.IMSystemMsgInfo.attach_data)
}
inline void IMSystemMsgInfo::set_attach_data(const char* value) {
  set_has_attach_data();
  if (attach_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    attach_data_ = new ::std::string;
  }
  attach_data_->assign(value);
  // @@protoc_insertion_point(field_set_char:IM.System.IMSystemMsgInfo.attach_data)
}
inline void IMSystemMsgInfo::set_attach_data(const void* value, size_t size) {
  set_has_attach_data();
  if (attach_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    attach_data_ = new ::std::string;
  }
  attach_data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IM.System.IMSystemMsgInfo.attach_data)
}
inline ::std::string* IMSystemMsgInfo::mutable_attach_data() {
  set_has_attach_data();
  if (attach_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    attach_data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IM.System.IMSystemMsgInfo.attach_data)
  return attach_data_;
}
inline ::std::string* IMSystemMsgInfo::release_attach_data() {
  clear_has_attach_data();
  if (attach_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = attach_data_;
    attach_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMSystemMsgInfo::set_allocated_attach_data(::std::string* attach_data) {
  if (attach_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete attach_data_;
  }
  if (attach_data) {
    set_has_attach_data();
    attach_data_ = attach_data;
  } else {
    clear_has_attach_data();
    attach_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IM.System.IMSystemMsgInfo.attach_data)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace System
}  // namespace IM

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_IM_2eSystem_2eproto__INCLUDED