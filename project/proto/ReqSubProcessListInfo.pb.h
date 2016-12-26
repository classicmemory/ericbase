// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ReqSubProcessListInfo.proto

#ifndef PROTOBUF_ReqSubProcessListInfo_2eproto__INCLUDED
#define PROTOBUF_ReqSubProcessListInfo_2eproto__INCLUDED

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
#include "basehead.pb.h"
// @@protoc_insertion_point(includes)

namespace machine {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ReqSubProcessListInfo_2eproto();
void protobuf_AssignDesc_ReqSubProcessListInfo_2eproto();
void protobuf_ShutdownFile_ReqSubProcessListInfo_2eproto();

class ReqSubProcessListInfo;
class RspSubProcessListInfo;
class ProcessValue;
class ProcessInfo;

// ===================================================================

class ReqSubProcessListInfo : public ::google::protobuf::Message {
 public:
  ReqSubProcessListInfo();
  virtual ~ReqSubProcessListInfo();

  ReqSubProcessListInfo(const ReqSubProcessListInfo& from);

  inline ReqSubProcessListInfo& operator=(const ReqSubProcessListInfo& from) {
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
  static const ReqSubProcessListInfo& default_instance();

  void Swap(ReqSubProcessListInfo* other);

  // implements Message ----------------------------------------------

  ReqSubProcessListInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ReqSubProcessListInfo& from);
  void MergeFrom(const ReqSubProcessListInfo& from);
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

  // required .machine.MachineHead machine = 1;
  inline bool has_machine() const;
  inline void clear_machine();
  static const int kMachineFieldNumber = 1;
  inline const ::machine::MachineHead& machine() const;
  inline ::machine::MachineHead* mutable_machine();
  inline ::machine::MachineHead* release_machine();
  inline void set_allocated_machine(::machine::MachineHead* machine);

  // repeated .machine.ProcessHead process = 2;
  inline int process_size() const;
  inline void clear_process();
  static const int kProcessFieldNumber = 2;
  inline const ::machine::ProcessHead& process(int index) const;
  inline ::machine::ProcessHead* mutable_process(int index);
  inline ::machine::ProcessHead* add_process();
  inline const ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >&
      process() const;
  inline ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >*
      mutable_process();

  // required string userID = 3;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUserIDFieldNumber = 3;
  inline const ::std::string& userid() const;
  inline void set_userid(const ::std::string& value);
  inline void set_userid(const char* value);
  inline void set_userid(const char* value, size_t size);
  inline ::std::string* mutable_userid();
  inline ::std::string* release_userid();
  inline void set_allocated_userid(::std::string* userid);

  // @@protoc_insertion_point(class_scope:machine.ReqSubProcessListInfo)
 private:
  inline void set_has_machine();
  inline void clear_has_machine();
  inline void set_has_userid();
  inline void clear_has_userid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::machine::MachineHead* machine_;
  ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead > process_;
  ::std::string* userid_;
  friend void  protobuf_AddDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_AssignDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_ShutdownFile_ReqSubProcessListInfo_2eproto();

  void InitAsDefaultInstance();
  static ReqSubProcessListInfo* default_instance_;
};
// -------------------------------------------------------------------

class RspSubProcessListInfo : public ::google::protobuf::Message {
 public:
  RspSubProcessListInfo();
  virtual ~RspSubProcessListInfo();

  RspSubProcessListInfo(const RspSubProcessListInfo& from);

  inline RspSubProcessListInfo& operator=(const RspSubProcessListInfo& from) {
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
  static const RspSubProcessListInfo& default_instance();

  void Swap(RspSubProcessListInfo* other);

  // implements Message ----------------------------------------------

  RspSubProcessListInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RspSubProcessListInfo& from);
  void MergeFrom(const RspSubProcessListInfo& from);
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

  // required .machine.MachineHead machine = 1;
  inline bool has_machine() const;
  inline void clear_machine();
  static const int kMachineFieldNumber = 1;
  inline const ::machine::MachineHead& machine() const;
  inline ::machine::MachineHead* mutable_machine();
  inline ::machine::MachineHead* release_machine();
  inline void set_allocated_machine(::machine::MachineHead* machine);

