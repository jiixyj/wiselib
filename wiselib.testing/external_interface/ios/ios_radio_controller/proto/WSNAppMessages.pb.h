// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class DestroyVirtualLinkRequest;
@class DestroyVirtualLinkRequest_Builder;
@class DisablePhysicalLink;
@class DisablePhysicalLink_Builder;
@class EnablePhysicalLink;
@class EnablePhysicalLink_Builder;
@class ListenerManagement;
@class ListenerManagement_Builder;
@class Message;
@class Message_Builder;
@class Notification;
@class Notification_Builder;
@class OperationInvocation;
@class OperationInvocation_Builder;
@class Program;
@class Program_Builder;
@class Program_ProgramMetaData;
@class Program_ProgramMetaData_Builder;
@class RequestStatus;
@class RequestStatus_Builder;
@class RequestStatus_Status;
@class RequestStatus_Status_Builder;
@class SetVirtualLinkRequest;
@class SetVirtualLinkRequest_Builder;
typedef enum {
  ListenerManagement_OperationRegister = 1,
  ListenerManagement_OperationUnregister = 2,
} ListenerManagement_Operation;

BOOL ListenerManagement_OperationIsValidValue(ListenerManagement_Operation value);

typedef enum {
  OperationInvocation_OperationSend = 0,
  OperationInvocation_OperationAreNodesAlive = 1,
  OperationInvocation_OperationFlashPrograms = 2,
  OperationInvocation_OperationResetNodes = 3,
  OperationInvocation_OperationSetVirtualLink = 4,
  OperationInvocation_OperationDestroyVirtualLink = 5,
  OperationInvocation_OperationDisableNode = 6,
  OperationInvocation_OperationEnableNode = 7,
  OperationInvocation_OperationDisablePhysicalLink = 8,
  OperationInvocation_OperationEnablePhysicalLink = 9,
} OperationInvocation_Operation;

BOOL OperationInvocation_OperationIsValidValue(OperationInvocation_Operation value);


@interface WSNAppMessagesRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface ListenerManagement : PBGeneratedMessage {
@private
  BOOL hasNodeName_:1;
  BOOL hasOperation_:1;
  NSString* nodeName;
  ListenerManagement_Operation operation;
}
- (BOOL) hasOperation;
- (BOOL) hasNodeName;
@property (readonly) ListenerManagement_Operation operation;
@property (readonly, retain) NSString* nodeName;

+ (ListenerManagement*) defaultInstance;
- (ListenerManagement*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ListenerManagement_Builder*) builder;
+ (ListenerManagement_Builder*) builder;
+ (ListenerManagement_Builder*) builderWithPrototype:(ListenerManagement*) prototype;

