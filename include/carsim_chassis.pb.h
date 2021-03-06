// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: carsim_chassis.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_carsim_5fchassis_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_carsim_5fchassis_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_carsim_5fchassis_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_carsim_5fchassis_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_carsim_5fchassis_2eproto;
namespace apollo {
namespace bridge {
class Carsim;
struct CarsimDefaultTypeInternal;
extern CarsimDefaultTypeInternal _Carsim_default_instance_;
}  // namespace bridge
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::bridge::Carsim* Arena::CreateMaybeMessage<::apollo::bridge::Carsim>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace bridge {

enum Carsim_GearPosition : int {
  Carsim_GearPosition_GEAR_NEUTRAL = 0,
  Carsim_GearPosition_GEAR_DRIVE = 1,
  Carsim_GearPosition_GEAR_REVERSE = 2,
  Carsim_GearPosition_GEAR_PARKING = 3,
  Carsim_GearPosition_GEAR_LOW = 4,
  Carsim_GearPosition_GEAR_INVALID = 5,
  Carsim_GearPosition_GEAR_NONE = 6
};
bool Carsim_GearPosition_IsValid(int value);
constexpr Carsim_GearPosition Carsim_GearPosition_GearPosition_MIN = Carsim_GearPosition_GEAR_NEUTRAL;
constexpr Carsim_GearPosition Carsim_GearPosition_GearPosition_MAX = Carsim_GearPosition_GEAR_NONE;
constexpr int Carsim_GearPosition_GearPosition_ARRAYSIZE = Carsim_GearPosition_GearPosition_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Carsim_GearPosition_descriptor();
template<typename T>
inline const std::string& Carsim_GearPosition_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Carsim_GearPosition>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Carsim_GearPosition_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Carsim_GearPosition_descriptor(), enum_t_value);
}
inline bool Carsim_GearPosition_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Carsim_GearPosition* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Carsim_GearPosition>(
    Carsim_GearPosition_descriptor(), name, value);
}
// ===================================================================

