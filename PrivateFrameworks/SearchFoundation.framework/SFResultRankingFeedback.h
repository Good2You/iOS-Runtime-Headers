/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultRankingFeedback : SFFeedback <NSCopying, SFProtobufObject> {
    NSArray * _duplicateResults;
    NSArray * _hiddenResults;
    unsigned int  _localResultPosition;
    double  _personalizationScore;
    SFSearchResult * _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *duplicateResults;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *hiddenResults;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, readonly) PBCodable *protobufMessage;
@property (nonatomic, retain) SFSearchResult *result;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)duplicateResults;
- (void)encodeWithCoder:(id)arg1;
- (id)hiddenResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 hiddenResults:(id)arg2 duplicateResults:(id)arg3 localResultPosition:(unsigned int)arg4;
- (unsigned int)localResultPosition;
- (double)personalizationScore;
- (id)result;
- (void)setDuplicateResults:(id)arg1;
- (void)setHiddenResults:(id)arg1;
- (void)setLocalResultPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResult:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (Class)protobufClass;

- (id)protobufMessage;

@end
