// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class TestMessage;
@class TestMessageBuilder;
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

typedef NS_ENUM(SInt32, TestEnum) {
  TestEnumFoo = 1,
};

BOOL TestEnumIsValidValue(TestEnum value);


@interface UnittestNoGenericServicesRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
+ (id<PBExtensionField>) testExtension;
@end

@interface TestMessage : PBExtendableMessage {
@private
  BOOL hasA_:1;
  SInt32 a;
}
- (BOOL) hasA;
@property (readonly) SInt32 a;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TestMessageBuilder*) builder;
+ (TestMessageBuilder*) builder;
+ (TestMessageBuilder*) builderWithPrototype:(TestMessage*) prototype;
- (TestMessageBuilder*) toBuilder;

+ (TestMessage*) parseFromData:(NSData*) data;
+ (TestMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessage*) parseFromInputStream:(NSInputStream*) input;
+ (TestMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TestMessageBuilder : PBExtendableMessageBuilder {
@private
  TestMessage* resultTestMessage;
}

- (TestMessage*) defaultInstance;

- (TestMessageBuilder*) clear;
- (TestMessageBuilder*) clone;

- (TestMessage*) build;
- (TestMessage*) buildPartial;

- (TestMessageBuilder*) mergeFrom:(TestMessage*) other;
- (TestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasA;
- (SInt32) a;
- (TestMessageBuilder*) setA:(SInt32) value;
- (TestMessageBuilder*) clearA;
@end


// @@protoc_insertion_point(global_scope)
