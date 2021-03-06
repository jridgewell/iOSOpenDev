/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIcon.h"
#import "SpringBoard-Structs.h"

@class SBFolder;

@interface SBFolderIcon : SBIcon {
	SBFolder *_folder;	// 68 = 0x44
	float _progress;	// 72 = 0x48
}
@property(readonly, assign) float progress;	// G=0xfbb41; 
@property(readonly, retain) SBFolder *folder;	// G=0xfbb31; converted property
- (id)initWithFolder:(id)folder;	// 0xfbb61
- (void)dealloc;	// 0xfd251
- (id)generateIconImage:(int)image;	// 0xfd219
- (id)getGenericIconImage:(int)image;	// 0xfbb2d
- (id)croppedImageForIcon:(id)icon;	// 0xfd191
- (id)iconOverlayImageForLocation:(int)location;	// 0xfd0d5
- (id)displayName;	// 0xfd0b5
- (id)representation;	// 0xfd095
- (BOOL)matchesRepresentation:(id)representation;	// 0xfd06d
// converted property getter: - (id)folder;	// 0xfbb31
- (id)description;	// 0xfcfed
- (void)launch;	// 0xfcf79
- (void)updateLabel;	// 0xfcf69
- (void)_updateBadgeValue;	// 0xfcc59
- (void)_updateProgressBar;	// 0xfc8e1
// declared property getter: - (float)progress;	// 0xfbb41
- (void)noteContainedIconsAdded:(id)added removed:(id)removed;	// 0xfc7d9
- (void)noteContainedIcon:(id)icon replacedIcon:(id)icon2;	// 0xfc7c9
- (void)noteContainedIconBadgeChanged:(id)changed;	// 0xfc7b9
- (id)updateGridImageIcon:(id)icon inGrid:(id)grid withImage:(id)image skipping:(BOOL)skipping;	// 0xfc5fd
- (void)noteContainedIconImageChanged:(id)changed;	// 0xfc441
- (void)noteContainedIconDownloadingStateChanged:(id)changed;	// 0xfc431
- (CGSize)_sizeOfMiniIconGridWithRows:(unsigned)rows;	// 0xfc365
- (CGRect)_rectForMiniIconImage:(id)miniIconImage atIndex:(unsigned)index;	// 0xfc171
- (CGRect)_rectForMiniIconAtIndex:(unsigned)index;	// 0xfc151
- (id)_miniIconGridWithSkipping:(BOOL)skipping;	// 0xfbec5
- (unsigned)_maxIcons;	// 0xfbe89
- (float)_miniIconSize;	// 0xfbe41
- (float)_miniIconGap;	// 0xfbdf9
- (unsigned)_gridRows;	// 0xfbb51
- (unsigned)_gridColumns;	// 0xfbb55
- (unsigned)_firstSkippedIconIndex;	// 0xfbb59
- (unsigned)_numberOfExcessIcons;	// 0xfbdcd
- (unsigned)_skippingIconThreshold;	// 0xfbd9d
- (id)miniImageForIcon:(id)icon;	// 0xfbca1
- (BOOL)shouldSkipIcons;	// 0xfbc39
- (id)gridImageWithSkipping:(BOOL)skipping;	// 0xfbbf1
@end

