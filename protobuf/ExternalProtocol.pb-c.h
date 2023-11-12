/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ExternalProtocol.proto */

#ifndef PROTOBUF_C_ExternalProtocol_2eproto__INCLUDED
#define PROTOBUF_C_ExternalProtocol_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "InternalProtocol.pb-c.h"

typedef struct ExternalProtocol__ExternalServer ExternalProtocol__ExternalServer;
typedef struct ExternalProtocol__ExternalClient ExternalProtocol__ExternalClient;
typedef struct ExternalProtocol__Connect ExternalProtocol__Connect;
typedef struct ExternalProtocol__ConnectResponse ExternalProtocol__ConnectResponse;
typedef struct ExternalProtocol__Status ExternalProtocol__Status;
typedef struct ExternalProtocol__StatusResponse ExternalProtocol__StatusResponse;
typedef struct ExternalProtocol__Command ExternalProtocol__Command;
typedef struct ExternalProtocol__CommandResponse ExternalProtocol__CommandResponse;


/* --- enums --- */

typedef enum _ExternalProtocol__ConnectResponse__Type {
  EXTERNAL_PROTOCOL__CONNECT_RESPONSE__TYPE__OK = 0,
  /*
   **
   * If some car is already logged in under same company and name
   */
  EXTERNAL_PROTOCOL__CONNECT_RESPONSE__TYPE__ALREADY_LOGGED = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EXTERNAL_PROTOCOL__CONNECT_RESPONSE__TYPE)
} ExternalProtocol__ConnectResponse__Type;
typedef enum _ExternalProtocol__Status__DeviceState {
  EXTERNAL_PROTOCOL__STATUS__DEVICE_STATE__CONNECTING = 0,
  EXTERNAL_PROTOCOL__STATUS__DEVICE_STATE__RUNNING = 1,
  EXTERNAL_PROTOCOL__STATUS__DEVICE_STATE__ERROR = 2,
  EXTERNAL_PROTOCOL__STATUS__DEVICE_STATE__DISCONNECT = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EXTERNAL_PROTOCOL__STATUS__DEVICE_STATE)
} ExternalProtocol__Status__DeviceState;
typedef enum _ExternalProtocol__StatusResponse__Type {
  EXTERNAL_PROTOCOL__STATUS_RESPONSE__TYPE__OK = 0
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EXTERNAL_PROTOCOL__STATUS_RESPONSE__TYPE)
} ExternalProtocol__StatusResponse__Type;
typedef enum _ExternalProtocol__CommandResponse__Type {
  EXTERNAL_PROTOCOL__COMMAND_RESPONSE__TYPE__OK = 0,
  EXTERNAL_PROTOCOL__COMMAND_RESPONSE__TYPE__DEVICE_NOT_CONNECTED = 1,
  EXTERNAL_PROTOCOL__COMMAND_RESPONSE__TYPE__DEVICE_NOT_SUPPORTED = 2,
  EXTERNAL_PROTOCOL__COMMAND_RESPONSE__TYPE__INVALID_COMMAND = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EXTERNAL_PROTOCOL__COMMAND_RESPONSE__TYPE)
} ExternalProtocol__CommandResponse__Type;

/* --- messages --- */

typedef enum {
  EXTERNAL_PROTOCOL__EXTERNAL_SERVER__MESSAGE_TYPE__NOT_SET = 0,
  EXTERNAL_PROTOCOL__EXTERNAL_SERVER__MESSAGE_TYPE_CONNECT_RESPONSE = 1,
  EXTERNAL_PROTOCOL__EXTERNAL_SERVER__MESSAGE_TYPE_STATUS_RESPONSE = 2,
  EXTERNAL_PROTOCOL__EXTERNAL_SERVER__MESSAGE_TYPE_COMMAND = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EXTERNAL_PROTOCOL__EXTERNAL_SERVER__MESSAGE_TYPE__CASE)
} ExternalProtocol__ExternalServer__MessageTypeCase;

/*
 **
 * Special message which contains other fleet server messages
 * Every message of this type can contain only one of the fleet server messages
 * From Server to Client only.
 */