class Carsim final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.bridge.Carsim) */ {
 public:
  inline Carsim() : Carsim(nullptr) {}
  ~Carsim() override;
  explicit constexpr Carsim(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Carsim(const Carsim& from);
  Carsim(Carsim&& from) noexcept
    : Carsim() {
    *this = ::std::move(from);
  }

  inline Carsim& operator=(const Carsim& from) {
    CopyFrom(from);
    return *this;
  }
  inline Carsim& operator=(Carsim&& from) noexcept {
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

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Carsim& default_instance() {
    return *internal_default_instance();
  }
  static inline const Carsim* internal_default_instance() {
    return reinterpret_cast<const Carsim*>(
               &_Carsim_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Carsim& a, Carsim& b) {
    a.Swap(&b);
  }
  inline void Swap(Carsim* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Carsim* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Carsim* New() const final {
    return new Carsim();
  }

  Carsim* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Carsim>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Carsim& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Carsim& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Carsim* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.bridge.Carsim";
  }
  protected:
  explicit Carsim(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Carsim_GearPosition GearPosition;
  static constexpr GearPosition GEAR_NEUTRAL =
    Carsim_GearPosition_GEAR_NEUTRAL;
  static constexpr GearPosition GEAR_DRIVE =
    Carsim_GearPosition_GEAR_DRIVE;
  static constexpr GearPosition GEAR_REVERSE =
    Carsim_GearPosition_GEAR_REVERSE;
  static constexpr GearPosition GEAR_PARKING =
    Carsim_GearPosition_GEAR_PARKING;
  static constexpr GearPosition GEAR_LOW =
    Carsim_GearPosition_GEAR_LOW;
  static constexpr GearPosition GEAR_INVALID =
    Carsim_GearPosition_GEAR_INVALID;
  static constexpr GearPosition GEAR_NONE =
    Carsim_GearPosition_GEAR_NONE;
  static inline bool GearPosition_IsValid(int value) {
    return Carsim_GearPosition_IsValid(value);
  }
  static constexpr GearPosition GearPosition_MIN =
    Carsim_GearPosition_GearPosition_MIN;
  static constexpr GearPosition GearPosition_MAX =
    Carsim_GearPosition_GearPosition_MAX;
  static constexpr int GearPosition_ARRAYSIZE =
    Carsim_GearPosition_GearPosition_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  GearPosition_descriptor() {
    return Carsim_GearPosition_descriptor();
  }
  template<typename T>
  static inline const std::string& GearPosition_Name(T enum_t_value) {
    static_assert(::std::is_same<T, GearPosition>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function GearPosition_Name.");
    return Carsim_GearPosition_Name(enum_t_value);
  }
  static inline bool GearPosition_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      GearPosition* value) {
    return Carsim_GearPosition_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 15,
    kSpeedMpsVxFieldNumber = 1,
    kSpeedMpsVyFieldNumber = 2,
    kYawRateFieldNumber = 3,
    kAngleSteeringFieldNumber = 4,
    kAngleRateSteeringFieldNumber = 5,
    kPosXEgovehicleFieldNumber = 6,
    kPosYEgovehicleFieldNumber = 7,
    kPosZEgovehicleFieldNumber = 8,
    kAngleRollEgovehicleFieldNumber = 9,
    kAnglePitchEgovehicleFieldNumber = 10,
    kAngleYawEgovehicleFieldNumber = 11,
    kGearLocaltionFieldNumber = 12,
    kAccXEgovehicleFieldNumber = 13,
    kAccYEgovehicleFieldNumber = 14,
  };
  // optional .apollo.common.Header header = 15;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::apollo::common::Header& header() const;
  PROTOBUF_MUST_USE_RESULT ::apollo::common::Header* release_header();
  ::apollo::common::Header* mutable_header();
  void set_allocated_header(::apollo::common::Header* header);
  private:
  const ::apollo::common::Header& _internal_header() const;
  ::apollo::common::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::apollo::common::Header* header);
  ::apollo::common::Header* unsafe_arena_release_header();

  // optional float speed_mps_vx = 1;
  bool has_speed_mps_vx() const;
  private:
  bool _internal_has_speed_mps_vx() const;
  public:
  void clear_speed_mps_vx();
  float speed_mps_vx() const;
  void set_speed_mps_vx(float value);
  private:
  float _internal_speed_mps_vx() const;
  void _internal_set_speed_mps_vx(float value);
  public:

  // optional float speed_mps_vy = 2;
  bool has_speed_mps_vy() const;
  private:
  bool _internal_has_speed_mps_vy() const;
  public:
  void clear_speed_mps_vy();
  float speed_mps_vy() const;
  void set_speed_mps_vy(float value);
  private:
  float _internal_speed_mps_vy() const;
  void _internal_set_speed_mps_vy(float value);
  public:

  // optional float yaw_rate = 3;
  bool has_yaw_rate() const;
  private:
  bool _internal_has_yaw_rate() const;
  public:
  void clear_yaw_rate();
  float yaw_rate() const;
  void set_yaw_rate(float value);
  private:
  float _internal_yaw_rate() const;
  void _internal_set_yaw_rate(float value);
  public:

  // optional float angle_steering = 4;
  bool has_angle_steering() const;
  private:
  bool _internal_has_angle_steering() const;
  public:
  void clear_angle_steering();
  float angle_steering() const;
  void set_angle_steering(float value);
  private:
  float _internal_angle_steering() const;
  void _internal_set_angle_steering(float value);
  public:

  // optional float angle_rate_steering = 5;
  bool has_angle_rate_steering() const;
  private:
  bool _internal_has_angle_rate_steering() const;
  public:
  void clear_angle_rate_steering();
  float angle_rate_steering() const;
  void set_angle_rate_steering(float value);
  private:
  float _internal_angle_rate_steering() const;
  void _internal_set_angle_rate_steering(float value);
  public:

  // optional float pos_x_egovehicle = 6;
  bool has_pos_x_egovehicle() const;
  private:
  bool _internal_has_pos_x_egovehicle() const;
  public:
  void clear_pos_x_egovehicle();
  float pos_x_egovehicle() const;
  void set_pos_x_egovehicle(float value);
  private:
  float _internal_pos_x_egovehicle() const;
  void _internal_set_pos_x_egovehicle(float value);
  public:

  // optional float pos_y_egovehicle = 7;
  bool has_pos_y_egovehicle() const;
  private:
  bool _internal_has_pos_y_egovehicle() const;
  public:
  void clear_pos_y_egovehicle();
  float pos_y_egovehicle() const;
  void set_pos_y_egovehicle(float value);
  private:
  float _internal_pos_y_egovehicle() const;
  void _internal_set_pos_y_egovehicle(float value);
  public:

  // optional float pos_z_egovehicle = 8;
  bool has_pos_z_egovehicle() const;
  private:
  bool _internal_has_pos_z_egovehicle() const;
  public:
  void clear_pos_z_egovehicle();
  float pos_z_egovehicle() const;
  void set_pos_z_egovehicle(float value);
  private:
  float _internal_pos_z_egovehicle() const;
  void _internal_set_pos_z_egovehicle(float value);
  public:

  // optional float angle_roll_egovehicle = 9;
  bool has_angle_roll_egovehicle() const;
  private:
  bool _internal_has_angle_roll_egovehicle() const;
  public:
  void clear_angle_roll_egovehicle();
  float angle_roll_egovehicle() const;
  void set_angle_roll_egovehicle(float value);
  private:
  float _internal_angle_roll_egovehicle() const;
  void _internal_set_angle_roll_egovehicle(float value);
  public:

  // optional float angle_pitch_egovehicle = 10;
  bool has_angle_pitch_egovehicle() const;
  private:
  bool _internal_has_angle_pitch_egovehicle() const;
  public:
  void clear_angle_pitch_egovehicle();
  float angle_pitch_egovehicle() const;
  void set_angle_pitch_egovehicle(float value);
  private:
  float _internal_angle_pitch_egovehicle() const;
  void _internal_set_angle_pitch_egovehicle(float value);
  public:

  // optional float angle_yaw_egovehicle = 11;
  bool has_angle_yaw_egovehicle() const;
  private:
  bool _internal_has_angle_yaw_egovehicle() const;
  public:
  void clear_angle_yaw_egovehicle();
  float angle_yaw_egovehicle() const;
  void set_angle_yaw_egovehicle(float value);
  private:
  float _internal_angle_yaw_egovehicle() const;
  void _internal_set_angle_yaw_egovehicle(float value);
  public:

  // optional .apollo.bridge.Carsim.GearPosition gear_localtion = 12;
  bool has_gear_localtion() const;
  private:
  bool _internal_has_gear_localtion() const;
  public:
  void clear_gear_localtion();
  ::apollo::bridge::Carsim_GearPosition gear_localtion() const;
  void set_gear_localtion(::apollo::bridge::Carsim_GearPosition value);
  private:
  ::apollo::bridge::Carsim_GearPosition _internal_gear_localtion() const;
  void _internal_set_gear_localtion(::apollo::bridge::Carsim_GearPosition value);
  public:

  // optional float acc_x_egovehicle = 13;
  bool has_acc_x_egovehicle() const;
  private:
  bool _internal_has_acc_x_egovehicle() const;
  public:
  void clear_acc_x_egovehicle();
  float acc_x_egovehicle() const;
  void set_acc_x_egovehicle(float value);
  private:
  float _internal_acc_x_egovehicle() const;
  void _internal_set_acc_x_egovehicle(float value);
  public:

  // optional float acc_y_egovehicle = 14;
  bool has_acc_y_egovehicle() const;
  private:
  bool _internal_has_acc_y_egovehicle() const;
  public:
  void clear_acc_y_egovehicle();
  float acc_y_egovehicle() const;
  void set_acc_y_egovehicle(float value);
  private:
  float _internal_acc_y_egovehicle() const;
  void _internal_set_acc_y_egovehicle(float value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.bridge.Carsim)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::common::Header* header_;
  float speed_mps_vx_;
  float speed_mps_vy_;
  float yaw_rate_;
  float angle_steering_;
  float angle_rate_steering_;
  float pos_x_egovehicle_;
  float pos_y_egovehicle_;
  float pos_z_egovehicle_;
  float angle_roll_egovehicle_;
  float angle_pitch_egovehicle_;
  float angle_yaw_egovehicle_;
  int gear_localtion_;
  float acc_x_egovehicle_;
  float acc_y_egovehicle_;
  friend struct ::TableStruct_carsim_5fchassis_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Carsim

// optional float speed_mps_vx = 1;
inline bool Carsim::_internal_has_speed_mps_vx() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Carsim::has_speed_mps_vx() const {
  return _internal_has_speed_mps_vx();
}
inline void Carsim::clear_speed_mps_vx() {
  speed_mps_vx_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Carsim::_internal_speed_mps_vx() const {
  return speed_mps_vx_;
}
inline float Carsim::speed_mps_vx() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.speed_mps_vx)
  return _internal_speed_mps_vx();
}
inline void Carsim::_internal_set_speed_mps_vx(float value) {
  _has_bits_[0] |= 0x00000002u;
  speed_mps_vx_ = value;
}
inline void Carsim::set_speed_mps_vx(float value) {
  _internal_set_speed_mps_vx(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.speed_mps_vx)
}

// optional float speed_mps_vy = 2;
inline bool Carsim::_internal_has_speed_mps_vy() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Carsim::has_speed_mps_vy() const {
  return _internal_has_speed_mps_vy();
}
inline void Carsim::clear_speed_mps_vy() {
  speed_mps_vy_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float Carsim::_internal_speed_mps_vy() const {
  return speed_mps_vy_;
}
inline float Carsim::speed_mps_vy() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.speed_mps_vy)
  return _internal_speed_mps_vy();
}
inline void Carsim::_internal_set_speed_mps_vy(float value) {
  _has_bits_[0] |= 0x00000004u;
  speed_mps_vy_ = value;
}
inline void Carsim::set_speed_mps_vy(float value) {
  _internal_set_speed_mps_vy(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.speed_mps_vy)
}

// optional float yaw_rate = 3;
inline bool Carsim::_internal_has_yaw_rate() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Carsim::has_yaw_rate() const {
  return _internal_has_yaw_rate();
}
inline void Carsim::clear_yaw_rate() {
  yaw_rate_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float Carsim::_internal_yaw_rate() const {
  return yaw_rate_;
}
inline float Carsim::yaw_rate() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.yaw_rate)
  return _internal_yaw_rate();
}
inline void Carsim::_internal_set_yaw_rate(float value) {
  _has_bits_[0] |= 0x00000008u;
  yaw_rate_ = value;
}
inline void Carsim::set_yaw_rate(float value) {
  _internal_set_yaw_rate(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.yaw_rate)
}

// optional float angle_steering = 4;
inline bool Carsim::_internal_has_angle_steering() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Carsim::has_angle_steering() const {
  return _internal_has_angle_steering();
}
inline void Carsim::clear_angle_steering() {
  angle_steering_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline float Carsim::_internal_angle_steering() const {
  return angle_steering_;
}
inline float Carsim::angle_steering() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.angle_steering)
  return _internal_angle_steering();
}
inline void Carsim::_internal_set_angle_steering(float value) {
  _has_bits_[0] |= 0x00000010u;
  angle_steering_ = value;
}
inline void Carsim::set_angle_steering(float value) {
  _internal_set_angle_steering(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.angle_steering)
}