+ (ListenerManagement*) parseFromData:(NSData*) data;
+ (ListenerManagement*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ListenerManagement*) parseFromInputStream:(NSInputStream*) input;
+ (ListenerManagement*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ListenerManagement*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ListenerManagement*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ListenerManagement_Builder : PBGeneratedMessage_Builder {
@private
  ListenerManagement* result;
}

- (ListenerManagement*) defaultInstance;

- (ListenerManagement_Builder*) clear;
- (ListenerManagement_Builder*) clone;

- (ListenerManagement*) build;
- (ListenerManagement*) buildPartial;

- (ListenerManagement_Builder*) mergeFrom:(ListenerManagement*) other;
- (ListenerManagement_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ListenerManagement_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasOperation;
- (ListenerManagement_Operation) operation;
- (ListenerManagement_Builder*) setOperation:(ListenerManagement_Operation) value;
- (ListenerManagement_Builder*) clearOperation;

- (BOOL) hasNodeName;
- (NSString*) nodeName;
- (ListenerManagement_Builder*) setNodeName:(NSString*) value;
- (ListenerManagement_Builder*) clearNodeName;
@end

@interface RequestStatus : PBGeneratedMessage {
@private
  BOOL hasStatus_:1;
  RequestStatus_Status* status;
}
- (BOOL) hasStatus;
@property (readonly, retain) RequestStatus_Status* status;

+ (RequestStatus*) defaultInstance;
- (RequestStatus*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RequestStatus_Builder*) builder;
+ (RequestStatus_Builder*) builder;
+ (RequestStatus_Builder*) builderWithPrototype:(RequestStatus*) prototype;

+ (RequestStatus*) parseFromData:(NSData*) data;
+ (RequestStatus*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestStatus*) parseFromInputStream:(NSInputStream*) input;
+ (RequestStatus*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestStatus*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RequestStatus*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RequestStatus_Status : PBGeneratedMessage {
@private
  BOOL hasValue_:1;
  BOOL hasNodeId_:1;
  BOOL hasMsg_:1;
  int32_t value;
  NSString* nodeId;
  NSString* msg;
}
- (BOOL) hasNodeId;
- (BOOL) hasValue;
- (BOOL) hasMsg;
@property (readonly, retain) NSString* nodeId;
@property (readonly) int32_t value;
@property (readonly, retain) NSString* msg;

+ (RequestStatus_Status*) defaultInstance;
- (RequestStatus_Status*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RequestStatus_Status_Builder*) builder;
+ (RequestStatus_Status_Builder*) builder;
+ (RequestStatus_Status_Builder*) builderWithPrototype:(RequestStatus_Status*) prototype;

+ (RequestStatus_Status*) parseFromData:(NSData*) data;
+ (RequestStatus_Status*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestStatus_Status*) parseFromInputStream:(NSInputStream*) input;
+ (RequestStatus_Status*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RequestStatus_Status*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RequestStatus_Status*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RequestStatus_Status_Builder : PBGeneratedMessage_Builder {
@private
  RequestStatus_Status* result;
}

- (RequestStatus_Status*) defaultInstance;

- (RequestStatus_Status_Builder*) clear;
- (RequestStatus_Status_Builder*) clone;

- (RequestStatus_Status*) build;
- (RequestStatus_Status*) buildPartial;

- (RequestStatus_Status_Builder*) mergeFrom:(RequestStatus_Status*) other;
- (RequestStatus_Status_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RequestStatus_Status_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasNodeId;
- (NSString*) nodeId;
- (RequestStatus_Status_Builder*) setNodeId:(NSString*) value;
- (RequestStatus_Status_Builder*) clearNodeId;

- (BOOL) hasValue;
- (int32_t) value;
- (RequestStatus_Status_Builder*) setValue:(int32_t) value;
- (RequestStatus_Status_Builder*) clearValue;

- (BOOL) hasMsg;
- (NSString*) msg;
- (RequestStatus_Status_Builder*) setMsg:(NSString*) value;
- (RequestStatus_Status_Builder*) clearMsg;
@end

@interface RequestStatus_Builder : PBGeneratedMessage_Builder {
@private
  RequestStatus* result;
}

- (RequestStatus*) defaultInstance;

- (RequestStatus_Builder*) clear;
- (RequestStatus_Builder*) clone;

- (RequestStatus*) build;
- (RequestStatus*) buildPartial;

- (RequestStatus_Builder*) mergeFrom:(RequestStatus*) other;
- (RequestStatus_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RequestStatus_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStatus;
- (RequestStatus_Status*) status;
- (RequestStatus_Builder*) setStatus:(RequestStatus_Status*) value;
- (RequestStatus_Builder*) setStatusBuilder:(RequestStatus_Status_Builder*) builderForValue;
- (RequestStatus_Builder*) mergeStatus:(RequestStatus_Status*) value;
- (RequestStatus_Builder*) clearStatus;
@end

@interface Program : PBGeneratedMessage {
@private
  BOOL hasMetaData_:1;
  BOOL hasProgram_:1;
  Program_ProgramMetaData* metaData;
  NSData* program;
}
- (BOOL) hasProgram;
- (BOOL) hasMetaData;
@property (readonly, retain) NSData* program;
@property (readonly, retain) Program_ProgramMetaData* metaData;

+ (Program*) defaultInstance;
- (Program*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Program_Builder*) builder;
+ (Program_Builder*) builder;
+ (Program_Builder*) builderWithPrototype:(Program*) prototype;

+ (Program*) parseFromData:(NSData*) data;
+ (Program*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Program*) parseFromInputStream:(NSInputStream*) input;
+ (Program*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Program*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Program*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Program_ProgramMetaData : PBGeneratedMessage {
@private
  BOOL hasVersion_:1;
  BOOL hasName_:1;
  BOOL hasPlatform_:1;
  BOOL hasOther_:1;
  NSString* version;
  NSString* name;
  NSString* platform;
  NSString* other;
}
- (BOOL) hasVersion;
- (BOOL) hasName;
- (BOOL) hasPlatform;
- (BOOL) hasOther;
@property (readonly, retain) NSString* version;
@property (readonly, retain) NSString* name;
@property (readonly, retain) NSString* platform;
@property (readonly, retain) NSString* other;

+ (Program_ProgramMetaData*) defaultInstance;
- (Program_ProgramMetaData*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Program_ProgramMetaData_Builder*) builder;
+ (Program_ProgramMetaData_Builder*) builder;
+ (Program_ProgramMetaData_Builder*) builderWithPrototype:(Program_ProgramMetaData*) prototype;

+ (Program_ProgramMetaData*) parseFromData:(NSData*) data;
+ (Program_ProgramMetaData*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Program_ProgramMetaData*) parseFromInputStream:(NSInputStream*) input;
+ (Program_ProgramMetaData*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Program_ProgramMetaData*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Program_ProgramMetaData*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Program_ProgramMetaData_Builder : PBGeneratedMessage_Builder {
@private
  Program_ProgramMetaData* result;
}

- (Program_ProgramMetaData*) defaultInstance;

- (Program_ProgramMetaData_Builder*) clear;
- (Program_ProgramMetaData_Builder*) clone;

- (Program_ProgramMetaData*) build;
- (Program_ProgramMetaData*) buildPartial;

- (Program_ProgramMetaData_Builder*) mergeFrom:(Program_ProgramMetaData*) other;
- (Program_ProgramMetaData_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Program_ProgramMetaData_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasVersion;
- (NSString*) version;
- (Program_ProgramMetaData_Builder*) setVersion:(NSString*) value;
- (Program_ProgramMetaData_Builder*) clearVersion;

- (BOOL) hasName;
- (NSString*) name;
- (Program_ProgramMetaData_Builder*) setName:(NSString*) value;
- (Program_ProgramMetaData_Builder*) clearName;

- (BOOL) hasPlatform;
- (NSString*) platform;
- (Program_ProgramMetaData_Builder*) setPlatform:(NSString*) value;
- (Program_ProgramMetaData_Builder*) clearPlatform;

- (BOOL) hasOther;
- (NSString*) other;
- (Program_ProgramMetaData_Builder*) setOther:(NSString*) value;
- (Program_ProgramMetaData_Builder*) clearOther;
@end

@interface Program_Builder : PBGeneratedMessage_Builder {
@private
  Program* result;
}

- (Program*) defaultInstance;

- (Program_Builder*) clear;
- (Program_Builder*) clone;

- (Program*) build;
- (Program*) buildPartial;

- (Program_Builder*) mergeFrom:(Program*) other;
- (Program_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Program_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasProgram;
- (NSData*) program;
- (Program_Builder*) setProgram:(NSData*) value;
- (Program_Builder*) clearProgram;

- (BOOL) hasMetaData;
- (Program_ProgramMetaData*) metaData;
- (Program_Builder*) setMetaData:(Program_ProgramMetaData*) value;
- (Program_Builder*) setMetaDataBuilder:(Program_ProgramMetaData_Builder*) builderForValue;
- (Program_Builder*) mergeMetaData:(Program_ProgramMetaData*) value;
- (Program_Builder*) clearMetaData;
@end

@interface Notification : PBGeneratedMessage {
@private
  BOOL hasMessage_:1;
  NSString* message;
}
- (BOOL) hasMessage;
@property (readonly, retain) NSString* message;

+ (Notification*) defaultInstance;
- (Notification*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Notification_Builder*) builder;
+ (Notification_Builder*) builder;
+ (Notification_Builder*) builderWithPrototype:(Notification*) prototype;

+ (Notification*) parseFromData:(NSData*) data;
+ (Notification*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Notification*) parseFromInputStream:(NSInputStream*) input;
+ (Notification*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Notification*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Notification*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Notification_Builder : PBGeneratedMessage_Builder {
@private
  Notification* result;
}

- (Notification*) defaultInstance;

- (Notification_Builder*) clear;
- (Notification_Builder*) clone;

- (Notification*) build;
- (Notification*) buildPartial;

- (Notification_Builder*) mergeFrom:(Notification*) other;
- (Notification_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Notification_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasMessage;
- (NSString*) message;
- (Notification_Builder*) setMessage:(NSString*) value;
- (Notification_Builder*) clearMessage;
@end

@interface Message : PBGeneratedMessage {
@private
  BOOL hasSourceNodeId_:1;
  BOOL hasTimestamp_:1;
  BOOL hasBinaryData_:1;
  NSString* sourceNodeId;
  NSString* timestamp;
  NSData* binaryData;
}
- (BOOL) hasSourceNodeId;
- (BOOL) hasTimestamp;
- (BOOL) hasBinaryData;
@property (readonly, retain) NSString* sourceNodeId;
@property (readonly, retain) NSString* timestamp;
@property (readonly, retain) NSData* binaryData;

+ (Message*) defaultInstance;
- (Message*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Message_Builder*) builder;
+ (Message_Builder*) builder;
+ (Message_Builder*) builderWithPrototype:(Message*) prototype;

+ (Message*) parseFromData:(NSData*) data;
+ (Message*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Message*) parseFromInputStream:(NSInputStream*) input;
+ (Message*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Message*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Message*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Message_Builder : PBGeneratedMessage_Builder {
@private
  Message* result;
}

- (Message*) defaultInstance;

- (Message_Builder*) clear;
- (Message_Builder*) clone;

- (Message*) build;
- (Message*) buildPartial;

- (Message_Builder*) mergeFrom:(Message*) other;
- (Message_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Message_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSourceNodeId;
- (NSString*) sourceNodeId;
- (Message_Builder*) setSourceNodeId:(NSString*) value;
- (Message_Builder*) clearSourceNodeId;

- (BOOL) hasTimestamp;
- (NSString*) timestamp;
- (Message_Builder*) setTimestamp:(NSString*) value;
- (Message_Builder*) clearTimestamp;

- (BOOL) hasBinaryData;
- (NSData*) binaryData;
- (Message_Builder*) setBinaryData:(NSData*) value;
- (Message_Builder*) clearBinaryData;
@end

@interface SetVirtualLinkRequest : PBGeneratedMessage {
@private
  BOOL hasSourceNode_:1;
  BOOL hasTargetNode_:1;
  NSString* sourceNode;
  NSString* targetNode;
}
- (BOOL) hasSourceNode;
- (BOOL) hasTargetNode;
@property (readonly, retain) NSString* sourceNode;
@property (readonly, retain) NSString* targetNode;

+ (SetVirtualLinkRequest*) defaultInstance;
- (SetVirtualLinkRequest*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SetVirtualLinkRequest_Builder*) builder;
+ (SetVirtualLinkRequest_Builder*) builder;
+ (SetVirtualLinkRequest_Builder*) builderWithPrototype:(SetVirtualLinkRequest*) prototype;

+ (SetVirtualLinkRequest*) parseFromData:(NSData*) data;
+ (SetVirtualLinkRequest*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SetVirtualLinkRequest*) parseFromInputStream:(NSInputStream*) input;
+ (SetVirtualLinkRequest*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SetVirtualLinkRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SetVirtualLinkRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SetVirtualLinkRequest_Builder : PBGeneratedMessage_Builder {
@private
  SetVirtualLinkRequest* result;
}

- (SetVirtualLinkRequest*) defaultInstance;

- (SetVirtualLinkRequest_Builder*) clear;
- (SetVirtualLinkRequest_Builder*) clone;

- (SetVirtualLinkRequest*) build;
- (SetVirtualLinkRequest*) buildPartial;

- (SetVirtualLinkRequest_Builder*) mergeFrom:(SetVirtualLinkRequest*) other;
- (SetVirtualLinkRequest_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SetVirtualLinkRequest_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSourceNode;
- (NSString*) sourceNode;
- (SetVirtualLinkRequest_Builder*) setSourceNode:(NSString*) value;
- (SetVirtualLinkRequest_Builder*) clearSourceNode;

- (BOOL) hasTargetNode;
- (NSString*) targetNode;
- (SetVirtualLinkRequest_Builder*) setTargetNode:(NSString*) value;
- (SetVirtualLinkRequest_Builder*) clearTargetNode;
@end

@interface DestroyVirtualLinkRequest : PBGeneratedMessage {
@private
  BOOL hasSourceNode_:1;
  BOOL hasTargetNode_:1;
  NSString* sourceNode;
  NSString* targetNode;
}
- (BOOL) hasSourceNode;
- (BOOL) hasTargetNode;
@property (readonly, retain) NSString* sourceNode;
@property (readonly, retain) NSString* targetNode;

+ (DestroyVirtualLinkRequest*) defaultInstance;
- (DestroyVirtualLinkRequest*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (DestroyVirtualLinkRequest_Builder*) builder;
+ (DestroyVirtualLinkRequest_Builder*) builder;
+ (DestroyVirtualLinkRequest_Builder*) builderWithPrototype:(DestroyVirtualLinkRequest*) prototype;

+ (DestroyVirtualLinkRequest*) parseFromData:(NSData*) data;
+ (DestroyVirtualLinkRequest*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DestroyVirtualLinkRequest*) parseFromInputStream:(NSInputStream*) input;
+ (DestroyVirtualLinkRequest*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DestroyVirtualLinkRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (DestroyVirtualLinkRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface DestroyVirtualLinkRequest_Builder : PBGeneratedMessage_Builder {
@private
  DestroyVirtualLinkRequest* result;
}

- (DestroyVirtualLinkRequest*) defaultInstance;

- (DestroyVirtualLinkRequest_Builder*) clear;
- (DestroyVirtualLinkRequest_Builder*) clone;

- (DestroyVirtualLinkRequest*) build;
- (DestroyVirtualLinkRequest*) buildPartial;

- (DestroyVirtualLinkRequest_Builder*) mergeFrom:(DestroyVirtualLinkRequest*) other;
- (DestroyVirtualLinkRequest_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (DestroyVirtualLinkRequest_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSourceNode;
- (NSString*) sourceNode;
- (DestroyVirtualLinkRequest_Builder*) setSourceNode:(NSString*) value;
- (DestroyVirtualLinkRequest_Builder*) clearSourceNode;

- (BOOL) hasTargetNode;
- (NSString*) targetNode;
- (DestroyVirtualLinkRequest_Builder*) setTargetNode:(NSString*) value;
- (DestroyVirtualLinkRequest_Builder*) clearTargetNode;
@end

@interface DisablePhysicalLink : PBGeneratedMessage {
@private
  BOOL hasNodeB_:1;
  NSString* nodeB;
}
- (BOOL) hasNodeB;
@property (readonly, retain) NSString* nodeB;

+ (DisablePhysicalLink*) defaultInstance;
- (DisablePhysicalLink*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (DisablePhysicalLink_Builder*) builder;
+ (DisablePhysicalLink_Builder*) builder;
+ (DisablePhysicalLink_Builder*) builderWithPrototype:(DisablePhysicalLink*) prototype;

+ (DisablePhysicalLink*) parseFromData:(NSData*) data;
+ (DisablePhysicalLink*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DisablePhysicalLink*) parseFromInputStream:(NSInputStream*) input;
+ (DisablePhysicalLink*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DisablePhysicalLink*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (DisablePhysicalLink*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface DisablePhysicalLink_Builder : PBGeneratedMessage_Builder {
@private
  DisablePhysicalLink* result;
}

- (DisablePhysicalLink*) defaultInstance;

- (DisablePhysicalLink_Builder*) clear;
- (DisablePhysicalLink_Builder*) clone;

- (DisablePhysicalLink*) build;
- (DisablePhysicalLink*) buildPartial;

- (DisablePhysicalLink_Builder*) mergeFrom:(DisablePhysicalLink*) other;
- (DisablePhysicalLink_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (DisablePhysicalLink_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasNodeB;
- (NSString*) nodeB;
- (DisablePhysicalLink_Builder*) setNodeB:(NSString*) value;
- (DisablePhysicalLink_Builder*) clearNodeB;
@end

@interface EnablePhysicalLink : PBGeneratedMessage {
@private
  BOOL hasNodeB_:1;
  NSString* nodeB;
}
- (BOOL) hasNodeB;
@property (readonly, retain) NSString* nodeB;

+ (EnablePhysicalLink*) defaultInstance;
- (EnablePhysicalLink*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (EnablePhysicalLink_Builder*) builder;
+ (EnablePhysicalLink_Builder*) builder;
+ (EnablePhysicalLink_Builder*) builderWithPrototype:(EnablePhysicalLink*) prototype;

+ (EnablePhysicalLink*) parseFromData:(NSData*) data;
+ (EnablePhysicalLink*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (EnablePhysicalLink*) parseFromInputStream:(NSInputStream*) input;
+ (EnablePhysicalLink*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (EnablePhysicalLink*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (EnablePhysicalLink*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface EnablePhysicalLink_Builder : PBGeneratedMessage_Builder {
@private
  EnablePhysicalLink* result;
}

- (EnablePhysicalLink*) defaultInstance;

- (EnablePhysicalLink_Builder*) clear;
- (EnablePhysicalLink_Builder*) clone;

- (EnablePhysicalLink*) build;
- (EnablePhysicalLink*) buildPartial;

- (EnablePhysicalLink_Builder*) mergeFrom:(EnablePhysicalLink*) other;
- (EnablePhysicalLink_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (EnablePhysicalLink_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasNodeB;
- (NSString*) nodeB;
- (EnablePhysicalLink_Builder*) setNodeB:(NSString*) value;
- (EnablePhysicalLink_Builder*) clearNodeB;
@end

@interface OperationInvocation : PBGeneratedMessage {
@private
  BOOL hasArguments_:1;
  BOOL hasOperation_:1;
  NSData* arguments;
  OperationInvocation_Operation operation;
}
- (BOOL) hasOperation;
- (BOOL) hasArguments;
@property (readonly) OperationInvocation_Operation operation;
@property (readonly, retain) NSData* arguments;

+ (OperationInvocation*) defaultInstance;
- (OperationInvocation*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OperationInvocation_Builder*) builder;
+ (OperationInvocation_Builder*) builder;
+ (OperationInvocation_Builder*) builderWithPrototype:(OperationInvocation*) prototype;

+ (OperationInvocation*) parseFromData:(NSData*) data;
+ (OperationInvocation*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OperationInvocation*) parseFromInputStream:(NSInputStream*) input;
+ (OperationInvocation*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OperationInvocation*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OperationInvocation*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OperationInvocation_Builder : PBGeneratedMessage_Builder {
@private
  OperationInvocation* result;
}

- (OperationInvocation*) defaultInstance;

- (OperationInvocation_Builder*) clear;
- (OperationInvocation_Builder*) clone;

- (OperationInvocation*) build;
- (OperationInvocation*) buildPartial;

- (OperationInvocation_Builder*) mergeFrom:(OperationInvocation*) other;
- (OperationInvocation_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OperationInvocation_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasOperation;
- (OperationInvocation_Operation) operation;
- (OperationInvocation_Builder*) setOperation:(OperationInvocation_Operation) value;
- (OperationInvocation_Builder*) clearOperation;

- (BOOL) hasArguments;
- (NSData*) arguments;
- (OperationInvocation_Builder*) setArguments:(NSData*) value;
- (OperationInvocation_Builder*) clearArguments;
@end

