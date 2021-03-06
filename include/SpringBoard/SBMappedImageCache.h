/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSMutableDictionary, NSString;

@interface SBMappedImageCache : SBUnknownSuperclass {
	dispatch_queue_s *_queue;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSMutableDictionary *_images;	// 12 = 0xc
}
+ (id)persistentCache;	// 0x1a895d
+ (id)sessionCache;	// 0x1a8931
+ (id)imageNamed:(id)named;	// 0x1a8719
- (id)initWithPath:(id)path;	// 0x1a87b5
- (void)dealloc;	// 0x1a8c21
- (id)imageForKey:(id)key generateImageWithBlockIfNecessary:(id)blockIfNecessary;	// 0x1a84a9
- (void)setImage:(id)image forKey:(id)key;	// 0x1a8af9
- (id)imageForKey:(id)key;	// 0x1a8a3d
- (void)removeImageForKey:(id)key;	// 0x1a89e1
- (void)removeAllObjects;	// 0x1a8989
@end
