//
//  RenderAssetReader.h
//  MetalRenderMOV
//
//  Created by 徐鹏飞 on 2020/8/29.
//  Copyright © 2020 徐鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


@interface RenderAssetReader : NSObject

//初始化
- (instancetype)initWithUrl:(NSURL *)url;

//从MOV文件读取CMSampleBufferRef 数据
- (CMSampleBufferRef)readBuffer;

@end
