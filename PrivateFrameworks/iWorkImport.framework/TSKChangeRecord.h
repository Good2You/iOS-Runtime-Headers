/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKChangeRecord : NSObject {
    id mDetails;
    int mKind;
}

@property(readonly) BOOL allowedInCommit;
@property(readonly) id details;
@property(readonly) int kind;

+ (id)changeRecordWithKind:(int)arg1 details:(id)arg2;

- (BOOL)allowedInCommit;
- (void)dealloc;
- (id)details;
- (id)initWithKind:(int)arg1 details:(id)arg2;
- (int)kind;

@end