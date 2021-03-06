/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding> {
    NSString * _key;
    NSDate * _lastAccess;
    IMDoubleLinkedListNode * _node;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _textAlignmentInsets;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSDate *lastAccess;
@property (nonatomic, retain) IMDoubleLinkedListNode *node;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAlignmentInsets;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)lastAccess;
- (id)node;
- (void)setKey:(id)arg1;
- (void)setLastAccess:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;

@end