struct  ExternalProtocol__ExternalServer
{
  ProtobufCMessage base;
  ExternalProtocol__ExternalServer__MessageTypeCase message_type_case;
  union {
    ExternalProtocol__ConnectResponse *connectresponse;
    ExternalProtocol__StatusResponse *statusresponse;
    ExternalProtocol__Command *command;
  };
};
#define EXTERNAL_PROTOCOL__EXTERNAL_SERVER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__external_server__descriptor) \
    , EXTERNAL_PROTOCOL__EXTERNAL_SERVER__MESSAGE_TYPE__NOT_SET, {0} }


typedef enum {
  EXTERNAL_PROTOCOL__EXTERNAL_CLIENT__MESSAGE_TYPE__NOT_SET = 0,
  EXTERNAL_PROTOCOL__EXTERNAL_CLIENT__MESSAGE_TYPE_CONNECT = 1,
  EXTERNAL_PROTOCOL__EXTERNAL_CLIENT__MESSAGE_TYPE_STATUS = 2,
  EXTERNAL_PROTOCOL__EXTERNAL_CLIENT__MESSAGE_TYPE_COMMAND_RESPONSE = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EXTERNAL_PROTOCOL__EXTERNAL_CLIENT__MESSAGE_TYPE__CASE)
} ExternalProtocol__ExternalClient__MessageTypeCase;

/*
 **
 * Special message which contains other fleet client messages
 * Every message of this type can contain only one of the fleet client messages
 * From Client to Server only.
 */
struct  ExternalProtocol__ExternalClient
{
  ProtobufCMessage base;
  ExternalProtocol__ExternalClient__MessageTypeCase message_type_case;
  union {
    ExternalProtocol__Connect *connect;
    ExternalProtocol__Status *status;
    ExternalProtocol__CommandResponse *commandresponse;
  };
};
#define EXTERNAL_PROTOCOL__EXTERNAL_CLIENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__external_client__descriptor) \
    , EXTERNAL_PROTOCOL__EXTERNAL_CLIENT__MESSAGE_TYPE__NOT_SET, {0} }


/*
 **
 * Connect message information
 * First message in new communication.
 */
struct  ExternalProtocol__Connect
{
  ProtobufCMessage base;
  /*
   * sessionId of the car
   * - generated before sending first message
   * - stays same in each session
   * - is for check if server communicates with the same car
   */
  char *sessionid;
  /*
   * Company name
   */
  char *company;
  /*
   * Car name
   */
  char *vehiclename;
  /*
   * Unique names of all connected devices
   */
  size_t n_devices;
  InternalProtocol__Device **devices;
};
#define EXTERNAL_PROTOCOL__CONNECT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__connect__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0,NULL }


/*
 **
 * ConnectResponse information
 * Response only to Connect message
 */
struct  ExternalProtocol__ConnectResponse
{
  ProtobufCMessage base;
  char *sessionid;
  ExternalProtocol__ConnectResponse__Type type;
};
#define EXTERNAL_PROTOCOL__CONNECT_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__connect_response__descriptor) \
    , (char *)protobuf_c_empty_string, EXTERNAL_PROTOCOL__CONNECT_RESPONSE__TYPE__OK }


/*
 **
 * Status information with error type, contains status from a device
 */
struct  ExternalProtocol__Status
{
  ProtobufCMessage base;
  char *sessionid;
  /*
   **
   * State of the device sending the Status
   */
  ExternalProtocol__Status__DeviceState devicestate;
  /*
   **
   * Message ID
   */
  uint32_t messagecounter;
  /*
   **
   * Device specific status message, containing device information and status data
   */
  InternalProtocol__DeviceStatus *devicestatus;
  /*
   **
   * Device specific error message
   */
  ProtobufCBinaryData errormessage;
};
#define EXTERNAL_PROTOCOL__STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__status__descriptor) \
    , (char *)protobuf_c_empty_string, EXTERNAL_PROTOCOL__STATUS__DEVICE_STATE__CONNECTING, 0, NULL, {0,NULL} }


/*
 **
 * StatusResponse information
 * Response only to Status message
 */
struct  ExternalProtocol__StatusResponse
{
  ProtobufCMessage base;
  char *sessionid;
  ExternalProtocol__StatusResponse__Type type;
  uint32_t messagecounter;
};
#define EXTERNAL_PROTOCOL__STATUS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__status_response__descriptor) \
    , (char *)protobuf_c_empty_string, EXTERNAL_PROTOCOL__STATUS_RESPONSE__TYPE__OK, 0 }


