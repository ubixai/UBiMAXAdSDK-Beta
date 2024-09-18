//
//  UMTGlobalDefine.h
//  UMTAdSDK
//
//  Created by guoqiang on 2024/7/11.
//

#ifndef UMTGlobalDefine_h
#define UMTGlobalDefine_h

/// 【可选】NSNumber，是否在adn中使用位置，如果是，adn将自己获得纬度和经度，而不是使用传入的值（  kUMTPrivacyLongitude/  kUMTPrivacyLatitude）。
const static NSString *kUMTPrivacyCanLocation = @"kUMTPrivacyCanLocation";
/// 【可选】NSNumber，经度的值。默认值是0.0。
const static NSString *  kUMTPrivacyLongitude = @"kUMTPrivacyLongitude";
/// 【可选】NSNumber，纬度的值。默认值是0.0。
const static NSString *  kUMTPrivacyLatitude = @"kUMTPrivacyLatitude";
/// 【可选】NSNumber，是否限制个性化广告:0-不限制，1-限制，默认为0。
const static NSString *kUMTPrivacyLimitPersonalAds = @"kUMTPrivacyLimitPersonalAds";
/// 【可选】NSNumber，是否禁止CAID：0-不禁止，1-禁止，默认为0。
const static NSString *  kUMTPrivacyForbiddenCAID = @"kUMTPrivacyForbiddenCAID";
/// 【可选】NSNumber，是否禁止IDFA：0-不禁止，1-禁止，默认为0。
const static NSString *  kUMTPrivacyForbiddenIDFA = @"kUMTPrivacyForbiddenIDFA";
/// 【可选】NSString，自定义 idfa
const static NSString * kUMTPrivacyCustomIDFA = @"kUMTPrivacyCustomIDFA";

const static NSString *kUMTRootViewController = @"kUMTRootViewController";
const static NSString *kUMTSplashBottomView = @"kUMTSplashBottomView";

// 渲染方式， NSNumber, 1: 模版，2: 自渲染
const static NSString *kUMTAdRenderType = @"kUMTAdRenderType";
const static NSString *kUMTNativeSizeWidth = @"kUMTNativeSizeWidth";
const static NSString *kUMTNativeSizeHeight = @"kUMTNativeSizeHeight";
/// 低价过滤，NSString，仅支持整数值, 单位：分
const static NSString *kUMTAdBidFloor = @"kUMTAdBidFloor";
/** NSNumber 竞价类型 1:in-app-bidding 2:waterfall */
const static NSString *kUMTBidType = @"kUMTBidType";
/** 枚举 UMTVideoMuteType */
const static NSString *kUMTVideoMute = @"kUMTVideoMute";
/** 枚举 UMTVideoPlayType */
const static NSString *kUMTVideoPlayNet = @"kUMTVideoPlayNet";

// 广告类型
typedef NS_ENUM(NSInteger, UMTAdType) {
    UMTAdTypeUnknow = 0, // default
    UMTAdTypeSplash = 1,
    UMTAdTypeFeed = 2,
    UMTAdTypeRewardedVideo = 3,
    UMTAdTypeBanner = 4,
    UMTAdTypeInterstitial = 5,
    UMTAdTypeFullVideo = 6,
    UMTAdTypePaster = 7,
};

typedef NS_ENUM(NSInteger, UMTAdRenderType) {
    UMTAdRenderType_UnKnown = 0, // 未知
    UMTAdRenderType_Temple = 1, // 模版
    UMTAdRenderType_Custom = 2, // 自渲染
};

typedef NS_ENUM(NSInteger, UMTAdBidType) {
    UMTAdBidType_UnKnown = 0,       // 未知
    UMTAdBidType_ClientBidding = 1, // in-app-bidding
    UMTAdBidType_Waterfall = 2,     // 瀑布流
};

typedef NS_ENUM(NSInteger, UMTVideoMuteType) {
    UMTVideoMuteType_Unknown = 0,    // 未知
    UMTVideoMuteType_AdxDefault = 1, // 广告源默认
    UMTVideoMuteType_Mute = 2,       // 静音
    UMTVideoMuteType_NoMute = 3,     // 不静音
};

typedef NS_ENUM(NSInteger, UMTVideoPlayNetType) {
    UMTVideoPlayNetType_Unknown = 0,        // 未知
    UMTVideoPlayNetType_AdxDefault = 1,     // 广告源默认
    UMTVideoPlayNetType_WifiAndMobile = 2,  // wifi+移动
    UMTVideoPlayNetType_OnlyWifi = 3,       // 仅wifi
    UMTVideoPlayNetType_Never = 4,          // 不播放
};

typedef NS_ENUM(NSInteger, UMTAdnMaterialType) {
    UMTAdnMaterialType_UnKnown = 0,      // 未知
    UMTAdnMaterialType_Image = 1,        // 图片
    UMTAdnMaterialType_Video = 2,        // 视频
};

typedef NS_ENUM(NSInteger, UMTVideoPlayerStatus) {
    UMTVideoPlayerStatusFailed = -1, // 加载失败
    UMTVideoPlayerStatusInitialize,  // 初始
    UMTVideoPlayerStatusPrepared,    // 准备好，可以播放了
    UMTVideoPlayerStatusStarted,
    UMTVideoPlayerStatusPlaying,     // 播放中
    UMTVideoPlayerStatusBuffering,   // 加载中
    UMTVideoPlayerStatusPaused,      // 暂停
    UMTVideoPlayerStatusInterrupted, // 中断
    UMTVideoPlayerStatusStopped,     // 停止
    UMTVideoPlayerStatusFinished,    // 完成/结束
    UMTVideoPlayerStatusError = -2,  // 播放错误
};


#endif /* UMTGlobalDefine_h */