  // repeated .machine.ProcessHead process = 2;
  inline int process_size() const;
  inline void clear_process();
  static const int kProcessFieldNumber = 2;
  inline const ::machine::ProcessHead& process(int index) const;
  inline ::machine::ProcessHead* mutable_process(int index);
  inline ::machine::ProcessHead* add_process();
  inline const ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >&
      process() const;
  inline ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >*
      mutable_process();

  // required string userID = 3;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUserIDFieldNumber = 3;
  inline const ::std::string& userid() const;
  inline void set_userid(const ::std::string& value);
  inline void set_userid(const char* value);
  inline void set_userid(const char* value, size_t size);
  inline ::std::string* mutable_userid();
  inline ::std::string* release_userid();
  inline void set_allocated_userid(::std::string* userid);

  // @@protoc_insertion_point(class_scope:machine.RspSubProcessListInfo)
 private:
  inline void set_has_machine();
  inline void clear_has_machine();
  inline void set_has_userid();
  inline void clear_has_userid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::machine::MachineHead* machine_;
  ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead > process_;
  ::std::string* userid_;
  friend void  protobuf_AddDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_AssignDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_ShutdownFile_ReqSubProcessListInfo_2eproto();

  void InitAsDefaultInstance();
  static RspSubProcessListInfo* default_instance_;
};
// -------------------------------------------------------------------

class ProcessValue : public ::google::protobuf::Message {
 public:
  ProcessValue();
  virtual ~ProcessValue();

  ProcessValue(const ProcessValue& from);

  inline ProcessValue& operator=(const ProcessValue& from) {
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
  static const ProcessValue& default_instance();

  void Swap(ProcessValue* other);

  // implements Message ----------------------------------------------

  ProcessValue* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProcessValue& from);
  void MergeFrom(const ProcessValue& from);
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

  // optional double dProcessCpu = 1;
  inline bool has_dprocesscpu() const;
  inline void clear_dprocesscpu();
  static const int kDProcessCpuFieldNumber = 1;
  inline double dprocesscpu() const;
  inline void set_dprocesscpu(double value);

  // optional double dProcessUseMem = 2;
  inline bool has_dprocessusemem() const;
  inline void clear_dprocessusemem();
  static const int kDProcessUseMemFieldNumber = 2;
  inline double dprocessusemem() const;
  inline void set_dprocessusemem(double value);

  // optional int64 nPid = 3;
  inline bool has_npid() const;
  inline void clear_npid();
  static const int kNPidFieldNumber = 3;
  inline ::google::protobuf::int64 npid() const;
  inline void set_npid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:machine.ProcessValue)
 private:
  inline void set_has_dprocesscpu();
  inline void clear_has_dprocesscpu();
  inline void set_has_dprocessusemem();
  inline void clear_has_dprocessusemem();
  inline void set_has_npid();
  inline void clear_has_npid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double dprocesscpu_;
  double dprocessusemem_;
  ::google::protobuf::int64 npid_;
  friend void  protobuf_AddDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_AssignDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_ShutdownFile_ReqSubProcessListInfo_2eproto();

  void InitAsDefaultInstance();
  static ProcessValue* default_instance_;
};
// -------------------------------------------------------------------

class ProcessInfo : public ::google::protobuf::Message {
 public:
  ProcessInfo();
  virtual ~ProcessInfo();

  ProcessInfo(const ProcessInfo& from);

  inline ProcessInfo& operator=(const ProcessInfo& from) {
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
  static const ProcessInfo& default_instance();

  void Swap(ProcessInfo* other);

  // implements Message ----------------------------------------------

  ProcessInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProcessInfo& from);
  void MergeFrom(const ProcessInfo& from);
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

  // required .machine.MachineHead machine = 1;
  inline bool has_machine() const;
  inline void clear_machine();
  static const int kMachineFieldNumber = 1;
  inline const ::machine::MachineHead& machine() const;
  inline ::machine::MachineHead* mutable_machine();
  inline ::machine::MachineHead* release_machine();
  inline void set_allocated_machine(::machine::MachineHead* machine);