/*
 **
 * Command message information
 * - contains command for a device
 */
struct  ExternalProtocol__Command
{
  ProtobufCMessage base;
  char *sessionid;
  uint32_t messagecounter;
  /*
   **
   * command binary data and target device
   */
  InternalProtocol__DeviceCommand *devicecommand;
};
#define EXTERNAL_PROTOCOL__COMMAND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__command__descriptor) \
    , (char *)protobuf_c_empty_string, 0, NULL }


/*
 **
 * CommandResponse information
 * Response only to Command message
 */
struct  ExternalProtocol__CommandResponse
{
  ProtobufCMessage base;
  char *sessionid;
  ExternalProtocol__CommandResponse__Type type;
  uint32_t messagecounter;
};
#define EXTERNAL_PROTOCOL__COMMAND_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&external_protocol__command_response__descriptor) \
    , (char *)protobuf_c_empty_string, EXTERNAL_PROTOCOL__COMMAND_RESPONSE__TYPE__OK, 0 }


/* ExternalProtocol__ExternalServer methods */
void   external_protocol__external_server__init
                     (ExternalProtocol__ExternalServer         *message);
size_t external_protocol__external_server__get_packed_size
                     (const ExternalProtocol__ExternalServer   *message);
size_t external_protocol__external_server__pack
                     (const ExternalProtocol__ExternalServer   *message,
                      uint8_t             *out);
