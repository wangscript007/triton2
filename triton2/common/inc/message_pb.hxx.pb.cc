// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "message_pb.hxx.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>
#ifdef LEAK_CHK_DEBUG_NEW
#include "debug_new.h"
#endif

namespace {

const ::google::protobuf::Descriptor* CCSHead_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CCSHead_reflection_ = NULL;
const ::google::protobuf::Descriptor* CMessageHead_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CMessageHead_reflection_ = NULL;
const ::google::protobuf::Descriptor* CMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* enMessageFE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* enMessageType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EmModuleFlagForMessage_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_5fpb_2ehxx() {
  protobuf_AddDesc_message_5fpb_2ehxx();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message_pb.hxx");
  GOOGLE_CHECK(file != NULL);
  CCSHead_descriptor_ = file->message_type(0);
  static const int CCSHead_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CCSHead, uin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CCSHead, dialogid_),
  };
  CCSHead_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CCSHead_descriptor_,
      CCSHead::default_instance_,
      CCSHead_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CCSHead, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CCSHead, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CCSHead));
  CMessageHead_descriptor_ = file->message_type(1);
  static const int CMessageHead_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, dstfe_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, msgseq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, srcfe_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, messageid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, srcid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, dstid_),
  };
  CMessageHead_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CMessageHead_descriptor_,
      CMessageHead::default_instance_,
      CMessageHead_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessageHead, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CMessageHead));
  CMessage_descriptor_ = file->message_type(2);
  static const int CMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessage, msghead_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessage, msgpara_),
  };
  CMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CMessage_descriptor_,
      CMessage::default_instance_,
      CMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CMessage));
  enMessageFE_descriptor_ = file->enum_type(0);
  enMessageType_descriptor_ = file->enum_type(1);
  EmModuleFlagForMessage_descriptor_ = file->enum_type(2);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_5fpb_2ehxx);
}

void protobuf_RegisterTypes() {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CCSHead_descriptor_, &CCSHead::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CMessageHead_descriptor_, &CMessageHead::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CMessage_descriptor_, &CMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_5fpb_2ehxx() {
  delete CCSHead::default_instance_;
  delete CCSHead_reflection_;
  delete CMessageHead::default_instance_;
  delete CMessageHead_reflection_;
  delete CMessage::default_instance_;
  delete CMessage_reflection_;
}

void protobuf_AddDesc_message_5fpb_2ehxx() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  #ifndef _NO_PROTOBUF_STR_
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016message_pb.hxx\"(\n\007CCSHead\022\013\n\003Uin\030\001 \001(\r"
    "\022\020\n\010DialogID\030\002 \001(\r\"m\n\014CMessageHead\022\r\n\005Ds"
    "tFE\030\001 \001(\r\022\016\n\006MsgSeq\030\002 \001(\r\022\r\n\005SrcFE\030\003 \001(\r"
    "\022\021\n\tMessageID\030\004 \001(\r\022\r\n\005SrcID\030\005 \001(\r\022\r\n\005Ds"
    "tID\030\006 \001(\r\";\n\010CMessage\022\036\n\007MsgHead\030\001 \002(\0132\r"
    ".CMessageHead\022\017\n\007MsgPara\030\002 \001(\007*\237\002\n\013enMes"
    "sageFE\022\014\n\010FE_TIMER\020\000\022\r\n\tFE_CLIENT\020\001\022\023\n\017F"
    "E_SCENCESERVER\020\002\022\022\n\016FE_LOGINSERVER\020\003\022\021\n\r"
    "FE_INFOSERVER\020\004\022\021\n\rFE_GATESERVER\020\005\022\021\n\rFE"
    "_DATASERVER\020\006\022\023\n\017FE_ROUTERSERVER\020\007\022\022\n\016FE"
    "_PROXYSERVER\020\010\022\023\n\017FE_GLOBALSERVER\020\t\022\016\n\nF"
    "E_COUNTRY\020\n\022\r\n\tFE_FAMILY\020\013\022\014\n\010FE_CORPS\020\014"
    "\022\024\n\020FE_DUNGEONSERVER\020\r\022\020\n\014FE_OTHERGATE\020\016"
    "*?\n\renMessageType\022\013\n\007REQUEST\020\000\022\014\n\010RESPON"
    "SE\020\001\022\n\n\006NOTIFY\020\002\022\007\n\003ACK\020\003*\306\004\n\026EmModuleFl"
    "agForMessage\022\022\n\016MESSAGE_GLOBAL\020\000\022\021\n\014MESS"
    "AGE_CORE\020\200\010\022\025\n\020MESSAGE_PROPERTY\020\200\020\022\020\n\013ME"
    "SSAGE_MAP\020\200\030\022\021\n\014MESSAGE_TASK\020\200 \022\021\n\014MESSA"
    "GE_CHAT\020\200(\022\023\n\016MESSAGE_FRIEND\020\2000\022\021\n\014MESSA"
    "GE_TEAM\020\2008\022\021\n\014MESSAGE_MAIL\020\200@\022\022\n\rMESSAGE"
    "_TRADE\020\200H\022\022\n\rMESSAGE_STALL\020\200P\022\025\n\020MESSAGE"
    "_REPETION\020\200X\022\025\n\020MESSAGE_ACTIVITY\020\200`\022\023\n\016M"
    "ESSAGE_FAMILY\020\200h\022\022\n\rMESSAGE_CORPS\020\200p\022\021\n\014"
    "MESSAGE_RANK\020\200x\022\020\n\nMESSAGE_GM\020\200\200\001\022\021\n\013MES"
    "SAGE_LOG\020\200\210\001\022\020\n\nMESSAGE_IB\020\200\220\001\022\023\n\rMESSAG"
    "E_JUDGE\020\200\230\001\022\025\n\017MESSAGE_ACHIEVE\020\200\240\001\022\025\n\017ME"
    "SSAGE_COUNTRY\020\200\250\001\022\024\n\016MESSAGE_BOURSE\020\200\260\001\022"
    "\026\n\020MESSAGE_MARRIAGE\020\200\270\001\022\022\n\014MESSAGE_CAMP\020"
    "\200\300\001\022\033\n\025MESSAGE_GLOBALDUNGEON\020\200\310\001\022\020\n\nMESS"
    "AGE_DB\020\200\370\001B\002H\001", 1174);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message_pb.hxx", &protobuf_RegisterTypes);
  #endif
  CCSHead::default_instance_ = new CCSHead();
  CMessageHead::default_instance_ = new CMessageHead();
  CMessage::default_instance_ = new CMessage();
  CCSHead::default_instance_->InitAsDefaultInstance();
  CMessageHead::default_instance_->InitAsDefaultInstance();
  CMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_5fpb_2ehxx);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_5fpb_2ehxx {
  StaticDescriptorInitializer_message_5fpb_2ehxx() {
    protobuf_AddDesc_message_5fpb_2ehxx();
  }
} static_descriptor_initializer_message_5fpb_2ehxx_;

