//
//  RJVedioDealer.h
//  APP2
//
//  Created by RongJun on 17/1/25.
//  Copyright © 2017年 RJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface RJVedioDealer : NSObject
- (void)enableAudioTracks:(BOOL)enable inPlayerItem:(AVPlayerItem*)playerItem;
- (void)mergeAndExportVideos:(NSArray*)videosPathArray withOutPath:(NSString*)outpath callBack:(void(^)())callBack;
@end
