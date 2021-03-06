/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSMutableDictionary;

@interface SBSDaemon : SBUnknownSuperclass {
	dispatch_source_s *_dispatchSource;	// 4 = 0x4
	NSMutableDictionary *_daemonRequests;	// 8 = 0x8
	int _pid;	// 12 = 0xc
}
@property(readonly, assign) int pid;	// G=0x16cfad; converted property
- (id)initWithPid:(int)pid queue:(dispatch_queue_s *)queue;	// 0x16d541
- (void)dealloc;	// 0x16d515
// converted property getter: - (int)pid;	// 0x16cfad
- (dispatch_source_s *)_newDispatchSourceForPid:(int)pid queue:(dispatch_queue_s *)queue;	// 0x16d449
- (void)_handleCancelation;	// 0x16d315
- (void)addRequest:(id)request forKey:(id)key;	// 0x16d2a5
- (void)removeRequestForKey:(id)key;	// 0x16d1f1
- (id)description;	// 0x16d0d9
@end