// optional float angle_rate_steering = 5;
inline bool Carsim::_internal_has_angle_rate_steering() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Carsim::has_angle_rate_steering() const {
  return _internal_has_angle_rate_steering();
}
inline void Carsim::clear_angle_rate_steering() {
  angle_rate_steering_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline float Carsim::_internal_angle_rate_steering() const {
  return angle_rate_steering_;
}
inline float Carsim::angle_rate_steering() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.angle_rate_steering)
  return _internal_angle_rate_steering();
}
inline void Carsim::_internal_set_angle_rate_steering(float value) {
  _has_bits_[0] |= 0x00000020u;
  angle_rate_steering_ = value;
}
inline void Carsim::set_angle_rate_steering(float value) {
  _internal_set_angle_rate_steering(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.angle_rate_steering)
}

// optional float pos_x_egovehicle = 6;
inline bool Carsim::_internal_has_pos_x_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Carsim::has_pos_x_egovehicle() const {
  return _internal_has_pos_x_egovehicle();
}
inline void Carsim::clear_pos_x_egovehicle() {
  pos_x_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline float Carsim::_internal_pos_x_egovehicle() const {
  return pos_x_egovehicle_;
}
inline float Carsim::pos_x_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.pos_x_egovehicle)
  return _internal_pos_x_egovehicle();
}
inline void Carsim::_internal_set_pos_x_egovehicle(float value) {
  _has_bits_[0] |= 0x00000040u;
  pos_x_egovehicle_ = value;
}
inline void Carsim::set_pos_x_egovehicle(float value) {
  _internal_set_pos_x_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.pos_x_egovehicle)
}

