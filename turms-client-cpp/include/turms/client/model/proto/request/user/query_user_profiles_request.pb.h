// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/user/query_user_profiles_request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryUserProfilesRequest;
struct QueryUserProfilesRequestDefaultTypeInternal;
extern QueryUserProfilesRequestDefaultTypeInternal _QueryUserProfilesRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================


// -------------------------------------------------------------------

class QueryUserProfilesRequest final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryUserProfilesRequest) */ {
 public:
  inline QueryUserProfilesRequest() : QueryUserProfilesRequest(nullptr) {}
  ~QueryUserProfilesRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR QueryUserProfilesRequest(::google::protobuf::internal::ConstantInitialized);

  QueryUserProfilesRequest(const QueryUserProfilesRequest& from);
  QueryUserProfilesRequest(QueryUserProfilesRequest&& from) noexcept
    : QueryUserProfilesRequest() {
    *this = ::std::move(from);
  }

  inline QueryUserProfilesRequest& operator=(const QueryUserProfilesRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryUserProfilesRequest& operator=(QueryUserProfilesRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const QueryUserProfilesRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryUserProfilesRequest* internal_default_instance() {
    return reinterpret_cast<const QueryUserProfilesRequest*>(
               &_QueryUserProfilesRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(QueryUserProfilesRequest& a, QueryUserProfilesRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryUserProfilesRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(QueryUserProfilesRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryUserProfilesRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryUserProfilesRequest>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const QueryUserProfilesRequest& from);
  void MergeFrom(const QueryUserProfilesRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(QueryUserProfilesRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.QueryUserProfilesRequest";
  }
  protected:
  explicit QueryUserProfilesRequest(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdsFieldNumber = 1,
    kLastUpdatedDateFieldNumber = 2,
  };
  // repeated int64 user_ids = 1;
  int user_ids_size() const;
  private:
  int _internal_user_ids_size() const;

  public:
  void clear_user_ids() ;
  ::int64_t user_ids(int index) const;
  void set_user_ids(int index, ::int64_t value);
  void add_user_ids(::int64_t value);
  const ::google::protobuf::RepeatedField<::int64_t>& user_ids() const;
  ::google::protobuf::RepeatedField<::int64_t>* mutable_user_ids();

  private:
  const ::google::protobuf::RepeatedField<::int64_t>& _internal_user_ids() const;
  ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_user_ids();

  public:
  // optional int64 last_updated_date = 2;
  bool has_last_updated_date() const;
  void clear_last_updated_date() ;
  ::int64_t last_updated_date() const;
  void set_last_updated_date(::int64_t value);

  private:
  ::int64_t _internal_last_updated_date() const;
  void _internal_set_last_updated_date(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryUserProfilesRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<1, 2, 0, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::RepeatedField<::int64_t> user_ids_;
    mutable ::google::protobuf::internal::CachedSize _user_ids_cached_byte_size_;
    ::int64_t last_updated_date_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryUserProfilesRequest

// repeated int64 user_ids = 1;
inline int QueryUserProfilesRequest::_internal_user_ids_size() const {
  return _internal_user_ids().size();
}
inline int QueryUserProfilesRequest::user_ids_size() const {
  return _internal_user_ids_size();
}
inline void QueryUserProfilesRequest::clear_user_ids() {
  _internal_mutable_user_ids()->Clear();
}
inline ::int64_t QueryUserProfilesRequest::user_ids(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
  return _internal_user_ids().Get(index);
}
inline void QueryUserProfilesRequest::set_user_ids(int index, ::int64_t value) {
  _internal_mutable_user_ids()->Set(index, value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
}
inline void QueryUserProfilesRequest::add_user_ids(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_user_ids()->Add(value);
  // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>& QueryUserProfilesRequest::user_ids() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
  return _internal_user_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryUserProfilesRequest::mutable_user_ids() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryUserProfilesRequest.user_ids)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_user_ids();
}

inline const ::google::protobuf::RepeatedField<::int64_t>& QueryUserProfilesRequest::_internal_user_ids() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.user_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>* QueryUserProfilesRequest::_internal_mutable_user_ids() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.user_ids_;
}

// optional int64 last_updated_date = 2;
inline bool QueryUserProfilesRequest::has_last_updated_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void QueryUserProfilesRequest::clear_last_updated_date() {
  _impl_.last_updated_date_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t QueryUserProfilesRequest::last_updated_date() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryUserProfilesRequest.last_updated_date)
  return _internal_last_updated_date();
}
inline void QueryUserProfilesRequest::set_last_updated_date(::int64_t value) {
  _internal_set_last_updated_date(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryUserProfilesRequest.last_updated_date)
}
inline ::int64_t QueryUserProfilesRequest::_internal_last_updated_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.last_updated_date_;
}
inline void QueryUserProfilesRequest::_internal_set_last_updated_date(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.last_updated_date_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2fquery_5fuser_5fprofiles_5frequest_2eproto_2epb_2eh