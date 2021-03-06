/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout> {
    NSString * _backdropGroupName;
    NSArray * _indexPathsForGradientItems;
    NSMutableArray * _orderedSublayouts;
    BOOL  _rendersWithParallax;
    BOOL  _rendersWithPerspective;
    NSMapTable * _sublayoutToSectionsToIndexRanges;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *indexPathsForGradientItems;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (nonatomic) BOOL rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLayout:(id)arg1 offset:(struct CGPoint { float x1; float x2; })arg2 relativeToEdges:(unsigned int)arg3 fromSiblingLayout:(id)arg4;
- (id)_newStorePageCollectionViewLayout;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(int)arg3 offset:(struct CGPoint { float x1; float x2; })arg4 relativeToEdges:(unsigned int)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint { float x1; float x2; })arg3 relativeToEdges:(unsigned int)arg4 fromSiblingLayout:(id)arg5;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;
- (id)backdropGroupName;
- (id)indexPathsForGradientItems;
- (id)indexPathsForPinningItems;
- (id)init;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeSublayout:(id)arg1;
- (BOOL)rendersWithParallax;
- (BOOL)rendersWithPerspective;
- (void)setBackdropGroupName:(id)arg1;
- (void)setIndexPathsForGradientItems:(id)arg1;
- (void)setRendersWithParallax:(BOOL)arg1;
- (void)setRendersWithPerspective:(BOOL)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)sublayouts;

@end