// optional float pos_y_egovehicle = 7;
inline bool Carsim::_internal_has_pos_y_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Carsim::has_pos_y_egovehicle() const {
  return _internal_has_pos_y_egovehicle();
}
inline void Carsim::clear_pos_y_egovehicle() {
  pos_y_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline float Carsim::_internal_pos_y_egovehicle() const {
  return pos_y_egovehicle_;
}
inline float Carsim::pos_y_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.pos_y_egovehicle)
  return _internal_pos_y_egovehicle();
}
inline void Carsim::_internal_set_pos_y_egovehicle(float value) {
  _has_bits_[0] |= 0x00000080u;
  pos_y_egovehicle_ = value;
}
inline void Carsim::set_pos_y_egovehicle(float value) {
  _internal_set_pos_y_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.pos_y_egovehicle)
}

// optional float pos_z_egovehicle = 8;
inline bool Carsim::_internal_has_pos_z_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool Carsim::has_pos_z_egovehicle() const {
  return _internal_has_pos_z_egovehicle();
}
inline void Carsim::clear_pos_z_egovehicle() {
  pos_z_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline float Carsim::_internal_pos_z_egovehicle() const {
  return pos_z_egovehicle_;
}
inline float Carsim::pos_z_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.pos_z_egovehicle)
  return _internal_pos_z_egovehicle();
}
inline void Carsim::_internal_set_pos_z_egovehicle(float value) {
  _has_bits_[0] |= 0x00000100u;
  pos_z_egovehicle_ = value;
}
inline void Carsim::set_pos_z_egovehicle(float value) {
  _internal_set_pos_z_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.pos_z_egovehicle)
}

