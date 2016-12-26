// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: basehead.proto

#ifndef PROTOBUF_basehead_2eproto__INCLUDED
#define PROTOBUF_basehead_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace machine {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_basehead_2eproto();
void protobuf_AssignDesc_basehead_2eproto();
void protobuf_ShutdownFile_basehead_2eproto();

class MachineHead;
class ProcessHead;

// ===================================================================

class MachineHead : public ::google::protobuf::Message {
 public:
  MachineHead();
  virtual ~MachineHead();

  MachineHead(const MachineHead& from);

  inline MachineHead& operator=(const MachineHead& from) {
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
  static const MachineHead& default_instance();

  void Swap(MachineHead* other);

  // implements Message ----------------------------------------------

  MachineHead* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MachineHead& from);
  void MergeFrom(const MachineHead& from);
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
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string ip = 1;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 1;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const char* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  inline void set_allocated_ip(::std::string* ip);

  // optional bytes mac = 2;
  inline bool has_mac() const;
  inline void clear_mac();
  static const int kMacFieldNumber = 2;
  inline const ::std::string& mac() const;
  inline void set_mac(const ::std::string& value);
  inline void set_mac(const char* value);
  inline void set_mac(const void* value, size_t size);
  inline ::std::string* mutable_mac();
  inline ::std::string* release_mac();
  inline void set_allocated_mac(::std::string* mac);

  // @@protoc_insertion_point(class_scope:machine.MachineHead)
 private:
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_mac();
  inline void clear_has_mac();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* ip_;
  ::std::string* mac_;
  friend void  protobuf_AddDesc_basehead_2eproto();
  friend void protobuf_AssignDesc_basehead_2eproto();
  friend void protobuf_ShutdownFile_basehead_2eproto();

  void InitAsDefaultInstance();
  static MachineHead* default_instance_;
};
// -------------------------------------------------------------------

class ProcessHead : public ::google::protobuf::Message {
 public:
  ProcessHead();
  virtual ~ProcessHead();

  ProcessHead(const ProcessHead& from);

  inline ProcessHead& operator=(const ProcessHead& from) {
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
  static const ProcessHead& default_instance();

  void Swap(ProcessHead* other);

  // implements Message ----------------------------------------------

  ProcessHead* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProcessHead& from);
  void MergeFrom(const ProcessHead& from);
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
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string processName = 1;
  inline bool has_processname() const;
  inline void clear_processname();
  static const int kProcessNameFieldNumber = 1;
  inline const ::std::string& processname() const;
  inline void set_processname(const ::std::string& value);
  inline void set_processname(const char* value);
  inline void set_processname(const char* value, size_t size);
  inline ::std::string* mutable_processname();
  inline ::std::string* release_processname();
  inline void set_allocated_processname(::std::string* processname);

  // optional int64 processID = 2;
  inline bool has_processid() const;
  inline void clear_processid();
  static const int kProcessIDFieldNumber = 2;
  inline ::google::protobuf::int64 processid() const;
  inline void set_processid(::google::protobuf::int64 value);

  // optional string processlogPath = 3;
  inline bool has_processlogpath() const;
  inline void clear_processlogpath();
  static const int kProcesslogPathFieldNumber = 3;
  inline const ::std::string& processlogpath() const;
  inline void set_processlogpath(const ::std::string& value);
  inline void set_processlogpath(const char* value);
  inline void set_processlogpath(const char* value, size_t size);
  inline ::std::string* mutable_processlogpath();
  inline ::std::string* release_processlogpath();
  inline void set_allocated_processlogpath(::std::string* processlogpath);

  // @@protoc_insertion_point(class_scope:machine.ProcessHead)
 private:
  inline void set_has_processname();
  inline void clear_has_processname();
  inline void set_has_processid();
  inline void clear_has_processid();
  inline void set_has_processlogpath();
  inline void clear_has_processlogpath();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* processname_;
  ::google::protobuf::int64 processid_;
  ::std::string* processlogpath_;
  friend void  protobuf_AddDesc_basehead_2eproto();
  friend void protobuf_AssignDesc_basehead_2eproto();
  friend void protobuf_ShutdownFile_basehead_2eproto();

  void InitAsDefaultInstance();
  static ProcessHead* default_instance_;
};
// ===================================================================


// ===================================================================

// MachineHead

// required string ip = 1;
inline bool MachineHead::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MachineHead::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MachineHead::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MachineHead::clear_ip() {
  if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& MachineHead::ip() const {
  // @@protoc_insertion_point(field_get:machine.MachineHead.ip)
  return *ip_;
}
inline void MachineHead::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
  // @@protoc_insertion_point(field_set:machine.MachineHead.ip)
}
inline void MachineHead::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
  // @@protoc_insertion_point(field_set_char:machine.MachineHead.ip)
}
inline void MachineHead::set_ip(const char* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:machine.MachineHead.ip)
}
inline ::std::string* MachineHead::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:machine.MachineHead.ip)
  return ip_;
}
inline ::std::string* MachineHead::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MachineHead::set_allocated_ip(::std::string* ip) {
  if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ip_;
  }
  if (ip) {
    set_has_ip();
    ip_ = ip;
  } else {
    clear_has_ip();
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:machine.MachineHead.ip)
}

