// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BidOrder.proto

#include "BidOrder.pb.h"

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
class BidOrderDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BidOrder>
      _instance;
} _BidOrder_default_instance_;
namespace protobuf_BidOrder_2eproto {
void InitDefaultsBidOrderImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_BidOrder_default_instance_;
    new (ptr) ::BidOrder();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::BidOrder::InitAsDefaultInstance();
}

void InitDefaultsBidOrder() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBidOrderImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, blockchain_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, amount_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, interest_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, maturity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, fee_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, expiration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, block_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BidOrder, sighash_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::BidOrder)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_BidOrder_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "BidOrder.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\016BidOrder.proto\"\244\001\n\010BidOrder\022\022\n\nblockch"
      "ain\030\001 \001(\t\022\017\n\007address\030\002 \001(\t\022\016\n\006amount\030\003 \001"
      "(\t\022\020\n\010interest\030\004 \001(\t\022\020\n\010maturity\030\005 \001(\t\022\013"
      "\n\003fee\030\006 \001(\t\022\022\n\nexpiration\030\007 \001(\004\022\r\n\005block"
      "\030\010 \001(\t\022\017\n\007sighash\030\t \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 191);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BidOrder.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_BidOrder_2eproto

// ===================================================================

void BidOrder::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BidOrder::kBlockchainFieldNumber;
const int BidOrder::kAddressFieldNumber;
const int BidOrder::kAmountFieldNumber;
const int BidOrder::kInterestFieldNumber;
const int BidOrder::kMaturityFieldNumber;
const int BidOrder::kFeeFieldNumber;
const int BidOrder::kExpirationFieldNumber;
const int BidOrder::kBlockFieldNumber;
const int BidOrder::kSighashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BidOrder::BidOrder()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_BidOrder_2eproto::InitDefaultsBidOrder();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:BidOrder)
}
BidOrder::BidOrder(const BidOrder& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.blockchain().size() > 0) {
    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.address().size() > 0) {
    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.amount().size() > 0) {
    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  interest_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.interest().size() > 0) {
    interest_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.interest_);
  }
  maturity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.maturity().size() > 0) {
    maturity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.maturity_);
  }
  fee_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.fee().size() > 0) {
    fee_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fee_);
  }
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.block().size() > 0) {
    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.sighash().size() > 0) {
    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  expiration_ = from.expiration_;
  // @@protoc_insertion_point(copy_constructor:BidOrder)
}

