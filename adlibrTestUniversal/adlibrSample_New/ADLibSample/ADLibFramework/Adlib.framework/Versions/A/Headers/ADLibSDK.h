
//
//  ADLibSDK.h
//  ADLibSDK
//
//  Created by mocoplex on 2014. 12. 30..
//  Copyright (c) 2014년 mocoplex. All rights reserved.
//
//  Adlib SDK version 4.3.4.2
//  Build (4.342) 2017.05.27. 11:00


///////////////////////////////////////////////////////////////////////////
// 애드립 광고 띠/전면 광고 - 미디에이션 클래스                                     //
///////////////////////////////////////////////////////////////////////////

//신규버전 배너
#import <Adlib/ADLibBanner.h>

//구버전 배너 (지원 중단)
#import <Adlib/ADLibAdm.h>


///////////////////////////////////////////////////////////////////////////
// 애드립 네이티브 광고                                                       //
///////////////////////////////////////////////////////////////////////////

#import <Adlib/ADLibNative.h>


///////////////////////////////////////////////////////////////////////////
// 애드립 3D 광고 - 갭핑 상품                                                 //
///////////////////////////////////////////////////////////////////////////

#import <Adlib/ADLibGapping.h>

#import <Foundation/Foundation.h>

@interface ADLibSDK : NSObject

+ (NSString *)sdkVersion;

@end