const ::google::protobuf::EnumDescriptor* enMessageFE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enMessageFE_descriptor_;
}
bool enMessageFE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* enMessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enMessageType_descriptor_;
}
bool enMessageType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EmModuleFlagForMessage_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EmModuleFlagForMessage_descriptor_;
}
bool EmModuleFlagForMessage_IsValid(int value) {
  switch(value) {
    case 0:
    case 1024:
    case 2048:
    case 3072:
    case 4096:
    case 5120:
    case 6144:
    case 7168:
    case 8192:
    case 9216:
    case 10240:
    case 11264:
    case 12288:
    case 13312:
    case 14336:
    case 15360:
    case 16384:
    case 17408:
    case 18432:
    case 19456:
    case 20480:
    case 21504:
    case 22528:
    case 23552:
    case 24576:
    case 25600:
    case 31744:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int CCSHead::kUinFieldNumber;
const int CCSHead::kDialogIDFieldNumber;
#endif  // !_MSC_VER

CCSHead::CCSHead()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CCSHead::InitAsDefaultInstance() {}

CCSHead::CCSHead(const CCSHead& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CCSHead::SharedCtor() {
  _cached_size_ = 0;
  uin_ = 0u;
  dialogid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CCSHead::~CCSHead() {
  SharedDtor();
}

void CCSHead::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* CCSHead::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CCSHead_descriptor_;
}

const CCSHead& CCSHead::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fpb_2ehxx();  return *default_instance_;
}

CCSHead* CCSHead::default_instance_ = NULL;

CCSHead* CCSHead::New() const {
  return new CCSHead;
}

void CCSHead::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    uin_ = 0u;
    dialogid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CCSHead::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // optional uint32 Uin = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &uin_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_DialogID;
        break;
      }
      
      // optional uint32 DialogID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_DialogID:
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &dialogid_));
        _set_bit(1);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CCSHead::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    CCSHead::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional uint32 Uin = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(1, this->uin(), output);
  }
  
  // optional uint32 DialogID = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(2, this->dialogid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CCSHead::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 Uin = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(1, this->uin(), target);
  }
  
  // optional uint32 DialogID = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(2, this->dialogid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CCSHead::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 Uin = 1;
    if (has_uin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->uin());
    }
    
    // optional uint32 DialogID = 2;
    if (has_dialogid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->dialogid());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void CCSHead::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CCSHead* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CCSHead*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CCSHead::MergeFrom(const CCSHead& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_uin(from.uin());
    }
    if (from._has_bit(1)) {
      set_dialogid(from.dialogid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CCSHead::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CCSHead::CopyFrom(const CCSHead& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CCSHead::Swap(CCSHead* other) {
  if (other != this) {
    std::swap(uin_, other->uin_);
    std::swap(dialogid_, other->dialogid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool CCSHead::IsInitialized() const {
  
  return true;
}

const ::google::protobuf::Descriptor* CCSHead::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* CCSHead::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return CCSHead_reflection_;
}

// ===================================================================

#ifndef _MSC_VER
const int CMessageHead::kDstFEFieldNumber;
const int CMessageHead::kMsgSeqFieldNumber;
const int CMessageHead::kSrcFEFieldNumber;
const int CMessageHead::kMessageIDFieldNumber;
const int CMessageHead::kSrcIDFieldNumber;
const int CMessageHead::kDstIDFieldNumber;
#endif  // !_MSC_VER

CMessageHead::CMessageHead()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CMessageHead::InitAsDefaultInstance() {}

CMessageHead::CMessageHead(const CMessageHead& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CMessageHead::SharedCtor() {
  _cached_size_ = 0;
  dstfe_ = 0u;
  msgseq_ = 0u;
  srcfe_ = 0u;
  messageid_ = 0u;
  srcid_ = 0u;
  dstid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMessageHead::~CMessageHead() {
  SharedDtor();
}

void CMessageHead::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* CMessageHead::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CMessageHead_descriptor_;
}

const CMessageHead& CMessageHead::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fpb_2ehxx();  return *default_instance_;
}

CMessageHead* CMessageHead::default_instance_ = NULL;

CMessageHead* CMessageHead::New() const {
  return new CMessageHead;
}

void CMessageHead::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    dstfe_ = 0u;
    msgseq_ = 0u;
    srcfe_ = 0u;
    messageid_ = 0u;
    srcid_ = 0u;
    dstid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CMessageHead::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // optional uint32 DstFE = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &dstfe_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_MsgSeq;
        break;
      }
      
      // optional uint32 MsgSeq = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_MsgSeq:
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &msgseq_));
        _set_bit(1);
        if (input->ExpectTag(24)) goto parse_SrcFE;
        break;
      }
      
      // optional uint32 SrcFE = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_SrcFE:
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &srcfe_));
        _set_bit(2);
        if (input->ExpectTag(32)) goto parse_MessageID;
        break;
      }
      
      // optional uint32 MessageID = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_MessageID:
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &messageid_));
        _set_bit(3);
        if (input->ExpectTag(40)) goto parse_SrcID;
        break;
      }
      
      // optional uint32 SrcID = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_SrcID:
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &srcid_));
        _set_bit(4);
        if (input->ExpectTag(48)) goto parse_DstID;
        break;
      }
      
      // optional uint32 DstID = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_DstID:
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &dstid_));
        _set_bit(5);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CMessageHead::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    CMessageHead::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional uint32 DstFE = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(1, this->dstfe(), output);
  }
  
  // optional uint32 MsgSeq = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(2, this->msgseq(), output);
  }
  
  // optional uint32 SrcFE = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(3, this->srcfe(), output);
  }
  
  // optional uint32 MessageID = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(4, this->messageid(), output);
  }
  
  // optional uint32 SrcID = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(5, this->srcid(), output);
  }
  
  // optional uint32 DstID = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(6, this->dstid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CMessageHead::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 DstFE = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(1, this->dstfe(), target);
  }
  
  // optional uint32 MsgSeq = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(2, this->msgseq(), target);
  }
  
  // optional uint32 SrcFE = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(3, this->srcfe(), target);
  }
  
  // optional uint32 MessageID = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(4, this->messageid(), target);
  }
  
  // optional uint32 SrcID = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(5, this->srcid(), target);
  }
  
  // optional uint32 DstID = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(6, this->dstid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CMessageHead::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 DstFE = 1;
    if (has_dstfe()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->dstfe());
    }
    
    // optional uint32 MsgSeq = 2;
    if (has_msgseq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->msgseq());
    }
    
    // optional uint32 SrcFE = 3;
    if (has_srcfe()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->srcfe());
    }
    
    // optional uint32 MessageID = 4;
    if (has_messageid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->messageid());
    }
    
    // optional uint32 SrcID = 5;
    if (has_srcid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->srcid());
    }
    
    // optional uint32 DstID = 6;
    if (has_dstid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->dstid());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void CMessageHead::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CMessageHead* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CMessageHead*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CMessageHead::MergeFrom(const CMessageHead& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_dstfe(from.dstfe());
    }
    if (from._has_bit(1)) {
      set_msgseq(from.msgseq());
    }
    if (from._has_bit(2)) {
      set_srcfe(from.srcfe());
    }
    if (from._has_bit(3)) {
      set_messageid(from.messageid());
    }
    if (from._has_bit(4)) {
      set_srcid(from.srcid());
    }
    if (from._has_bit(5)) {
      set_dstid(from.dstid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMessageHead::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CMessageHead::CopyFrom(const CMessageHead& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CMessageHead::Swap(CMessageHead* other) {
  if (other != this) {
    std::swap(dstfe_, other->dstfe_);
    std::swap(msgseq_, other->msgseq_);
    std::swap(srcfe_, other->srcfe_);
    std::swap(messageid_, other->messageid_);
    std::swap(srcid_, other->srcid_);
    std::swap(dstid_, other->dstid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool CMessageHead::IsInitialized() const {
  
  return true;
}

const ::google::protobuf::Descriptor* CMessageHead::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* CMessageHead::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return CMessageHead_reflection_;
}

// ===================================================================

#ifndef _MSC_VER
const int CMessage::kMsgHeadFieldNumber;
const int CMessage::kMsgParaFieldNumber;
#endif  // !_MSC_VER

CMessage::CMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CMessage::InitAsDefaultInstance() {  msghead_ = const_cast< ::CMessageHead*>(&::CMessageHead::default_instance());
}

CMessage::CMessage(const CMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CMessage::SharedCtor() {
  _cached_size_ = 0;
  msghead_ = NULL;
  msgpara_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CMessage::~CMessage() {
  SharedDtor();
}

void CMessage::SharedDtor() {
  if (this != default_instance_) {
    delete msghead_;
  }
}

const ::google::protobuf::Descriptor* CMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CMessage_descriptor_;
}

const CMessage& CMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fpb_2ehxx();  return *default_instance_;
}

CMessage* CMessage::default_instance_ = NULL;

CMessage* CMessage::New() const {
  return new CMessage;
}

void CMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (msghead_ != NULL) msghead_->::CMessageHead::Clear();
    }
    msgpara_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // required .CMessageHead MsgHead = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadMessageNoVirtual(
             input, mutable_msghead()));
        if (input->ExpectTag(21)) goto parse_MsgPara;
        break;
      }
      
      // optional fixed32 MsgPara = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_FIXED32) {
          goto handle_uninterpreted;
        }
       parse_MsgPara:
        DO_(::google::protobuf::internal::WireFormat::ReadFixed32(
              input, &msgpara_));
        _set_bit(1);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    CMessage::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required .CMessageHead MsgHead = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteMessageNoVirtual(1, this->msghead(), output);
  }
  
  // optional fixed32 MsgPara = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::WriteFixed32(2, this->msgpara(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .CMessageHead MsgHead = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteMessageNoVirtualToArray(1, this->msghead(), target);
  }
  
  // optional fixed32 MsgPara = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormat::WriteFixed32ToArray(2, this->msgpara(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .CMessageHead MsgHead = 1;
    if (has_msghead()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::MessageSizeNoVirtual(
          this->msghead());
    }
    
    // optional fixed32 MsgPara = 2;
    if (has_msgpara()) {
      total_size += 1 + 4;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void CMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CMessage::MergeFrom(const CMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      mutable_msghead()->::CMessageHead::MergeFrom(from.msghead());
    }
    if (from._has_bit(1)) {
      set_msgpara(from.msgpara());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CMessage::CopyFrom(const CMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CMessage::Swap(CMessage* other) {
  if (other != this) {
    std::swap(msghead_, other->msghead_);
    std::swap(msgpara_, other->msgpara_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool CMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

const ::google::protobuf::Descriptor* CMessage::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* CMessage::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return CMessage_reflection_;
}