  // required .machine.ProcessHead process = 2;
  inline bool has_process() const;
  inline void clear_process();
  static const int kProcessFieldNumber = 2;
  inline const ::machine::ProcessHead& process() const;
  inline ::machine::ProcessHead* mutable_process();
  inline ::machine::ProcessHead* release_process();
  inline void set_allocated_process(::machine::ProcessHead* process);

  // required int32 process_is_run = 3;
  inline bool has_process_is_run() const;
  inline void clear_process_is_run();
  static const int kProcessIsRunFieldNumber = 3;
  inline ::google::protobuf::int32 process_is_run() const;
  inline void set_process_is_run(::google::protobuf::int32 value);

  // optional double dProcesscounts = 4;
  inline bool has_dprocesscounts() const;
  inline void clear_dprocesscounts();
  static const int kDProcesscountsFieldNumber = 4;
  inline double dprocesscounts() const;
  inline void set_dprocesscounts(double value);

  // optional string tickTime = 5;
  inline bool has_ticktime() const;
  inline void clear_ticktime();
  static const int kTickTimeFieldNumber = 5;
  inline const ::std::string& ticktime() const;
  inline void set_ticktime(const ::std::string& value);
  inline void set_ticktime(const char* value);
  inline void set_ticktime(const char* value, size_t size);
  inline ::std::string* mutable_ticktime();
  inline ::std::string* release_ticktime();
  inline void set_allocated_ticktime(::std::string* ticktime);

  // repeated .machine.ProcessValue value = 6;
  inline int value_size() const;
  inline void clear_value();
  static const int kValueFieldNumber = 6;
  inline const ::machine::ProcessValue& value(int index) const;
  inline ::machine::ProcessValue* mutable_value(int index);
  inline ::machine::ProcessValue* add_value();
  inline const ::google::protobuf::RepeatedPtrField< ::machine::ProcessValue >&
      value() const;
  inline ::google::protobuf::RepeatedPtrField< ::machine::ProcessValue >*
      mutable_value();

  // @@protoc_insertion_point(class_scope:machine.ProcessInfo)
 private:
  inline void set_has_machine();
  inline void clear_has_machine();
  inline void set_has_process();
  inline void clear_has_process();
  inline void set_has_process_is_run();
  inline void clear_has_process_is_run();
  inline void set_has_dprocesscounts();
  inline void clear_has_dprocesscounts();
  inline void set_has_ticktime();
  inline void clear_has_ticktime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::machine::MachineHead* machine_;
  ::machine::ProcessHead* process_;
  double dprocesscounts_;
  ::std::string* ticktime_;
  ::google::protobuf::RepeatedPtrField< ::machine::ProcessValue > value_;
  ::google::protobuf::int32 process_is_run_;
  friend void  protobuf_AddDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_AssignDesc_ReqSubProcessListInfo_2eproto();
  friend void protobuf_ShutdownFile_ReqSubProcessListInfo_2eproto();

