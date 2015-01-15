// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class RawMessageSet;
@class RawMessageSetBuilder;
@class RawMessageSetItem;
@class RawMessageSetItemBuilder;
@class TestMessageSet;
@class TestMessageSetBuilder;
@class TestMessageSetContainer;
@class TestMessageSetContainerBuilder;
@class TestMessageSetExtension1;
@class TestMessageSetExtension1Builder;
@class TestMessageSetExtension2;
@class TestMessageSetExtension2Builder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface UnittestMsetRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface TestMessageSet : PBExtendableMessage {
@private
}

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestMessageSetBuilder*) builder;
+ (TestMessageSetBuilder*) builder;
+ (TestMessageSetBuilder*) builderWithPrototype:(TestMessageSet*) prototype;
- (TestMessageSetBuilder*) toBuilder;

+ (TestMessageSet*) parseFromData:(NSData*) data;
+ (TestMessageSet*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSet*) parseFromInputStream:(NSInputStream*) input;
+ (TestMessageSet*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSet*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestMessageSet*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestMessageSetBuilder : PBExtendableMessageBuilder {
@private
  TestMessageSet* resultTestMessageSet;
}

- (TestMessageSet*) defaultInstance;

- (TestMessageSetBuilder*) clear;
- (TestMessageSetBuilder*) clone;

- (TestMessageSet*) build;
- (TestMessageSet*) buildPartial;

- (TestMessageSetBuilder*) mergeFrom:(TestMessageSet*) other;
- (TestMessageSetBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestMessageSetBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestMessageSetContainer : PBGeneratedMessage {
@private
  BOOL hasMessageSet_:1;
  TestMessageSet* messageSet;
}
- (BOOL) hasMessageSet;
@property (readonly, strong) TestMessageSet* messageSet;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestMessageSetContainerBuilder*) builder;
+ (TestMessageSetContainerBuilder*) builder;
+ (TestMessageSetContainerBuilder*) builderWithPrototype:(TestMessageSetContainer*) prototype;
- (TestMessageSetContainerBuilder*) toBuilder;

+ (TestMessageSetContainer*) parseFromData:(NSData*) data;
+ (TestMessageSetContainer*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSetContainer*) parseFromInputStream:(NSInputStream*) input;
+ (TestMessageSetContainer*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSetContainer*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestMessageSetContainer*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestMessageSetContainerBuilder : PBGeneratedMessageBuilder {
@private
  TestMessageSetContainer* resultTestMessageSetContainer;
}

- (TestMessageSetContainer*) defaultInstance;

- (TestMessageSetContainerBuilder*) clear;
- (TestMessageSetContainerBuilder*) clone;

- (TestMessageSetContainer*) build;
- (TestMessageSetContainer*) buildPartial;

- (TestMessageSetContainerBuilder*) mergeFrom:(TestMessageSetContainer*) other;
- (TestMessageSetContainerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestMessageSetContainerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasMessageSet;
- (TestMessageSet*) messageSet;
- (TestMessageSetContainerBuilder*) setMessageSet:(TestMessageSet*) value;
- (TestMessageSetContainerBuilder*) setMessageSetBuilder:(TestMessageSetBuilder*) builderForValue;
- (TestMessageSetContainerBuilder*) mergeMessageSet:(TestMessageSet*) value;
- (TestMessageSetContainerBuilder*) clearMessageSet;
@end

@interface TestMessageSetExtension1 : PBGeneratedMessage {
@private
  BOOL hasI_:1;
  SInt32 i;
}
- (BOOL) hasI;
@property (readonly) SInt32 i;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) messageSetExtension;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestMessageSetExtension1Builder*) builder;
+ (TestMessageSetExtension1Builder*) builder;
+ (TestMessageSetExtension1Builder*) builderWithPrototype:(TestMessageSetExtension1*) prototype;
- (TestMessageSetExtension1Builder*) toBuilder;

+ (TestMessageSetExtension1*) parseFromData:(NSData*) data;
+ (TestMessageSetExtension1*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSetExtension1*) parseFromInputStream:(NSInputStream*) input;
+ (TestMessageSetExtension1*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSetExtension1*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestMessageSetExtension1*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestMessageSetExtension1Builder : PBGeneratedMessageBuilder {
@private
  TestMessageSetExtension1* resultTestMessageSetExtension1;
}

- (TestMessageSetExtension1*) defaultInstance;

- (TestMessageSetExtension1Builder*) clear;
- (TestMessageSetExtension1Builder*) clone;

- (TestMessageSetExtension1*) build;
- (TestMessageSetExtension1*) buildPartial;

- (TestMessageSetExtension1Builder*) mergeFrom:(TestMessageSetExtension1*) other;
- (TestMessageSetExtension1Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestMessageSetExtension1Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasI;
- (SInt32) i;
- (TestMessageSetExtension1Builder*) setI:(SInt32) value;
- (TestMessageSetExtension1Builder*) clearI;
@end

@interface TestMessageSetExtension2 : PBGeneratedMessage {
@private
  BOOL hasStr_:1;
  NSString* str;
}
- (BOOL) hasStr;
@property (readonly, strong) NSString* str;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) messageSetExtension;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestMessageSetExtension2Builder*) builder;
+ (TestMessageSetExtension2Builder*) builder;
+ (TestMessageSetExtension2Builder*) builderWithPrototype:(TestMessageSetExtension2*) prototype;
- (TestMessageSetExtension2Builder*) toBuilder;

+ (TestMessageSetExtension2*) parseFromData:(NSData*) data;
+ (TestMessageSetExtension2*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSetExtension2*) parseFromInputStream:(NSInputStream*) input;
+ (TestMessageSetExtension2*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessageSetExtension2*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestMessageSetExtension2*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestMessageSetExtension2Builder : PBGeneratedMessageBuilder {
@private
  TestMessageSetExtension2* resultTestMessageSetExtension2;
}

- (TestMessageSetExtension2*) defaultInstance;

- (TestMessageSetExtension2Builder*) clear;
- (TestMessageSetExtension2Builder*) clone;

- (TestMessageSetExtension2*) build;
- (TestMessageSetExtension2*) buildPartial;

- (TestMessageSetExtension2Builder*) mergeFrom:(TestMessageSetExtension2*) other;
- (TestMessageSetExtension2Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestMessageSetExtension2Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStr;
- (NSString*) str;
- (TestMessageSetExtension2Builder*) setStr:(NSString*) value;
- (TestMessageSetExtension2Builder*) clearStr;
@end

@interface RawMessageSet : PBGeneratedMessage {
@private
  NSMutableArray * itemArray;
}
@property (readonly, strong) NSArray * item;
- (RawMessageSetItem*)itemAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RawMessageSetBuilder*) builder;
+ (RawMessageSetBuilder*) builder;
+ (RawMessageSetBuilder*) builderWithPrototype:(RawMessageSet*) prototype;
- (RawMessageSetBuilder*) toBuilder;

+ (RawMessageSet*) parseFromData:(NSData*) data;
+ (RawMessageSet*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RawMessageSet*) parseFromInputStream:(NSInputStream*) input;
+ (RawMessageSet*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RawMessageSet*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RawMessageSet*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RawMessageSetItem : PBGeneratedMessage {
@private
  BOOL hasTypeId_:1;
  BOOL hasMessage_:1;
  SInt32 typeId;
  NSData* message;
}
- (BOOL) hasTypeId;
- (BOOL) hasMessage;
@property (readonly) SInt32 typeId;
@property (readonly, strong) NSData* message;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RawMessageSetItemBuilder*) builder;
+ (RawMessageSetItemBuilder*) builder;
+ (RawMessageSetItemBuilder*) builderWithPrototype:(RawMessageSetItem*) prototype;
- (RawMessageSetItemBuilder*) toBuilder;

+ (RawMessageSetItem*) parseFromData:(NSData*) data;
+ (RawMessageSetItem*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RawMessageSetItem*) parseFromInputStream:(NSInputStream*) input;
+ (RawMessageSetItem*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RawMessageSetItem*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RawMessageSetItem*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RawMessageSetItemBuilder : PBGeneratedMessageBuilder {
@private
  RawMessageSetItem* resultItem;
}

- (RawMessageSetItem*) defaultInstance;

- (RawMessageSetItemBuilder*) clear;
- (RawMessageSetItemBuilder*) clone;

- (RawMessageSetItem*) build;
- (RawMessageSetItem*) buildPartial;

- (RawMessageSetItemBuilder*) mergeFrom:(RawMessageSetItem*) other;
- (RawMessageSetItemBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RawMessageSetItemBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasTypeId;
- (SInt32) typeId;
- (RawMessageSetItemBuilder*) setTypeId:(SInt32) value;
- (RawMessageSetItemBuilder*) clearTypeId;

- (BOOL) hasMessage;
- (NSData*) message;
- (RawMessageSetItemBuilder*) setMessage:(NSData*) value;
- (RawMessageSetItemBuilder*) clearMessage;
@end

@interface RawMessageSetBuilder : PBGeneratedMessageBuilder {
@private
  RawMessageSet* resultRawMessageSet;
}

- (RawMessageSet*) defaultInstance;

- (RawMessageSetBuilder*) clear;
- (RawMessageSetBuilder*) clone;

- (RawMessageSet*) build;
- (RawMessageSet*) buildPartial;

- (RawMessageSetBuilder*) mergeFrom:(RawMessageSet*) other;
- (RawMessageSetBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RawMessageSetBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray *)item;
- (RawMessageSetItem*)itemAtIndex:(NSUInteger)index;
- (RawMessageSetBuilder *)addItem:(RawMessageSetItem*)value;
- (RawMessageSetBuilder *)setItemArray:(NSArray *)array;
- (RawMessageSetBuilder *)clearItem;
@end


// @@protoc_insertion_point(global_scope)