size_t external_protocol__external_server__pack_to_buffer
                     (const ExternalProtocol__ExternalServer   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__ExternalServer *
       external_protocol__external_server__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__external_server__free_unpacked
                     (ExternalProtocol__ExternalServer *message,
                      ProtobufCAllocator *allocator);
/* ExternalProtocol__ExternalClient methods */
void   external_protocol__external_client__init
                     (ExternalProtocol__ExternalClient         *message);
size_t external_protocol__external_client__get_packed_size
                     (const ExternalProtocol__ExternalClient   *message);
size_t external_protocol__external_client__pack
                     (const ExternalProtocol__ExternalClient   *message,
                      uint8_t             *out);
size_t external_protocol__external_client__pack_to_buffer
                     (const ExternalProtocol__ExternalClient   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__ExternalClient *
       external_protocol__external_client__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__external_client__free_unpacked
                     (ExternalProtocol__ExternalClient *message,
                      ProtobufCAllocator *allocator);
/* ExternalProtocol__Connect methods */
void   external_protocol__connect__init
                     (ExternalProtocol__Connect         *message);
size_t external_protocol__connect__get_packed_size
                     (const ExternalProtocol__Connect   *message);
size_t external_protocol__connect__pack
                     (const ExternalProtocol__Connect   *message,
                      uint8_t             *out);
size_t external_protocol__connect__pack_to_buffer
                     (const ExternalProtocol__Connect   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__Connect *
       external_protocol__connect__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__connect__free_unpacked
                     (ExternalProtocol__Connect *message,
                      ProtobufCAllocator *allocator);
/* ExternalProtocol__ConnectResponse methods */
void   external_protocol__connect_response__init
                     (ExternalProtocol__ConnectResponse         *message);
size_t external_protocol__connect_response__get_packed_size
                     (const ExternalProtocol__ConnectResponse   *message);
size_t external_protocol__connect_response__pack
                     (const ExternalProtocol__ConnectResponse   *message,
                      uint8_t             *out);
size_t external_protocol__connect_response__pack_to_buffer
                     (const ExternalProtocol__ConnectResponse   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__ConnectResponse *
       external_protocol__connect_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__connect_response__free_unpacked
                     (ExternalProtocol__ConnectResponse *message,
                      ProtobufCAllocator *allocator);
/* ExternalProtocol__Status methods */
void   external_protocol__status__init
                     (ExternalProtocol__Status         *message);
size_t external_protocol__status__get_packed_size
                     (const ExternalProtocol__Status   *message);
size_t external_protocol__status__pack
                     (const ExternalProtocol__Status   *message,
                      uint8_t             *out);
size_t external_protocol__status__pack_to_buffer
                     (const ExternalProtocol__Status   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__Status *
       external_protocol__status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__status__free_unpacked
                     (ExternalProtocol__Status *message,
                      ProtobufCAllocator *allocator);
/* ExternalProtocol__StatusResponse methods */
void   external_protocol__status_response__init
                     (ExternalProtocol__StatusResponse         *message);
size_t external_protocol__status_response__get_packed_size
                     (const ExternalProtocol__StatusResponse   *message);
size_t external_protocol__status_response__pack
                     (const ExternalProtocol__StatusResponse   *message,
                      uint8_t             *out);
size_t external_protocol__status_response__pack_to_buffer
                     (const ExternalProtocol__StatusResponse   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__StatusResponse *
       external_protocol__status_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__status_response__free_unpacked
                     (ExternalProtocol__StatusResponse *message,
                      ProtobufCAllocator *allocator);
/* ExternalProtocol__Command methods */
void   external_protocol__command__init
                     (ExternalProtocol__Command         *message);
size_t external_protocol__command__get_packed_size
                     (const ExternalProtocol__Command   *message);
size_t external_protocol__command__pack
                     (const ExternalProtocol__Command   *message,
                      uint8_t             *out);
size_t external_protocol__command__pack_to_buffer
                     (const ExternalProtocol__Command   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__Command *
       external_protocol__command__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__command__free_unpacked
                     (ExternalProtocol__Command *message,
                      ProtobufCAllocator *allocator);
/* ExternalProtocol__CommandResponse methods */
void   external_protocol__command_response__init
                     (ExternalProtocol__CommandResponse         *message);
size_t external_protocol__command_response__get_packed_size
                     (const ExternalProtocol__CommandResponse   *message);
size_t external_protocol__command_response__pack
                     (const ExternalProtocol__CommandResponse   *message,
                      uint8_t             *out);
size_t external_protocol__command_response__pack_to_buffer
                     (const ExternalProtocol__CommandResponse   *message,
                      ProtobufCBuffer     *buffer);
ExternalProtocol__CommandResponse *
       external_protocol__command_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   external_protocol__command_response__free_unpacked
                     (ExternalProtocol__CommandResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ExternalProtocol__ExternalServer_Closure)
                 (const ExternalProtocol__ExternalServer *message,
                  void *closure_data);
typedef void (*ExternalProtocol__ExternalClient_Closure)
                 (const ExternalProtocol__ExternalClient *message,
                  void *closure_data);
typedef void (*ExternalProtocol__Connect_Closure)
                 (const ExternalProtocol__Connect *message,
                  void *closure_data);
typedef void (*ExternalProtocol__ConnectResponse_Closure)
                 (const ExternalProtocol__ConnectResponse *message,
                  void *closure_data);
typedef void (*ExternalProtocol__Status_Closure)
                 (const ExternalProtocol__Status *message,
                  void *closure_data);
typedef void (*ExternalProtocol__StatusResponse_Closure)
                 (const ExternalProtocol__StatusResponse *message,
                  void *closure_data);
typedef void (*ExternalProtocol__Command_Closure)
                 (const ExternalProtocol__Command *message,
                  void *closure_data);
typedef void (*ExternalProtocol__CommandResponse_Closure)
                 (const ExternalProtocol__CommandResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor external_protocol__external_server__descriptor;
extern const ProtobufCMessageDescriptor external_protocol__external_client__descriptor;
extern const ProtobufCMessageDescriptor external_protocol__connect__descriptor;
extern const ProtobufCMessageDescriptor external_protocol__connect_response__descriptor;
extern const ProtobufCEnumDescriptor    external_protocol__connect_response__type__descriptor;
extern const ProtobufCMessageDescriptor external_protocol__status__descriptor;
extern const ProtobufCEnumDescriptor    external_protocol__status__device_state__descriptor;
extern const ProtobufCMessageDescriptor external_protocol__status_response__descriptor;
extern const ProtobufCEnumDescriptor    external_protocol__status_response__type__descriptor;
extern const ProtobufCMessageDescriptor external_protocol__command__descriptor;
extern const ProtobufCMessageDescriptor external_protocol__command_response__descriptor;
extern const ProtobufCEnumDescriptor    external_protocol__command_response__type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ExternalProtocol_2eproto__INCLUDED */
