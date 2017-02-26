// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_privilege_5fsvr_5fpb_2ehxx__INCLUDED
#define PROTOBUF_privilege_5fsvr_5fpb_2ehxx__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "privilege_pb.hxx.pb.h"

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_privilege_5fsvr_5fpb_2ehxx();
void protobuf_AssignDesc_privilege_5fsvr_5fpb_2ehxx();
void protobuf_ShutdownFile_privilege_5fsvr_5fpb_2ehxx();

class PBAttrDef;
class PBPrivExec;
class PBPriv;
class CMessageAllPrivilegeNotify;
class CMessageServerStartUpNotify;

enum EMPrivExecType {
  EM_PRIV_CALL_DBPROC = 1,
  EM_PRIV_CALL_LOGPROC = 2,
  EM_PRIV_REMOTE_HOST_CALL = 3,
  EM_PRIV_PLALYER_CALL = 4
};
const ::google::protobuf::EnumDescriptor* EMPrivExecType_descriptor();
bool EMPrivExecType_IsValid(int value);
const EMPrivExecType EMPrivExecType_MIN = EM_PRIV_CALL_DBPROC;
const EMPrivExecType EMPrivExecType_MAX = EM_PRIV_PLALYER_CALL;

inline const ::std::string& EMPrivExecType_Name(EMPrivExecType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EMPrivExecType_descriptor(), value);
}
inline bool EMPrivExecType_Parse(
    const ::std::string& name, EMPrivExecType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EMPrivExecType>(
    EMPrivExecType_descriptor(), name, value);
}
enum EMFindPlayerMethod {
  EM_FIND_BY_ACCOUNT_ID = 1,
  EM_FIND_BY_ACCOUNT_NAME = 2,
  EM_FIND_BY_ROLE_ID = 3,
  EM_FIND_BY_ROLE_NAME = 4
};
const ::google::protobuf::EnumDescriptor* EMFindPlayerMethod_descriptor();
bool EMFindPlayerMethod_IsValid(int value);
const EMFindPlayerMethod EMFindPlayerMethod_MIN = EM_FIND_BY_ACCOUNT_ID;
const EMFindPlayerMethod EMFindPlayerMethod_MAX = EM_FIND_BY_ROLE_NAME;

inline const ::std::string& EMFindPlayerMethod_Name(EMFindPlayerMethod value) {
  return ::google::protobuf::internal::NameOfEnum(
    EMFindPlayerMethod_descriptor(), value);
}
inline bool EMFindPlayerMethod_Parse(
    const ::std::string& name, EMFindPlayerMethod* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EMFindPlayerMethod>(
    EMFindPlayerMethod_descriptor(), name, value);
}
// ===================================================================

class PBAttrDef : public ::google::protobuf::Message {
 public:
  PBAttrDef();
  virtual ~PBAttrDef();
  
  PBAttrDef(const PBAttrDef& from);
  
  inline PBAttrDef& operator=(const PBAttrDef& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PBAttrDef& default_instance();
  void Swap(PBAttrDef* other);
  
  // implements Message ----------------------------------------------
  
  PBAttrDef* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBAttrDef& from);
  void MergeFrom(const PBAttrDef& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);
  
  // optional string Code = 2;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 2;
  inline const ::std::string& code() const;
  inline void set_code(const ::std::string& value);
  inline void set_code(const char* value);
  inline void set_code(const char* value, size_t size);
  inline ::std::string* mutable_code();
  
  // required uint32 ValueType = 3;
  inline bool has_valuetype() const;
  inline void clear_valuetype();
  static const int kValueTypeFieldNumber = 3;
  inline ::google::protobuf::uint32 valuetype() const;
  inline void set_valuetype(::google::protobuf::uint32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 id_;
  ::std::string* code_;
  static const ::std::string _default_code_;
  ::google::protobuf::uint32 valuetype_;
  friend void  protobuf_AddDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_AssignDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_ShutdownFile_privilege_5fsvr_5fpb_2ehxx();
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static PBAttrDef* default_instance_;
};
// -------------------------------------------------------------------

class PBPrivExec : public ::google::protobuf::Message {
 public:
  PBPrivExec();
  virtual ~PBPrivExec();
  
  PBPrivExec(const PBPrivExec& from);
  