void BidOrder::SharedCtor() {
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  interest_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  maturity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fee_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  expiration_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

BidOrder::~BidOrder() {
  // @@protoc_insertion_point(destructor:BidOrder)
  SharedDtor();
}

void BidOrder::SharedDtor() {
  blockchain_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  interest_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  maturity_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fee_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BidOrder::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BidOrder::descriptor() {
  ::protobuf_BidOrder_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_BidOrder_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BidOrder& BidOrder::default_instance() {
  ::protobuf_BidOrder_2eproto::InitDefaultsBidOrder();
  return *internal_default_instance();
}

BidOrder* BidOrder::New(::google::protobuf::Arena* arena) const {
  BidOrder* n = new BidOrder;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BidOrder::Clear() {
// @@protoc_insertion_point(message_clear_start:BidOrder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  blockchain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  interest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  maturity_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fee_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  expiration_ = GOOGLE_ULONGLONG(0);
  _internal_metadata_.Clear();
}

bool BidOrder::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:BidOrder)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string blockchain = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_blockchain()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->blockchain().data(), static_cast<int>(this->blockchain().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.blockchain"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string address = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->address().data(), static_cast<int>(this->address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string amount = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_amount()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->amount().data(), static_cast<int>(this->amount().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.amount"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string interest = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_interest()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->interest().data(), static_cast<int>(this->interest().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.interest"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string maturity = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_maturity()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->maturity().data(), static_cast<int>(this->maturity().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.maturity"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string fee = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fee()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->fee().data(), static_cast<int>(this->fee().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.fee"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 expiration = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &expiration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string block = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_block()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->block().data(), static_cast<int>(this->block().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.block"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sighash = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sighash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sighash().data(), static_cast<int>(this->sighash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "BidOrder.sighash"));
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
  // @@protoc_insertion_point(parse_success:BidOrder)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:BidOrder)
  return false;
#undef DO_
}

void BidOrder::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:BidOrder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.blockchain");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->blockchain(), output);
  }

  // string address = 2;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), static_cast<int>(this->address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->address(), output);
  }

  // string amount = 3;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.amount");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->amount(), output);
  }

  // string interest = 4;
  if (this->interest().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->interest().data(), static_cast<int>(this->interest().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.interest");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->interest(), output);
  }

  // string maturity = 5;
  if (this->maturity().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->maturity().data(), static_cast<int>(this->maturity().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.maturity");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->maturity(), output);
  }

  // string fee = 6;
  if (this->fee().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fee().data(), static_cast<int>(this->fee().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.fee");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->fee(), output);
  }

  // uint64 expiration = 7;
  if (this->expiration() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->expiration(), output);
  }

  // string block = 8;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.block");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->block(), output);
  }

  // string sighash = 9;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.sighash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->sighash(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:BidOrder)
}

::google::protobuf::uint8* BidOrder::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:BidOrder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.blockchain");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->blockchain(), target);
  }

  // string address = 2;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), static_cast<int>(this->address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->address(), target);
  }

  // string amount = 3;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.amount");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->amount(), target);
  }

  // string interest = 4;
  if (this->interest().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->interest().data(), static_cast<int>(this->interest().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.interest");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->interest(), target);
  }

  // string maturity = 5;
  if (this->maturity().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->maturity().data(), static_cast<int>(this->maturity().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.maturity");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->maturity(), target);
  }

  // string fee = 6;
  if (this->fee().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fee().data(), static_cast<int>(this->fee().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.fee");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->fee(), target);
  }

  // uint64 expiration = 7;
  if (this->expiration() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->expiration(), target);
  }

  // string block = 8;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.block");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->block(), target);
  }

  // string sighash = 9;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "BidOrder.sighash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->sighash(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BidOrder)
  return target;
}

size_t BidOrder::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BidOrder)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->blockchain());
  }

  // string address = 2;
  if (this->address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->address());
  }

  // string amount = 3;
  if (this->amount().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->amount());
  }

  // string interest = 4;
  if (this->interest().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->interest());
  }

  // string maturity = 5;
  if (this->maturity().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->maturity());
  }

  // string fee = 6;
  if (this->fee().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->fee());
  }

  // string block = 8;
  if (this->block().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->block());
  }

  // string sighash = 9;
  if (this->sighash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sighash());
  }

  // uint64 expiration = 7;
  if (this->expiration() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->expiration());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BidOrder::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:BidOrder)
  GOOGLE_DCHECK_NE(&from, this);
  const BidOrder* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BidOrder>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:BidOrder)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:BidOrder)
    MergeFrom(*source);
  }
}

void BidOrder::MergeFrom(const BidOrder& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:BidOrder)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.blockchain().size() > 0) {

    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  if (from.address().size() > 0) {

    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  if (from.amount().size() > 0) {

    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  if (from.interest().size() > 0) {

    interest_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.interest_);
  }
  if (from.maturity().size() > 0) {

    maturity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.maturity_);
  }
  if (from.fee().size() > 0) {

    fee_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fee_);
  }
  if (from.block().size() > 0) {

    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
  if (from.sighash().size() > 0) {

    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  if (from.expiration() != 0) {
    set_expiration(from.expiration());
  }
}

void BidOrder::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:BidOrder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BidOrder::CopyFrom(const BidOrder& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BidOrder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BidOrder::IsInitialized() const {
  return true;
}

void BidOrder::Swap(BidOrder* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BidOrder::InternalSwap(BidOrder* other) {
  using std::swap;
  blockchain_.Swap(&other->blockchain_);
  address_.Swap(&other->address_);
  amount_.Swap(&other->amount_);
  interest_.Swap(&other->interest_);
  maturity_.Swap(&other->maturity_);
  fee_.Swap(&other->fee_);
  block_.Swap(&other->block_);
  sighash_.Swap(&other->sighash_);
  swap(expiration_, other->expiration_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BidOrder::GetMetadata() const {
  protobuf_BidOrder_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_BidOrder_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