// optional float angle_roll_egovehicle = 9;
inline bool Carsim::_internal_has_angle_roll_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool Carsim::has_angle_roll_egovehicle() const {
  return _internal_has_angle_roll_egovehicle();
}
inline void Carsim::clear_angle_roll_egovehicle() {
  angle_roll_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline float Carsim::_internal_angle_roll_egovehicle() const {
  return angle_roll_egovehicle_;
}
inline float Carsim::angle_roll_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.angle_roll_egovehicle)
  return _internal_angle_roll_egovehicle();
}
inline void Carsim::_internal_set_angle_roll_egovehicle(float value) {
  _has_bits_[0] |= 0x00000200u;
  angle_roll_egovehicle_ = value;
}
inline void Carsim::set_angle_roll_egovehicle(float value) {
  _internal_set_angle_roll_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.angle_roll_egovehicle)
}

// optional float angle_pitch_egovehicle = 10;
inline bool Carsim::_internal_has_angle_pitch_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool Carsim::has_angle_pitch_egovehicle() const {
  return _internal_has_angle_pitch_egovehicle();
}
inline void Carsim::clear_angle_pitch_egovehicle() {
  angle_pitch_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline float Carsim::_internal_angle_pitch_egovehicle() const {
  return angle_pitch_egovehicle_;
}
inline float Carsim::angle_pitch_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.angle_pitch_egovehicle)
  return _internal_angle_pitch_egovehicle();
}
inline void Carsim::_internal_set_angle_pitch_egovehicle(float value) {
  _has_bits_[0] |= 0x00000400u;
  angle_pitch_egovehicle_ = value;
}
inline void Carsim::set_angle_pitch_egovehicle(float value) {
  _internal_set_angle_pitch_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.angle_pitch_egovehicle)
}

// optional float angle_yaw_egovehicle = 11;
inline bool Carsim::_internal_has_angle_yaw_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00000800u) != 0;
  return value;
}
inline bool Carsim::has_angle_yaw_egovehicle() const {
  return _internal_has_angle_yaw_egovehicle();
}
inline void Carsim::clear_angle_yaw_egovehicle() {
  angle_yaw_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00000800u;
}
inline float Carsim::_internal_angle_yaw_egovehicle() const {
  return angle_yaw_egovehicle_;
}
inline float Carsim::angle_yaw_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.angle_yaw_egovehicle)
  return _internal_angle_yaw_egovehicle();
}
inline void Carsim::_internal_set_angle_yaw_egovehicle(float value) {
  _has_bits_[0] |= 0x00000800u;
  angle_yaw_egovehicle_ = value;
}
inline void Carsim::set_angle_yaw_egovehicle(float value) {
  _internal_set_angle_yaw_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.angle_yaw_egovehicle)
}