  void InitAsDefaultInstance();
  static ProcessInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// ReqSubProcessListInfo

// required .machine.MachineHead machine = 1;
inline bool ReqSubProcessListInfo::has_machine() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ReqSubProcessListInfo::set_has_machine() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ReqSubProcessListInfo::clear_has_machine() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ReqSubProcessListInfo::clear_machine() {
  if (machine_ != NULL) machine_->::machine::MachineHead::Clear();
  clear_has_machine();
}
inline const ::machine::MachineHead& ReqSubProcessListInfo::machine() const {
  // @@protoc_insertion_point(field_get:machine.ReqSubProcessListInfo.machine)
  return machine_ != NULL ? *machine_ : *default_instance_->machine_;
}
inline ::machine::MachineHead* ReqSubProcessListInfo::mutable_machine() {
  set_has_machine();
  if (machine_ == NULL) machine_ = new ::machine::MachineHead;
  // @@protoc_insertion_point(field_mutable:machine.ReqSubProcessListInfo.machine)
  return machine_;
}
inline ::machine::MachineHead* ReqSubProcessListInfo::release_machine() {
  clear_has_machine();
  ::machine::MachineHead* temp = machine_;
  machine_ = NULL;
  return temp;
}
inline void ReqSubProcessListInfo::set_allocated_machine(::machine::MachineHead* machine) {
  delete machine_;
  machine_ = machine;
  if (machine) {
    set_has_machine();
  } else {
    clear_has_machine();
  }
  // @@protoc_insertion_point(field_set_allocated:machine.ReqSubProcessListInfo.machine)
}

// repeated .machine.ProcessHead process = 2;
inline int ReqSubProcessListInfo::process_size() const {
  return process_.size();
}
inline void ReqSubProcessListInfo::clear_process() {
  process_.Clear();
}
inline const ::machine::ProcessHead& ReqSubProcessListInfo::process(int index) const {
  // @@protoc_insertion_point(field_get:machine.ReqSubProcessListInfo.process)
  return process_.Get(index);
}
inline ::machine::ProcessHead* ReqSubProcessListInfo::mutable_process(int index) {
  // @@protoc_insertion_point(field_mutable:machine.ReqSubProcessListInfo.process)
  return process_.Mutable(index);
}
inline ::machine::ProcessHead* ReqSubProcessListInfo::add_process() {
  // @@protoc_insertion_point(field_add:machine.ReqSubProcessListInfo.process)
  return process_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >&
ReqSubProcessListInfo::process() const {
  // @@protoc_insertion_point(field_list:machine.ReqSubProcessListInfo.process)
  return process_;
}
inline ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >*
ReqSubProcessListInfo::mutable_process() {
  // @@protoc_insertion_point(field_mutable_list:machine.ReqSubProcessListInfo.process)
  return &process_;
}

// required string userID = 3;
inline bool ReqSubProcessListInfo::has_userid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ReqSubProcessListInfo::set_has_userid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ReqSubProcessListInfo::clear_has_userid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ReqSubProcessListInfo::clear_userid() {
  if (userid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_->clear();
  }
  clear_has_userid();
}
inline const ::std::string& ReqSubProcessListInfo::userid() const {
  // @@protoc_insertion_point(field_get:machine.ReqSubProcessListInfo.userID)
  return *userid_;
}
inline void ReqSubProcessListInfo::set_userid(const ::std::string& value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
  // @@protoc_insertion_point(field_set:machine.ReqSubProcessListInfo.userID)
}
inline void ReqSubProcessListInfo::set_userid(const char* value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
  // @@protoc_insertion_point(field_set_char:machine.ReqSubProcessListInfo.userID)
}
inline void ReqSubProcessListInfo::set_userid(const char* value, size_t size) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  userid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:machine.ReqSubProcessListInfo.userID)
}
inline ::std::string* ReqSubProcessListInfo::mutable_userid() {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:machine.ReqSubProcessListInfo.userID)
  return userid_;
}
inline ::std::string* ReqSubProcessListInfo::release_userid() {
  clear_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = userid_;
    userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ReqSubProcessListInfo::set_allocated_userid(::std::string* userid) {
  if (userid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete userid_;
  }
  if (userid) {
    set_has_userid();
    userid_ = userid;
  } else {
    clear_has_userid();
    userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:machine.ReqSubProcessListInfo.userID)
}

// -------------------------------------------------------------------

// RspSubProcessListInfo

// required .machine.MachineHead machine = 1;
inline bool RspSubProcessListInfo::has_machine() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RspSubProcessListInfo::set_has_machine() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RspSubProcessListInfo::clear_has_machine() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RspSubProcessListInfo::clear_machine() {
  if (machine_ != NULL) machine_->::machine::MachineHead::Clear();
  clear_has_machine();
}
inline const ::machine::MachineHead& RspSubProcessListInfo::machine() const {
  // @@protoc_insertion_point(field_get:machine.RspSubProcessListInfo.machine)
  return machine_ != NULL ? *machine_ : *default_instance_->machine_;
}
inline ::machine::MachineHead* RspSubProcessListInfo::mutable_machine() {
  set_has_machine();
  if (machine_ == NULL) machine_ = new ::machine::MachineHead;
  // @@protoc_insertion_point(field_mutable:machine.RspSubProcessListInfo.machine)
  return machine_;
}
inline ::machine::MachineHead* RspSubProcessListInfo::release_machine() {
  clear_has_machine();
  ::machine::MachineHead* temp = machine_;
  machine_ = NULL;
  return temp;
}
inline void RspSubProcessListInfo::set_allocated_machine(::machine::MachineHead* machine) {
  delete machine_;
  machine_ = machine;
  if (machine) {
    set_has_machine();
  } else {
    clear_has_machine();
  }
  // @@protoc_insertion_point(field_set_allocated:machine.RspSubProcessListInfo.machine)
}

// repeated .machine.ProcessHead process = 2;
inline int RspSubProcessListInfo::process_size() const {
  return process_.size();
}
inline void RspSubProcessListInfo::clear_process() {
  process_.Clear();
}
inline const ::machine::ProcessHead& RspSubProcessListInfo::process(int index) const {
  // @@protoc_insertion_point(field_get:machine.RspSubProcessListInfo.process)
  return process_.Get(index);
}
inline ::machine::ProcessHead* RspSubProcessListInfo::mutable_process(int index) {
  // @@protoc_insertion_point(field_mutable:machine.RspSubProcessListInfo.process)
  return process_.Mutable(index);
}
inline ::machine::ProcessHead* RspSubProcessListInfo::add_process() {
  // @@protoc_insertion_point(field_add:machine.RspSubProcessListInfo.process)
  return process_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >&
RspSubProcessListInfo::process() const {
  // @@protoc_insertion_point(field_list:machine.RspSubProcessListInfo.process)
  return process_;
}
inline ::google::protobuf::RepeatedPtrField< ::machine::ProcessHead >*
RspSubProcessListInfo::mutable_process() {
  // @@protoc_insertion_point(field_mutable_list:machine.RspSubProcessListInfo.process)
  return &process_;
}

// required string userID = 3;
inline bool RspSubProcessListInfo::has_userid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RspSubProcessListInfo::set_has_userid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RspSubProcessListInfo::clear_has_userid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RspSubProcessListInfo::clear_userid() {
  if (userid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_->clear();
  }
  clear_has_userid();
}
inline const ::std::string& RspSubProcessListInfo::userid() const {
  // @@protoc_insertion_point(field_get:machine.RspSubProcessListInfo.userID)
  return *userid_;
}
inline void RspSubProcessListInfo::set_userid(const ::std::string& value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
  // @@protoc_insertion_point(field_set:machine.RspSubProcessListInfo.userID)
}
inline void RspSubProcessListInfo::set_userid(const char* value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
  // @@protoc_insertion_point(field_set_char:machine.RspSubProcessListInfo.userID)
}
inline void RspSubProcessListInfo::set_userid(const char* value, size_t size) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  userid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:machine.RspSubProcessListInfo.userID)
}
inline ::std::string* RspSubProcessListInfo::mutable_userid() {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    userid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:machine.RspSubProcessListInfo.userID)
  return userid_;
}
inline ::std::string* RspSubProcessListInfo::release_userid() {
  clear_has_userid();
  if (userid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = userid_;
    userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RspSubProcessListInfo::set_allocated_userid(::std::string* userid) {
  if (userid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete userid_;
  }
  if (userid) {
    set_has_userid();
    userid_ = userid;
  } else {
    clear_has_userid();
    userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:machine.RspSubProcessListInfo.userID)
}

// -------------------------------------------------------------------

// ProcessValue

// optional double dProcessCpu = 1;
inline bool ProcessValue::has_dprocesscpu() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProcessValue::set_has_dprocesscpu() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProcessValue::clear_has_dprocesscpu() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProcessValue::clear_dprocesscpu() {
  dprocesscpu_ = 0;
  clear_has_dprocesscpu();
}
inline double ProcessValue::dprocesscpu() const {
  // @@protoc_insertion_point(field_get:machine.ProcessValue.dProcessCpu)
  return dprocesscpu_;
}
inline void ProcessValue::set_dprocesscpu(double value) {
  set_has_dprocesscpu();
  dprocesscpu_ = value;
  // @@protoc_insertion_point(field_set:machine.ProcessValue.dProcessCpu)
}

// optional double dProcessUseMem = 2;
inline bool ProcessValue::has_dprocessusemem() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProcessValue::set_has_dprocessusemem() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProcessValue::clear_has_dprocessusemem() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProcessValue::clear_dprocessusemem() {
  dprocessusemem_ = 0;
  clear_has_dprocessusemem();
}
inline double ProcessValue::dprocessusemem() const {
  // @@protoc_insertion_point(field_get:machine.ProcessValue.dProcessUseMem)
  return dprocessusemem_;
}
inline void ProcessValue::set_dprocessusemem(double value) {
  set_has_dprocessusemem();
  dprocessusemem_ = value;
  // @@protoc_insertion_point(field_set:machine.ProcessValue.dProcessUseMem)
}

// optional int64 nPid = 3;
inline bool ProcessValue::has_npid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProcessValue::set_has_npid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProcessValue::clear_has_npid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProcessValue::clear_npid() {
  npid_ = GOOGLE_LONGLONG(0);
  clear_has_npid();
}
inline ::google::protobuf::int64 ProcessValue::npid() const {
  // @@protoc_insertion_point(field_get:machine.ProcessValue.nPid)
  return npid_;
}
inline void ProcessValue::set_npid(::google::protobuf::int64 value) {
  set_has_npid();
  npid_ = value;
  // @@protoc_insertion_point(field_set:machine.ProcessValue.nPid)
}

// -------------------------------------------------------------------

// ProcessInfo

// required .machine.MachineHead machine = 1;
inline bool ProcessInfo::has_machine() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProcessInfo::set_has_machine() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProcessInfo::clear_has_machine() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProcessInfo::clear_machine() {
  if (machine_ != NULL) machine_->::machine::MachineHead::Clear();
  clear_has_machine();
}
inline const ::machine::MachineHead& ProcessInfo::machine() const {
  // @@protoc_insertion_point(field_get:machine.ProcessInfo.machine)
  return machine_ != NULL ? *machine_ : *default_instance_->machine_;
}
inline ::machine::MachineHead* ProcessInfo::mutable_machine() {
  set_has_machine();
  if (machine_ == NULL) machine_ = new ::machine::MachineHead;
  // @@protoc_insertion_point(field_mutable:machine.ProcessInfo.machine)
  return machine_;
}
inline ::machine::MachineHead* ProcessInfo::release_machine() {
  clear_has_machine();
  ::machine::MachineHead* temp = machine_;
  machine_ = NULL;
  return temp;
}
inline void ProcessInfo::set_allocated_machine(::machine::MachineHead* machine) {
  delete machine_;
  machine_ = machine;
  if (machine) {
    set_has_machine();
  } else {
    clear_has_machine();
  }
  // @@protoc_insertion_point(field_set_allocated:machine.ProcessInfo.machine)
}

// required .machine.ProcessHead process = 2;
inline bool ProcessInfo::has_process() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProcessInfo::set_has_process() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProcessInfo::clear_has_process() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProcessInfo::clear_process() {
  if (process_ != NULL) process_->::machine::ProcessHead::Clear();
  clear_has_process();
}
inline const ::machine::ProcessHead& ProcessInfo::process() const {
  // @@protoc_insertion_point(field_get:machine.ProcessInfo.process)
  return process_ != NULL ? *process_ : *default_instance_->process_;
}
inline ::machine::ProcessHead* ProcessInfo::mutable_process() {
  set_has_process();
  if (process_ == NULL) process_ = new ::machine::ProcessHead;
  // @@protoc_insertion_point(field_mutable:machine.ProcessInfo.process)
  return process_;
}
inline ::machine::ProcessHead* ProcessInfo::release_process() {
  clear_has_process();
  ::machine::ProcessHead* temp = process_;
  process_ = NULL;
  return temp;
}
inline void ProcessInfo::set_allocated_process(::machine::ProcessHead* process) {
  delete process_;
  process_ = process;
  if (process) {
    set_has_process();
  } else {
    clear_has_process();
  }
  // @@protoc_insertion_point(field_set_allocated:machine.ProcessInfo.process)
}

// required int32 process_is_run = 3;
inline bool ProcessInfo::has_process_is_run() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProcessInfo::set_has_process_is_run() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProcessInfo::clear_has_process_is_run() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProcessInfo::clear_process_is_run() {
  process_is_run_ = 0;
  clear_has_process_is_run();
}
inline ::google::protobuf::int32 ProcessInfo::process_is_run() const {
  // @@protoc_insertion_point(field_get:machine.ProcessInfo.process_is_run)
  return process_is_run_;
}
inline void ProcessInfo::set_process_is_run(::google::protobuf::int32 value) {
  set_has_process_is_run();
  process_is_run_ = value;
  // @@protoc_insertion_point(field_set:machine.ProcessInfo.process_is_run)
}

// optional double dProcesscounts = 4;
inline bool ProcessInfo::has_dprocesscounts() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ProcessInfo::set_has_dprocesscounts() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ProcessInfo::clear_has_dprocesscounts() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ProcessInfo::clear_dprocesscounts() {
  dprocesscounts_ = 0;
  clear_has_dprocesscounts();
}
inline double ProcessInfo::dprocesscounts() const {
  // @@protoc_insertion_point(field_get:machine.ProcessInfo.dProcesscounts)
  return dprocesscounts_;
}
inline void ProcessInfo::set_dprocesscounts(double value) {
  set_has_dprocesscounts();
  dprocesscounts_ = value;
  // @@protoc_insertion_point(field_set:machine.ProcessInfo.dProcesscounts)
}

// optional string tickTime = 5;
inline bool ProcessInfo::has_ticktime() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ProcessInfo::set_has_ticktime() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ProcessInfo::clear_has_ticktime() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ProcessInfo::clear_ticktime() {
  if (ticktime_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ticktime_->clear();
  }
  clear_has_ticktime();
}
inline const ::std::string& ProcessInfo::ticktime() const {
  // @@protoc_insertion_point(field_get:machine.ProcessInfo.tickTime)
  return *ticktime_;
}
inline void ProcessInfo::set_ticktime(const ::std::string& value) {
  set_has_ticktime();
  if (ticktime_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ticktime_ = new ::std::string;
  }
  ticktime_->assign(value);
  // @@protoc_insertion_point(field_set:machine.ProcessInfo.tickTime)
}
inline void ProcessInfo::set_ticktime(const char* value) {
  set_has_ticktime();
  if (ticktime_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ticktime_ = new ::std::string;
  }
  ticktime_->assign(value);
  // @@protoc_insertion_point(field_set_char:machine.ProcessInfo.tickTime)
}
inline void ProcessInfo::set_ticktime(const char* value, size_t size) {
  set_has_ticktime();
  if (ticktime_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ticktime_ = new ::std::string;
  }
  ticktime_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:machine.ProcessInfo.tickTime)
}
inline ::std::string* ProcessInfo::mutable_ticktime() {
  set_has_ticktime();
  if (ticktime_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ticktime_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:machine.ProcessInfo.tickTime)
  return ticktime_;
}
inline ::std::string* ProcessInfo::release_ticktime() {
  clear_has_ticktime();
  if (ticktime_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = ticktime_;
    ticktime_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ProcessInfo::set_allocated_ticktime(::std::string* ticktime) {
  if (ticktime_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ticktime_;
  }
  if (ticktime) {
    set_has_ticktime();
    ticktime_ = ticktime;
  } else {
    clear_has_ticktime();
    ticktime_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:machine.ProcessInfo.tickTime)
}

// repeated .machine.ProcessValue value = 6;
inline int ProcessInfo::value_size() const {
  return value_.size();
}
inline void ProcessInfo::clear_value() {
  value_.Clear();
}
inline const ::machine::ProcessValue& ProcessInfo::value(int index) const {
  // @@protoc_insertion_point(field_get:machine.ProcessInfo.value)
  return value_.Get(index);
}
inline ::machine::ProcessValue* ProcessInfo::mutable_value(int index) {
  // @@protoc_insertion_point(field_mutable:machine.ProcessInfo.value)
  return value_.Mutable(index);
}
inline ::machine::ProcessValue* ProcessInfo::add_value() {
  // @@protoc_insertion_point(field_add:machine.ProcessInfo.value)
  return value_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::machine::ProcessValue >&
ProcessInfo::value() const {
  // @@protoc_insertion_point(field_list:machine.ProcessInfo.value)
  return value_;
}
inline ::google::protobuf::RepeatedPtrField< ::machine::ProcessValue >*
ProcessInfo::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:machine.ProcessInfo.value)
  return &value_;
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

#endif  // PROTOBUF_ReqSubProcessListInfo_2eproto__INCLUDED