// optional bytes mac = 2;
inline bool MachineHead::has_mac() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MachineHead::set_has_mac() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MachineHead::clear_has_mac() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MachineHead::clear_mac() {
  if (mac_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mac_->clear();
  }
  clear_has_mac();
}
inline const ::std::string& MachineHead::mac() const {
  // @@protoc_insertion_point(field_get:machine.MachineHead.mac)
  return *mac_;
}
inline void MachineHead::set_mac(const ::std::string& value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
  // @@protoc_insertion_point(field_set:machine.MachineHead.mac)
}
inline void MachineHead::set_mac(const char* value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
  // @@protoc_insertion_point(field_set_char:machine.MachineHead.mac)
}
inline void MachineHead::set_mac(const void* value, size_t size) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mac_ = new ::std::string;
  }
  mac_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:machine.MachineHead.mac)
}
inline ::std::string* MachineHead::mutable_mac() {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mac_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:machine.MachineHead.mac)
  return mac_;
}
inline ::std::string* MachineHead::release_mac() {
  clear_has_mac();
  if (mac_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = mac_;
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MachineHead::set_allocated_mac(::std::string* mac) {
  if (mac_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete mac_;
  }
  if (mac) {
    set_has_mac();
    mac_ = mac;
  } else {
    clear_has_mac();
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:machine.MachineHead.mac)
}

// -------------------------------------------------------------------

// ProcessHead

// required string processName = 1;
inline bool ProcessHead::has_processname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProcessHead::set_has_processname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProcessHead::clear_has_processname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProcessHead::clear_processname() {
  if (processname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processname_->clear();
  }
  clear_has_processname();
}
inline const ::std::string& ProcessHead::processname() const {
  // @@protoc_insertion_point(field_get:machine.ProcessHead.processName)
  return *processname_;
}
inline void ProcessHead::set_processname(const ::std::string& value) {
  set_has_processname();
  if (processname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processname_ = new ::std::string;
  }
  processname_->assign(value);
  // @@protoc_insertion_point(field_set:machine.ProcessHead.processName)
}
inline void ProcessHead::set_processname(const char* value) {
  set_has_processname();
  if (processname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processname_ = new ::std::string;
  }
  processname_->assign(value);
  // @@protoc_insertion_point(field_set_char:machine.ProcessHead.processName)
}
inline void ProcessHead::set_processname(const char* value, size_t size) {
  set_has_processname();
  if (processname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processname_ = new ::std::string;
  }
  processname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:machine.ProcessHead.processName)
}
inline ::std::string* ProcessHead::mutable_processname() {
  set_has_processname();
  if (processname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:machine.ProcessHead.processName)
  return processname_;
}
inline ::std::string* ProcessHead::release_processname() {
  clear_has_processname();
  if (processname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = processname_;
    processname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ProcessHead::set_allocated_processname(::std::string* processname) {
  if (processname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete processname_;
  }
  if (processname) {
    set_has_processname();
    processname_ = processname;
  } else {
    clear_has_processname();
    processname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:machine.ProcessHead.processName)
}

// optional int64 processID = 2;
inline bool ProcessHead::has_processid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProcessHead::set_has_processid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProcessHead::clear_has_processid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProcessHead::clear_processid() {
  processid_ = GOOGLE_LONGLONG(0);
  clear_has_processid();
}
inline ::google::protobuf::int64 ProcessHead::processid() const {
  // @@protoc_insertion_point(field_get:machine.ProcessHead.processID)
  return processid_;
}
inline void ProcessHead::set_processid(::google::protobuf::int64 value) {
  set_has_processid();
  processid_ = value;
  // @@protoc_insertion_point(field_set:machine.ProcessHead.processID)
}

// optional string processlogPath = 3;
inline bool ProcessHead::has_processlogpath() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProcessHead::set_has_processlogpath() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProcessHead::clear_has_processlogpath() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProcessHead::clear_processlogpath() {
  if (processlogpath_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processlogpath_->clear();
  }
  clear_has_processlogpath();
}
inline const ::std::string& ProcessHead::processlogpath() const {
  // @@protoc_insertion_point(field_get:machine.ProcessHead.processlogPath)
  return *processlogpath_;
}
inline void ProcessHead::set_processlogpath(const ::std::string& value) {
  set_has_processlogpath();
  if (processlogpath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processlogpath_ = new ::std::string;
  }
  processlogpath_->assign(value);
  // @@protoc_insertion_point(field_set:machine.ProcessHead.processlogPath)
}
inline void ProcessHead::set_processlogpath(const char* value) {
  set_has_processlogpath();
  if (processlogpath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processlogpath_ = new ::std::string;
  }
  processlogpath_->assign(value);
  // @@protoc_insertion_point(field_set_char:machine.ProcessHead.processlogPath)
}
inline void ProcessHead::set_processlogpath(const char* value, size_t size) {
  set_has_processlogpath();
  if (processlogpath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processlogpath_ = new ::std::string;
  }
  processlogpath_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:machine.ProcessHead.processlogPath)
}
inline ::std::string* ProcessHead::mutable_processlogpath() {
  set_has_processlogpath();
  if (processlogpath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    processlogpath_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:machine.ProcessHead.processlogPath)
  return processlogpath_;
}
inline ::std::string* ProcessHead::release_processlogpath() {
  clear_has_processlogpath();
  if (processlogpath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = processlogpath_;
    processlogpath_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ProcessHead::set_allocated_processlogpath(::std::string* processlogpath) {
  if (processlogpath_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete processlogpath_;
  }
  if (processlogpath) {
    set_has_processlogpath();
    processlogpath_ = processlogpath;
  } else {
    clear_has_processlogpath();
    processlogpath_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:machine.ProcessHead.processlogPath)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace machine

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_basehead_2eproto__INCLUDED