// optional .apollo.bridge.Carsim.GearPosition gear_localtion = 12;
inline bool Carsim::_internal_has_gear_localtion() const {
  bool value = (_has_bits_[0] & 0x00001000u) != 0;
  return value;
}
inline bool Carsim::has_gear_localtion() const {
  return _internal_has_gear_localtion();
}
inline void Carsim::clear_gear_localtion() {
  gear_localtion_ = 0;
  _has_bits_[0] &= ~0x00001000u;
}
inline ::apollo::bridge::Carsim_GearPosition Carsim::_internal_gear_localtion() const {
  return static_cast< ::apollo::bridge::Carsim_GearPosition >(gear_localtion_);
}
inline ::apollo::bridge::Carsim_GearPosition Carsim::gear_localtion() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.gear_localtion)
  return _internal_gear_localtion();
}
inline void Carsim::_internal_set_gear_localtion(::apollo::bridge::Carsim_GearPosition value) {
  assert(::apollo::bridge::Carsim_GearPosition_IsValid(value));
  _has_bits_[0] |= 0x00001000u;
  gear_localtion_ = value;
}
inline void Carsim::set_gear_localtion(::apollo::bridge::Carsim_GearPosition value) {
  _internal_set_gear_localtion(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.gear_localtion)
}

// optional float acc_x_egovehicle = 13;
inline bool Carsim::_internal_has_acc_x_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00002000u) != 0;
  return value;
}
inline bool Carsim::has_acc_x_egovehicle() const {
  return _internal_has_acc_x_egovehicle();
}
inline void Carsim::clear_acc_x_egovehicle() {
  acc_x_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00002000u;
}
inline float Carsim::_internal_acc_x_egovehicle() const {
  return acc_x_egovehicle_;
}
inline float Carsim::acc_x_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.acc_x_egovehicle)
  return _internal_acc_x_egovehicle();
}
inline void Carsim::_internal_set_acc_x_egovehicle(float value) {
  _has_bits_[0] |= 0x00002000u;
  acc_x_egovehicle_ = value;
}
inline void Carsim::set_acc_x_egovehicle(float value) {
  _internal_set_acc_x_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.acc_x_egovehicle)
}

// optional float acc_y_egovehicle = 14;
inline bool Carsim::_internal_has_acc_y_egovehicle() const {
  bool value = (_has_bits_[0] & 0x00004000u) != 0;
  return value;
}
inline bool Carsim::has_acc_y_egovehicle() const {
  return _internal_has_acc_y_egovehicle();
}
inline void Carsim::clear_acc_y_egovehicle() {
  acc_y_egovehicle_ = 0;
  _has_bits_[0] &= ~0x00004000u;
}
inline float Carsim::_internal_acc_y_egovehicle() const {
  return acc_y_egovehicle_;
}
inline float Carsim::acc_y_egovehicle() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.acc_y_egovehicle)
  return _internal_acc_y_egovehicle();
}
inline void Carsim::_internal_set_acc_y_egovehicle(float value) {
  _has_bits_[0] |= 0x00004000u;
  acc_y_egovehicle_ = value;
}
inline void Carsim::set_acc_y_egovehicle(float value) {
  _internal_set_acc_y_egovehicle(value);
  // @@protoc_insertion_point(field_set:apollo.bridge.Carsim.acc_y_egovehicle)
}

// optional .apollo.common.Header header = 15;
inline bool Carsim::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool Carsim::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& Carsim::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::common::Header&>(
      ::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& Carsim::header() const {
  // @@protoc_insertion_point(field_get:apollo.bridge.Carsim.header)
  return _internal_header();
}
inline void Carsim::unsafe_arena_set_allocated_header(
    ::apollo::common::Header* header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.bridge.Carsim.header)
}
inline ::apollo::common::Header* Carsim::release_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::apollo::common::Header* Carsim::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:apollo.bridge.Carsim.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* Carsim::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArenaForAllocation());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* Carsim::mutable_header() {
  ::apollo::common::Header* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:apollo.bridge.Carsim.header)
  return _msg;
}
inline void Carsim::set_allocated_header(::apollo::common::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header));
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:apollo.bridge.Carsim.header)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace bridge
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::bridge::Carsim_GearPosition> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::bridge::Carsim_GearPosition>() {
  return ::apollo::bridge::Carsim_GearPosition_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_carsim_5fchassis_2eproto
