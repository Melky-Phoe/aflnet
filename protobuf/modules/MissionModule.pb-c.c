/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: modules/MissionModule.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "modules/MissionModule.pb-c.h"
void   mission_module__autonomy_status__telemetry__init
                     (MissionModule__AutonomyStatus__Telemetry         *message)
{
  static const MissionModule__AutonomyStatus__Telemetry init_value = MISSION_MODULE__AUTONOMY_STATUS__TELEMETRY__INIT;
  *message = init_value;
}
void   mission_module__autonomy_status__init
                     (MissionModule__AutonomyStatus         *message)
{
  static const MissionModule__AutonomyStatus init_value = MISSION_MODULE__AUTONOMY_STATUS__INIT;
  *message = init_value;
}
size_t mission_module__autonomy_status__get_packed_size
                     (const MissionModule__AutonomyStatus *message)
{
  assert(message->base.descriptor == &mission_module__autonomy_status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t mission_module__autonomy_status__pack
                     (const MissionModule__AutonomyStatus *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &mission_module__autonomy_status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t mission_module__autonomy_status__pack_to_buffer
                     (const MissionModule__AutonomyStatus *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &mission_module__autonomy_status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MissionModule__AutonomyStatus *
       mission_module__autonomy_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MissionModule__AutonomyStatus *)
     protobuf_c_message_unpack (&mission_module__autonomy_status__descriptor,
                                allocator, len, data);
}
void   mission_module__autonomy_status__free_unpacked
                     (MissionModule__AutonomyStatus *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &mission_module__autonomy_status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   mission_module__autonomy_command__init
                     (MissionModule__AutonomyCommand         *message)
{
  static const MissionModule__AutonomyCommand init_value = MISSION_MODULE__AUTONOMY_COMMAND__INIT;
  *message = init_value;
}
size_t mission_module__autonomy_command__get_packed_size
                     (const MissionModule__AutonomyCommand *message)
{
  assert(message->base.descriptor == &mission_module__autonomy_command__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t mission_module__autonomy_command__pack
                     (const MissionModule__AutonomyCommand *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &mission_module__autonomy_command__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t mission_module__autonomy_command__pack_to_buffer
                     (const MissionModule__AutonomyCommand *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &mission_module__autonomy_command__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MissionModule__AutonomyCommand *
       mission_module__autonomy_command__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MissionModule__AutonomyCommand *)
     protobuf_c_message_unpack (&mission_module__autonomy_command__descriptor,
                                allocator, len, data);
}
void   mission_module__autonomy_command__free_unpacked
                     (MissionModule__AutonomyCommand *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &mission_module__autonomy_command__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   mission_module__autonomy_error__init
                     (MissionModule__AutonomyError         *message)
{
  static const MissionModule__AutonomyError init_value = MISSION_MODULE__AUTONOMY_ERROR__INIT;
  *message = init_value;
}
size_t mission_module__autonomy_error__get_packed_size
                     (const MissionModule__AutonomyError *message)
{
  assert(message->base.descriptor == &mission_module__autonomy_error__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t mission_module__autonomy_error__pack
                     (const MissionModule__AutonomyError *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &mission_module__autonomy_error__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t mission_module__autonomy_error__pack_to_buffer
                     (const MissionModule__AutonomyError *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &mission_module__autonomy_error__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MissionModule__AutonomyError *
       mission_module__autonomy_error__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MissionModule__AutonomyError *)
     protobuf_c_message_unpack (&mission_module__autonomy_error__descriptor,
                                allocator, len, data);
}
void   mission_module__autonomy_error__free_unpacked
                     (MissionModule__AutonomyError *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &mission_module__autonomy_error__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   mission_module__station__init
                     (MissionModule__Station         *message)
{
  static const MissionModule__Station init_value = MISSION_MODULE__STATION__INIT;
  *message = init_value;
}
size_t mission_module__station__get_packed_size
                     (const MissionModule__Station *message)
{
  assert(message->base.descriptor == &mission_module__station__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t mission_module__station__pack
                     (const MissionModule__Station *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &mission_module__station__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t mission_module__station__pack_to_buffer
                     (const MissionModule__Station *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &mission_module__station__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MissionModule__Station *
       mission_module__station__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MissionModule__Station *)
     protobuf_c_message_unpack (&mission_module__station__descriptor,
                                allocator, len, data);
}
void   mission_module__station__free_unpacked
                     (MissionModule__Station *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &mission_module__station__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   mission_module__position__init
                     (MissionModule__Position         *message)
{
  static const MissionModule__Position init_value = MISSION_MODULE__POSITION__INIT;
  *message = init_value;
}
size_t mission_module__position__get_packed_size
                     (const MissionModule__Position *message)
{
  assert(message->base.descriptor == &mission_module__position__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t mission_module__position__pack
                     (const MissionModule__Position *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &mission_module__position__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t mission_module__position__pack_to_buffer
                     (const MissionModule__Position *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &mission_module__position__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MissionModule__Position *
       mission_module__position__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MissionModule__Position *)
     protobuf_c_message_unpack (&mission_module__position__descriptor,
                                allocator, len, data);
}
void   mission_module__position__free_unpacked
                     (MissionModule__Position *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &mission_module__position__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor mission_module__autonomy_status__telemetry__field_descriptors[3] =
{
  {
    "speed",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyStatus__Telemetry, speed),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fuel",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyStatus__Telemetry, fuel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "position",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyStatus__Telemetry, position),
    &mission_module__position__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned mission_module__autonomy_status__telemetry__field_indices_by_name[] = {
  1,   /* field[1] = fuel */
  2,   /* field[2] = position */
  0,   /* field[0] = speed */
};
static const ProtobufCIntRange mission_module__autonomy_status__telemetry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor mission_module__autonomy_status__telemetry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MissionModule.AutonomyStatus.Telemetry",
  "Telemetry",
  "MissionModule__AutonomyStatus__Telemetry",
  "MissionModule",
  sizeof(MissionModule__AutonomyStatus__Telemetry),
  3,
  mission_module__autonomy_status__telemetry__field_descriptors,
  mission_module__autonomy_status__telemetry__field_indices_by_name,
  1,  mission_module__autonomy_status__telemetry__number_ranges,
  (ProtobufCMessageInit) mission_module__autonomy_status__telemetry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue mission_module__autonomy_status__state__enum_values_by_number[5] =
{
  { "IDLE", "MISSION_MODULE__AUTONOMY_STATUS__STATE__IDLE", 0 },
  { "DRIVE", "MISSION_MODULE__AUTONOMY_STATUS__STATE__DRIVE", 1 },
  { "IN_STOP", "MISSION_MODULE__AUTONOMY_STATUS__STATE__IN_STOP", 2 },
  { "OBSTACLE", "MISSION_MODULE__AUTONOMY_STATUS__STATE__OBSTACLE", 3 },
  { "ERROR", "MISSION_MODULE__AUTONOMY_STATUS__STATE__ERROR", 4 },
};
static const ProtobufCIntRange mission_module__autonomy_status__state__value_ranges[] = {
{0, 0},{0, 5}
};
static const ProtobufCEnumValueIndex mission_module__autonomy_status__state__enum_values_by_name[5] =
{
  { "DRIVE", 1 },
  { "ERROR", 4 },
  { "IDLE", 0 },
  { "IN_STOP", 2 },
  { "OBSTACLE", 3 },
};
const ProtobufCEnumDescriptor mission_module__autonomy_status__state__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "MissionModule.AutonomyStatus.State",
  "State",
  "MissionModule__AutonomyStatus__State",
  "MissionModule",
  5,
  mission_module__autonomy_status__state__enum_values_by_number,
  5,
  mission_module__autonomy_status__state__enum_values_by_name,
  1,
  mission_module__autonomy_status__state__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor mission_module__autonomy_status__field_descriptors[3] =
{
  {
    "telemetry",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyStatus, telemetry),
    &mission_module__autonomy_status__telemetry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "state",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyStatus, state),
    &mission_module__autonomy_status__state__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nextStop",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyStatus, nextstop),
    &mission_module__station__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned mission_module__autonomy_status__field_indices_by_name[] = {
  2,   /* field[2] = nextStop */
  1,   /* field[1] = state */
  0,   /* field[0] = telemetry */
};
static const ProtobufCIntRange mission_module__autonomy_status__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor mission_module__autonomy_status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MissionModule.AutonomyStatus",
  "AutonomyStatus",
  "MissionModule__AutonomyStatus",
  "MissionModule",
  sizeof(MissionModule__AutonomyStatus),
  3,
  mission_module__autonomy_status__field_descriptors,
  mission_module__autonomy_status__field_indices_by_name,
  1,  mission_module__autonomy_status__number_ranges,
  (ProtobufCMessageInit) mission_module__autonomy_status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue mission_module__autonomy_command__action__enum_values_by_number[3] =
{
  { "NO_ACTION", "MISSION_MODULE__AUTONOMY_COMMAND__ACTION__NO_ACTION", 0 },
  { "STOP", "MISSION_MODULE__AUTONOMY_COMMAND__ACTION__STOP", 1 },
  { "START", "MISSION_MODULE__AUTONOMY_COMMAND__ACTION__START", 2 },
};
static const ProtobufCIntRange mission_module__autonomy_command__action__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex mission_module__autonomy_command__action__enum_values_by_name[3] =
{
  { "NO_ACTION", 0 },
  { "START", 2 },
  { "STOP", 1 },
};
const ProtobufCEnumDescriptor mission_module__autonomy_command__action__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "MissionModule.AutonomyCommand.Action",
  "Action",
  "MissionModule__AutonomyCommand__Action",
  "MissionModule",
  3,
  mission_module__autonomy_command__action__enum_values_by_number,
  3,
  mission_module__autonomy_command__action__enum_values_by_name,
  1,
  mission_module__autonomy_command__action__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor mission_module__autonomy_command__field_descriptors[3] =
{
  {
    "stops",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(MissionModule__AutonomyCommand, n_stops),
    offsetof(MissionModule__AutonomyCommand, stops),
    &mission_module__station__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "route",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyCommand, route),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "action",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(MissionModule__AutonomyCommand, action),
    &mission_module__autonomy_command__action__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned mission_module__autonomy_command__field_indices_by_name[] = {
  2,   /* field[2] = action */
  1,   /* field[1] = route */
  0,   /* field[0] = stops */
};
static const ProtobufCIntRange mission_module__autonomy_command__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor mission_module__autonomy_command__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MissionModule.AutonomyCommand",
  "AutonomyCommand",
  "MissionModule__AutonomyCommand",
  "MissionModule",
  sizeof(MissionModule__AutonomyCommand),
  3,
  mission_module__autonomy_command__field_descriptors,
  mission_module__autonomy_command__field_indices_by_name,
  1,  mission_module__autonomy_command__number_ranges,
  (ProtobufCMessageInit) mission_module__autonomy_command__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor mission_module__autonomy_error__field_descriptors[1] =
{
  {
    "finishedStops",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(MissionModule__AutonomyError, n_finishedstops),
    offsetof(MissionModule__AutonomyError, finishedstops),
    &mission_module__station__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned mission_module__autonomy_error__field_indices_by_name[] = {
  0,   /* field[0] = finishedStops */
};
static const ProtobufCIntRange mission_module__autonomy_error__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor mission_module__autonomy_error__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MissionModule.AutonomyError",
  "AutonomyError",
  "MissionModule__AutonomyError",
  "MissionModule",
  sizeof(MissionModule__AutonomyError),
  1,
  mission_module__autonomy_error__field_descriptors,
  mission_module__autonomy_error__field_indices_by_name,
  1,  mission_module__autonomy_error__number_ranges,
  (ProtobufCMessageInit) mission_module__autonomy_error__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor mission_module__station__field_descriptors[2] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(MissionModule__Station, name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "position",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__Station, position),
    &mission_module__position__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned mission_module__station__field_indices_by_name[] = {
  0,   /* field[0] = name */
  1,   /* field[1] = position */
};
static const ProtobufCIntRange mission_module__station__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor mission_module__station__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MissionModule.Station",
  "Station",
  "MissionModule__Station",
  "MissionModule",
  sizeof(MissionModule__Station),
  2,
  mission_module__station__field_descriptors,
  mission_module__station__field_indices_by_name,
  1,  mission_module__station__number_ranges,
  (ProtobufCMessageInit) mission_module__station__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor mission_module__position__field_descriptors[3] =
{
  {
    "latitude",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__Position, latitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "longitude",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__Position, longitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "altitude",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_DOUBLE,
    0,   /* quantifier_offset */
    offsetof(MissionModule__Position, altitude),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned mission_module__position__field_indices_by_name[] = {
  2,   /* field[2] = altitude */
  0,   /* field[0] = latitude */
  1,   /* field[1] = longitude */
};
static const ProtobufCIntRange mission_module__position__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor mission_module__position__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MissionModule.Position",
  "Position",
  "MissionModule__Position",
  "MissionModule",
  sizeof(MissionModule__Position),
  3,
  mission_module__position__field_descriptors,
  mission_module__position__field_indices_by_name,
  1,  mission_module__position__number_ranges,
  (ProtobufCMessageInit) mission_module__position__init,
  NULL,NULL,NULL    /* reserved[123] */
};