  inline PBPrivExec& operator=(const PBPrivExec& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PBPrivExec& default_instance();
  void Swap(PBPrivExec* other);
  
  // implements Message ----------------------------------------------
  
  PBPrivExec* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBPrivExec& from);
  void MergeFrom(const PBPrivExec& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .EMPrivExecType ExecType = 1;
  inline bool has_exectype() const;
  inline void clear_exectype();
  static const int kExecTypeFieldNumber = 1;
  inline EMPrivExecType exectype() const;
  inline void set_exectype(EMPrivExecType value);
  
  // optional string Procedure = 2;
  inline bool has_procedure() const;
  inline void clear_procedure();
  static const int kProcedureFieldNumber = 2;
  inline const ::std::string& procedure() const;
  inline void set_procedure(const ::std::string& value);
  inline void set_procedure(const char* value);
  inline void set_procedure(const char* value, size_t size);
  inline ::std::string* mutable_procedure();
  
  // optional uint32 HostType = 3;
  inline bool has_hosttype() const;
  inline void clear_hosttype();
  static const int kHostTypeFieldNumber = 3;
  inline ::google::protobuf::uint32 hosttype() const;
  inline void set_hosttype(::google::protobuf::uint32 value);
  
  // optional uint32 HostID = 4;
  inline bool has_hostid() const;
  inline void clear_hostid();
  static const int kHostIDFieldNumber = 4;
  inline ::google::protobuf::uint32 hostid() const;
  inline void set_hostid(::google::protobuf::uint32 value);
  
  // optional .EMFindPlayerMethod FindMethod = 5;
  inline bool has_findmethod() const;
  inline void clear_findmethod();
  static const int kFindMethodFieldNumber = 5;
  inline EMFindPlayerMethod findmethod() const;
  inline void set_findmethod(EMFindPlayerMethod value);
  
  // optional uint32 ParamID = 6;
  inline bool has_paramid() const;
  inline void clear_paramid();
  static const int kParamIDFieldNumber = 6;
  inline ::google::protobuf::uint32 paramid() const;
  inline void set_paramid(::google::protobuf::uint32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  int exectype_;
  ::std::string* procedure_;
  static const ::std::string _default_procedure_;
  ::google::protobuf::uint32 hosttype_;
  ::google::protobuf::uint32 hostid_;
  int findmethod_;
  ::google::protobuf::uint32 paramid_;
  friend void  protobuf_AddDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_AssignDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_ShutdownFile_privilege_5fsvr_5fpb_2ehxx();
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static PBPrivExec* default_instance_;
};
// -------------------------------------------------------------------

class PBPriv : public ::google::protobuf::Message {
 public:
  PBPriv();
  virtual ~PBPriv();
  
  PBPriv(const PBPriv& from);
  
  inline PBPriv& operator=(const PBPriv& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PBPriv& default_instance();
  void Swap(PBPriv* other);
  
  // implements Message ----------------------------------------------
  
  PBPriv* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBPriv& from);
  void MergeFrom(const PBPriv& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);
  
  // optional string Code = 2;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 2;
  inline const ::std::string& code() const;
  inline void set_code(const ::std::string& value);
  inline void set_code(const char* value);
  inline void set_code(const char* value, size_t size);
  inline ::std::string* mutable_code();
  
  // repeated .PBAttrDef Input = 3;
  inline int input_size() const;
  inline void clear_input();
  static const int kInputFieldNumber = 3;
  inline const ::google::protobuf::RepeatedPtrField< ::PBAttrDef >& input() const;
  inline ::google::protobuf::RepeatedPtrField< ::PBAttrDef >* mutable_input();
  inline const ::PBAttrDef& input(int index) const;
  inline ::PBAttrDef* mutable_input(int index);
  inline ::PBAttrDef* add_input();
  
  // required uint32 Output = 4;
  inline bool has_output() const;
  inline void clear_output();
  static const int kOutputFieldNumber = 4;
  inline ::google::protobuf::uint32 output() const;
  inline void set_output(::google::protobuf::uint32 value);
  
  // required .PBValue Property = 5;
  inline bool has_property() const;
  inline void clear_property();
  static const int kPropertyFieldNumber = 5;
  inline const ::PBValue& property() const;
  inline ::PBValue* mutable_property();
  
  // optional .PBPrivExec Exec = 6;
  inline bool has_exec() const;
  inline void clear_exec();
  static const int kExecFieldNumber = 6;
  inline const ::PBPrivExec& exec() const;
  inline ::PBPrivExec* mutable_exec();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 id_;
  ::std::string* code_;
  static const ::std::string _default_code_;
  ::google::protobuf::RepeatedPtrField< ::PBAttrDef > input_;
  ::google::protobuf::uint32 output_;
  ::PBValue* property_;
  ::PBPrivExec* exec_;
  friend void  protobuf_AddDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_AssignDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_ShutdownFile_privilege_5fsvr_5fpb_2ehxx();
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static PBPriv* default_instance_;
};
// -------------------------------------------------------------------

class CMessageAllPrivilegeNotify : public ::google::protobuf::Message {
 public:
  CMessageAllPrivilegeNotify();
  virtual ~CMessageAllPrivilegeNotify();
  
  CMessageAllPrivilegeNotify(const CMessageAllPrivilegeNotify& from);
  
  inline CMessageAllPrivilegeNotify& operator=(const CMessageAllPrivilegeNotify& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageAllPrivilegeNotify& default_instance();
  void Swap(CMessageAllPrivilegeNotify* other);
  
  // implements Message ----------------------------------------------
  
  CMessageAllPrivilegeNotify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CMessageAllPrivilegeNotify& from);
  void MergeFrom(const CMessageAllPrivilegeNotify& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .PBPriv Privileges = 1;
  inline int privileges_size() const;
  inline void clear_privileges();
  static const int kPrivilegesFieldNumber = 1;
  inline const ::google::protobuf::RepeatedPtrField< ::PBPriv >& privileges() const;
  inline ::google::protobuf::RepeatedPtrField< ::PBPriv >* mutable_privileges();
  inline const ::PBPriv& privileges(int index) const;
  inline ::PBPriv* mutable_privileges(int index);
  inline ::PBPriv* add_privileges();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::PBPriv > privileges_;
  friend void  protobuf_AddDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_AssignDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_ShutdownFile_privilege_5fsvr_5fpb_2ehxx();
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CMessageAllPrivilegeNotify* default_instance_;
};
// -------------------------------------------------------------------

class CMessageServerStartUpNotify : public ::google::protobuf::Message {
 public:
  CMessageServerStartUpNotify();
  virtual ~CMessageServerStartUpNotify();
  
  CMessageServerStartUpNotify(const CMessageServerStartUpNotify& from);
  
  inline CMessageServerStartUpNotify& operator=(const CMessageServerStartUpNotify& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageServerStartUpNotify& default_instance();
  void Swap(CMessageServerStartUpNotify* other);
  
  // implements Message ----------------------------------------------
  
  CMessageServerStartUpNotify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CMessageServerStartUpNotify& from);
  void MergeFrom(const CMessageServerStartUpNotify& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  friend void  protobuf_AddDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_AssignDesc_privilege_5fsvr_5fpb_2ehxx();
  friend void protobuf_ShutdownFile_privilege_5fsvr_5fpb_2ehxx();
  ::google::protobuf::uint32 _has_bits_[1];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CMessageServerStartUpNotify* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// PBAttrDef

// required uint32 ID = 1;
inline bool PBAttrDef::has_id() const {
  return _has_bit(0);
}
inline void PBAttrDef::clear_id() {
  id_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 PBAttrDef::id() const {
  return id_;
}
inline void PBAttrDef::set_id(::google::protobuf::uint32 value) {
  _set_bit(0);
  id_ = value;
}

// optional string Code = 2;
inline bool PBAttrDef::has_code() const {
  return _has_bit(1);
}
inline void PBAttrDef::clear_code() {
  if (code_ != &_default_code_) {
    code_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& PBAttrDef::code() const {
  return *code_;
}
inline void PBAttrDef::set_code(const ::std::string& value) {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  code_->assign(value);
}
inline void PBAttrDef::set_code(const char* value) {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  code_->assign(value);
}
inline void PBAttrDef::set_code(const char* value, size_t size) {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  code_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBAttrDef::mutable_code() {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  return code_;
}

// required uint32 ValueType = 3;
inline bool PBAttrDef::has_valuetype() const {
  return _has_bit(2);
}
inline void PBAttrDef::clear_valuetype() {
  valuetype_ = 0u;
  _clear_bit(2);
}
inline ::google::protobuf::uint32 PBAttrDef::valuetype() const {
  return valuetype_;
}
inline void PBAttrDef::set_valuetype(::google::protobuf::uint32 value) {
  _set_bit(2);
  valuetype_ = value;
}

// -------------------------------------------------------------------

// PBPrivExec

// required .EMPrivExecType ExecType = 1;
inline bool PBPrivExec::has_exectype() const {
  return _has_bit(0);
}
inline void PBPrivExec::clear_exectype() {
  exectype_ = 1;
  _clear_bit(0);
}
inline EMPrivExecType PBPrivExec::exectype() const {
  return static_cast< EMPrivExecType >(exectype_);
}
inline void PBPrivExec::set_exectype(EMPrivExecType value) {
  GOOGLE_DCHECK(EMPrivExecType_IsValid(value));
  _set_bit(0);
  exectype_ = value;
}

// optional string Procedure = 2;
inline bool PBPrivExec::has_procedure() const {
  return _has_bit(1);
}
inline void PBPrivExec::clear_procedure() {
  if (procedure_ != &_default_procedure_) {
    procedure_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& PBPrivExec::procedure() const {
  return *procedure_;
}
inline void PBPrivExec::set_procedure(const ::std::string& value) {
  _set_bit(1);
  if (procedure_ == &_default_procedure_) {
    procedure_ = new ::std::string;
  }
  procedure_->assign(value);
}
inline void PBPrivExec::set_procedure(const char* value) {
  _set_bit(1);
  if (procedure_ == &_default_procedure_) {
    procedure_ = new ::std::string;
  }
  procedure_->assign(value);
}
inline void PBPrivExec::set_procedure(const char* value, size_t size) {
  _set_bit(1);
  if (procedure_ == &_default_procedure_) {
    procedure_ = new ::std::string;
  }
  procedure_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBPrivExec::mutable_procedure() {
  _set_bit(1);
  if (procedure_ == &_default_procedure_) {
    procedure_ = new ::std::string;
  }
  return procedure_;
}

// optional uint32 HostType = 3;
inline bool PBPrivExec::has_hosttype() const {
  return _has_bit(2);
}
inline void PBPrivExec::clear_hosttype() {
  hosttype_ = 0u;
  _clear_bit(2);
}
inline ::google::protobuf::uint32 PBPrivExec::hosttype() const {
  return hosttype_;
}
inline void PBPrivExec::set_hosttype(::google::protobuf::uint32 value) {
  _set_bit(2);
  hosttype_ = value;
}

// optional uint32 HostID = 4;
inline bool PBPrivExec::has_hostid() const {
  return _has_bit(3);
}
inline void PBPrivExec::clear_hostid() {
  hostid_ = 0u;
  _clear_bit(3);
}
inline ::google::protobuf::uint32 PBPrivExec::hostid() const {
  return hostid_;
}
inline void PBPrivExec::set_hostid(::google::protobuf::uint32 value) {
  _set_bit(3);
  hostid_ = value;
}

// optional .EMFindPlayerMethod FindMethod = 5;
inline bool PBPrivExec::has_findmethod() const {
  return _has_bit(4);
}
inline void PBPrivExec::clear_findmethod() {
  findmethod_ = 1;
  _clear_bit(4);
}
inline EMFindPlayerMethod PBPrivExec::findmethod() const {
  return static_cast< EMFindPlayerMethod >(findmethod_);
}
inline void PBPrivExec::set_findmethod(EMFindPlayerMethod value) {
  GOOGLE_DCHECK(EMFindPlayerMethod_IsValid(value));
  _set_bit(4);
  findmethod_ = value;
}

// optional uint32 ParamID = 6;
inline bool PBPrivExec::has_paramid() const {
  return _has_bit(5);
}
inline void PBPrivExec::clear_paramid() {
  paramid_ = 0u;
  _clear_bit(5);
}
inline ::google::protobuf::uint32 PBPrivExec::paramid() const {
  return paramid_;
}
inline void PBPrivExec::set_paramid(::google::protobuf::uint32 value) {
  _set_bit(5);
  paramid_ = value;
}

// -------------------------------------------------------------------

// PBPriv

// required uint32 ID = 1;
inline bool PBPriv::has_id() const {
  return _has_bit(0);
}
inline void PBPriv::clear_id() {
  id_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 PBPriv::id() const {
  return id_;
}
inline void PBPriv::set_id(::google::protobuf::uint32 value) {
  _set_bit(0);
  id_ = value;
}

// optional string Code = 2;
inline bool PBPriv::has_code() const {
  return _has_bit(1);
}
inline void PBPriv::clear_code() {
  if (code_ != &_default_code_) {
    code_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& PBPriv::code() const {
  return *code_;
}
inline void PBPriv::set_code(const ::std::string& value) {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  code_->assign(value);
}
inline void PBPriv::set_code(const char* value) {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  code_->assign(value);
}
inline void PBPriv::set_code(const char* value, size_t size) {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  code_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBPriv::mutable_code() {
  _set_bit(1);
  if (code_ == &_default_code_) {
    code_ = new ::std::string;
  }
  return code_;
}

// repeated .PBAttrDef Input = 3;
inline int PBPriv::input_size() const {
  return input_.size();
}
inline void PBPriv::clear_input() {
  input_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::PBAttrDef >&
PBPriv::input() const {
  return input_;
}
inline ::google::protobuf::RepeatedPtrField< ::PBAttrDef >*
PBPriv::mutable_input() {
  return &input_;
}
inline const ::PBAttrDef& PBPriv::input(int index) const {
  return input_.Get(index);
}
inline ::PBAttrDef* PBPriv::mutable_input(int index) {
  return input_.Mutable(index);
}
inline ::PBAttrDef* PBPriv::add_input() {
  return input_.Add();
}

// required uint32 Output = 4;
inline bool PBPriv::has_output() const {
  return _has_bit(3);
}
inline void PBPriv::clear_output() {
  output_ = 0u;
  _clear_bit(3);
}
inline ::google::protobuf::uint32 PBPriv::output() const {
  return output_;
}
inline void PBPriv::set_output(::google::protobuf::uint32 value) {
  _set_bit(3);
  output_ = value;
}

// required .PBValue Property = 5;
inline bool PBPriv::has_property() const {
  return _has_bit(4);
}
inline void PBPriv::clear_property() {
  if (property_ != NULL) property_->::PBValue::Clear();
  _clear_bit(4);
}
inline const ::PBValue& PBPriv::property() const {
  return property_ != NULL ? *property_ : *default_instance_->property_;
}
inline ::PBValue* PBPriv::mutable_property() {
  _set_bit(4);
  if (property_ == NULL) property_ = new ::PBValue;
  return property_;
}

// optional .PBPrivExec Exec = 6;
inline bool PBPriv::has_exec() const {
  return _has_bit(5);
}
inline void PBPriv::clear_exec() {
  if (exec_ != NULL) exec_->::PBPrivExec::Clear();
  _clear_bit(5);
}
inline const ::PBPrivExec& PBPriv::exec() const {
  return exec_ != NULL ? *exec_ : *default_instance_->exec_;
}
inline ::PBPrivExec* PBPriv::mutable_exec() {
  _set_bit(5);
  if (exec_ == NULL) exec_ = new ::PBPrivExec;
  return exec_;
}

// -------------------------------------------------------------------

// CMessageAllPrivilegeNotify

// repeated .PBPriv Privileges = 1;
inline int CMessageAllPrivilegeNotify::privileges_size() const {
  return privileges_.size();
}
inline void CMessageAllPrivilegeNotify::clear_privileges() {
  privileges_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::PBPriv >&
CMessageAllPrivilegeNotify::privileges() const {
  return privileges_;
}
inline ::google::protobuf::RepeatedPtrField< ::PBPriv >*
CMessageAllPrivilegeNotify::mutable_privileges() {
  return &privileges_;
}
inline const ::PBPriv& CMessageAllPrivilegeNotify::privileges(int index) const {
  return privileges_.Get(index);
}
inline ::PBPriv* CMessageAllPrivilegeNotify::mutable_privileges(int index) {
  return privileges_.Mutable(index);
}
inline ::PBPriv* CMessageAllPrivilegeNotify::add_privileges() {
  return privileges_.Add();
}

// -------------------------------------------------------------------

// CMessageServerStartUpNotify

#endif  // PROTOBUF_privilege_5fsvr_5fpb_2ehxx__INCLUDED