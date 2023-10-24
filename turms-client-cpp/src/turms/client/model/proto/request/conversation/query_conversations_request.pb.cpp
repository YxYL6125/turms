// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/conversation/query_conversations_request.proto

#include "turms/client/model/proto/request/conversation/query_conversations_request.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {
        template <typename>
PROTOBUF_CONSTEXPR QueryConversationsRequest::QueryConversationsRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_.target_ids_)*/ {},
      /* _impl_._target_ids_cached_byte_size_ = */ {0},
      /*decltype(_impl_.group_ids_)*/ {},
      /* _impl_._group_ids_cached_byte_size_ = */ {0},
      /*decltype(_impl_._cached_size_)*/ {},
    } {}
struct QueryConversationsRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryConversationsRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryConversationsRequestDefaultTypeInternal() {}
  union {
    QueryConversationsRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryConversationsRequestDefaultTypeInternal _QueryConversationsRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class QueryConversationsRequest::_Internal {
 public:
};

QueryConversationsRequest::QueryConversationsRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.QueryConversationsRequest)
}
QueryConversationsRequest::QueryConversationsRequest(const QueryConversationsRequest& from) : ::google::protobuf::MessageLite() {
  QueryConversationsRequest* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.target_ids_){from._impl_.target_ids_},
      /* _impl_._target_ids_cached_byte_size_ = */ {0},
      decltype(_impl_.group_ids_){from._impl_.group_ids_},
      /* _impl_._group_ids_cached_byte_size_ = */ {0},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.QueryConversationsRequest)
}
inline void QueryConversationsRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.target_ids_){arena},
      /* _impl_._target_ids_cached_byte_size_ = */ {0},
      decltype(_impl_.group_ids_){arena},
      /* _impl_._group_ids_cached_byte_size_ = */ {0},
      /*decltype(_impl_._cached_size_)*/ {},
  };
}
QueryConversationsRequest::~QueryConversationsRequest() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.QueryConversationsRequest)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void QueryConversationsRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.target_ids_.~RepeatedField();
  _impl_.group_ids_.~RepeatedField();
}
void QueryConversationsRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void QueryConversationsRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.QueryConversationsRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_target_ids()->Clear();
  _internal_mutable_group_ids()->Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* QueryConversationsRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> QueryConversationsRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_QueryConversationsRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // repeated int64 group_ids = 2;
    {::_pbi::TcParser::FastV64P1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(QueryConversationsRequest, _impl_.group_ids_)}},
    // repeated int64 target_ids = 1;
    {::_pbi::TcParser::FastV64P1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(QueryConversationsRequest, _impl_.target_ids_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated int64 target_ids = 1;
    {PROTOBUF_FIELD_OFFSET(QueryConversationsRequest, _impl_.target_ids_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt64)},
    // repeated int64 group_ids = 2;
    {PROTOBUF_FIELD_OFFSET(QueryConversationsRequest, _impl_.group_ids_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt64)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* QueryConversationsRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.QueryConversationsRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated int64 target_ids = 1;
  {
    int byte_size = _impl_._target_ids_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(1, _internal_target_ids(),
                                                 byte_size, target);
    }
  }

  // repeated int64 group_ids = 2;
  {
    int byte_size = _impl_._group_ids_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(2, _internal_group_ids(),
                                                 byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.QueryConversationsRequest)
  return target;
}

::size_t QueryConversationsRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.QueryConversationsRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 target_ids = 1;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::Int64Size(
        this->_internal_target_ids())
    ;
    _impl_._target_ids_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  // repeated int64 group_ids = 2;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::Int64Size(
        this->_internal_group_ids())
    ;
    _impl_._group_ids_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void QueryConversationsRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const QueryConversationsRequest*>(
      &from));
}

void QueryConversationsRequest::MergeFrom(const QueryConversationsRequest& from) {
  QueryConversationsRequest* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.QueryConversationsRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_target_ids()->MergeFrom(from._internal_target_ids());
  _this->_internal_mutable_group_ids()->MergeFrom(from._internal_group_ids());
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void QueryConversationsRequest::CopyFrom(const QueryConversationsRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.QueryConversationsRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool QueryConversationsRequest::IsInitialized() const {
  return true;
}

void QueryConversationsRequest::InternalSwap(QueryConversationsRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.target_ids_.InternalSwap(&other->_impl_.target_ids_);
  _impl_.group_ids_.InternalSwap(&other->_impl_.group_ids_);
}

std::string QueryConversationsRequest::GetTypeName() const {
  return "turms.client.model.proto.QueryConversationsRequest";
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"