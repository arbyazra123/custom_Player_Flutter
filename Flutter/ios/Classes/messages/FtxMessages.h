// Copyright (c) 2022 Tencent. All rights reserved.
// Autogenerated from Pigeon (v9.2.5), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class PlayerMsg;
@class LicenseMsg;
@class TXPlayInfoParamsPlayerMsg;
@class TXPlayerDrmMsg;
@class PipParamsPlayerMsg;
@class StringListPlayerMsg;
@class BoolPlayerMsg;
@class StringIntPlayerMsg;
@class StringPlayerMsg;
@class DoublePlayerMsg;
@class IntPlayerMsg;
@class FTXVodPlayConfigPlayerMsg;
@class FTXLivePlayConfigPlayerMsg;
@class TXVodDownloadMediaMsg;
@class TXDownloadListMsg;
@class UInt8ListMsg;
@class ListMsg;
@class BoolMsg;
@class IntMsg;
@class StringMsg;
@class CachePathMsg;
@class DoubleMsg;
@class PreLoadMsg;
@class PreLoadInfoMsg;
@class MapMsg;
@class SubTitlePlayerMsg;
@class SubTitleRenderModelPlayerMsg;
@class StringOptionPlayerMsg;

/// Pigeon original component, used to generate native communication code for `messages`.
/// The generation command is as follows. When using the generation command,
/// the two import statements above need to be implemented or commented out.
///
/// pigeon原始原件，由此文件生成messages原生通信代码
/// 生成命令如下，使用生成命令的时候，需要实现注释掉以上两个import导入
@interface PlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@end

@interface LicenseMsg : NSObject
+ (instancetype)makeWithLicenseUrl:(nullable NSString *)licenseUrl
    licenseKey:(nullable NSString *)licenseKey;
@property(nonatomic, copy, nullable) NSString * licenseUrl;
@property(nonatomic, copy, nullable) NSString * licenseKey;
@end

@interface TXPlayInfoParamsPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    appId:(nullable NSNumber *)appId
    fileId:(nullable NSString *)fileId
    psign:(nullable NSString *)psign
    url:(nullable NSString *)url;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, strong, nullable) NSNumber * appId;
@property(nonatomic, copy, nullable) NSString * fileId;
@property(nonatomic, copy, nullable) NSString * psign;
@property(nonatomic, copy, nullable) NSString * url;
@end

@interface TXPlayerDrmMsg : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithLicenseUrl:(NSString *)licenseUrl
    playUrl:(NSString *)playUrl
    playerId:(nullable NSNumber *)playerId
    deviceCertificateUrl:(nullable NSString *)deviceCertificateUrl;
@property(nonatomic, copy) NSString * licenseUrl;
@property(nonatomic, copy) NSString * playUrl;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, copy, nullable) NSString * deviceCertificateUrl;
@end

@interface PipParamsPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    backIconForAndroid:(nullable NSString *)backIconForAndroid
    playIconForAndroid:(nullable NSString *)playIconForAndroid
    pauseIconForAndroid:(nullable NSString *)pauseIconForAndroid
    forwardIconForAndroid:(nullable NSString *)forwardIconForAndroid;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, copy, nullable) NSString * backIconForAndroid;
@property(nonatomic, copy, nullable) NSString * playIconForAndroid;
@property(nonatomic, copy, nullable) NSString * pauseIconForAndroid;
@property(nonatomic, copy, nullable) NSString * forwardIconForAndroid;
@end

@interface StringListPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    vvtUrl:(nullable NSString *)vvtUrl
    imageUrls:(nullable NSArray<NSString *> *)imageUrls;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, copy, nullable) NSString * vvtUrl;
@property(nonatomic, strong, nullable) NSArray<NSString *> * imageUrls;
@end

@interface BoolPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    value:(nullable NSNumber *)value;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface StringIntPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    strValue:(nullable NSString *)strValue
    intValue:(nullable NSNumber *)intValue;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, copy, nullable) NSString * strValue;
@property(nonatomic, strong, nullable) NSNumber * intValue;
@end

@interface StringPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    value:(nullable NSString *)value;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, copy, nullable) NSString * value;
@end

@interface DoublePlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    value:(nullable NSNumber *)value;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface IntPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    value:(nullable NSNumber *)value;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface FTXVodPlayConfigPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    connectRetryCount:(nullable NSNumber *)connectRetryCount
    connectRetryInterval:(nullable NSNumber *)connectRetryInterval
    timeout:(nullable NSNumber *)timeout
    playerType:(nullable NSNumber *)playerType
    headers:(nullable NSDictionary<NSString *, NSString *> *)headers
    enableAccurateSeek:(nullable NSNumber *)enableAccurateSeek
    autoRotate:(nullable NSNumber *)autoRotate
    smoothSwitchBitrate:(nullable NSNumber *)smoothSwitchBitrate
    cacheMp4ExtName:(nullable NSString *)cacheMp4ExtName
    progressInterval:(nullable NSNumber *)progressInterval
    maxBufferSize:(nullable NSNumber *)maxBufferSize
    maxPreloadSize:(nullable NSNumber *)maxPreloadSize
    firstStartPlayBufferTime:(nullable NSNumber *)firstStartPlayBufferTime
    nextStartPlayBufferTime:(nullable NSNumber *)nextStartPlayBufferTime
    overlayKey:(nullable NSString *)overlayKey
    overlayIv:(nullable NSString *)overlayIv
    extInfoMap:(nullable NSDictionary<NSString *, id> *)extInfoMap
    enableRenderProcess:(nullable NSNumber *)enableRenderProcess
    preferredResolution:(nullable NSNumber *)preferredResolution
    mediaType:(nullable NSNumber *)mediaType;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, strong, nullable) NSNumber * connectRetryCount;
@property(nonatomic, strong, nullable) NSNumber * connectRetryInterval;
@property(nonatomic, strong, nullable) NSNumber * timeout;
@property(nonatomic, strong, nullable) NSNumber * playerType;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> * headers;
@property(nonatomic, strong, nullable) NSNumber * enableAccurateSeek;
@property(nonatomic, strong, nullable) NSNumber * autoRotate;
@property(nonatomic, strong, nullable) NSNumber * smoothSwitchBitrate;
@property(nonatomic, copy, nullable) NSString * cacheMp4ExtName;
@property(nonatomic, strong, nullable) NSNumber * progressInterval;
@property(nonatomic, strong, nullable) NSNumber * maxBufferSize;
@property(nonatomic, strong, nullable) NSNumber * maxPreloadSize;
@property(nonatomic, strong, nullable) NSNumber * firstStartPlayBufferTime;
@property(nonatomic, strong, nullable) NSNumber * nextStartPlayBufferTime;
@property(nonatomic, copy, nullable) NSString * overlayKey;
@property(nonatomic, copy, nullable) NSString * overlayIv;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> * extInfoMap;
@property(nonatomic, strong, nullable) NSNumber * enableRenderProcess;
@property(nonatomic, strong, nullable) NSNumber * preferredResolution;
/// Media asset type, default auto type, refer to value see[TXVodPlayEvent]
/// 媒资类型，默认auto类型, 取值参考 see[TXVodPlayEvent]
@property(nonatomic, strong, nullable) NSNumber * mediaType;
@end

@interface FTXLivePlayConfigPlayerMsg : NSObject
+ (instancetype)makeWithPlayerId:(nullable NSNumber *)playerId
    cacheTime:(nullable NSNumber *)cacheTime
    maxAutoAdjustCacheTime:(nullable NSNumber *)maxAutoAdjustCacheTime
    minAutoAdjustCacheTime:(nullable NSNumber *)minAutoAdjustCacheTime
    videoBlockThreshold:(nullable NSNumber *)videoBlockThreshold
    connectRetryCount:(nullable NSNumber *)connectRetryCount
    connectRetryInterval:(nullable NSNumber *)connectRetryInterval
    autoAdjustCacheTime:(nullable NSNumber *)autoAdjustCacheTime
    enableAec:(nullable NSNumber *)enableAec
    enableMessage:(nullable NSNumber *)enableMessage
    enableMetaData:(nullable NSNumber *)enableMetaData
    flvSessionKey:(nullable NSString *)flvSessionKey;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@property(nonatomic, strong, nullable) NSNumber * cacheTime;
@property(nonatomic, strong, nullable) NSNumber * maxAutoAdjustCacheTime;
@property(nonatomic, strong, nullable) NSNumber * minAutoAdjustCacheTime;
@property(nonatomic, strong, nullable) NSNumber * videoBlockThreshold;
@property(nonatomic, strong, nullable) NSNumber * connectRetryCount;
@property(nonatomic, strong, nullable) NSNumber * connectRetryInterval;
@property(nonatomic, strong, nullable) NSNumber * autoAdjustCacheTime;
@property(nonatomic, strong, nullable) NSNumber * enableAec;
@property(nonatomic, strong, nullable) NSNumber * enableMessage;
@property(nonatomic, strong, nullable) NSNumber * enableMetaData;
@property(nonatomic, copy, nullable) NSString * flvSessionKey;
@end

@interface TXVodDownloadMediaMsg : NSObject
+ (instancetype)makeWithPlayPath:(nullable NSString *)playPath
    progress:(nullable NSNumber *)progress
    downloadState:(nullable NSNumber *)downloadState
    userName:(nullable NSString *)userName
    duration:(nullable NSNumber *)duration
    playableDuration:(nullable NSNumber *)playableDuration
    size:(nullable NSNumber *)size
    downloadSize:(nullable NSNumber *)downloadSize
    url:(nullable NSString *)url
    appId:(nullable NSNumber *)appId
    fileId:(nullable NSString *)fileId
    pSign:(nullable NSString *)pSign
    quality:(nullable NSNumber *)quality
    token:(nullable NSString *)token
    speed:(nullable NSNumber *)speed
    isResourceBroken:(nullable NSNumber *)isResourceBroken;
/// 缓存地址
@property(nonatomic, copy, nullable) NSString * playPath;
/// 下载进度
@property(nonatomic, strong, nullable) NSNumber * progress;
/// 下载状态
@property(nonatomic, strong, nullable) NSNumber * downloadState;
/// 账户名称,用于url下载设置账户名称
@property(nonatomic, copy, nullable) NSString * userName;
/// 总时长
@property(nonatomic, strong, nullable) NSNumber * duration;
/// 已下载的可播放时长
@property(nonatomic, strong, nullable) NSNumber * playableDuration;
/// 文件总大小，单位：byte
@property(nonatomic, strong, nullable) NSNumber * size;
/// 已下载大小，单位：byte
@property(nonatomic, strong, nullable) NSNumber * downloadSize;
/// 需要下载的视频url，url下载必填
/// <h1>
/// url下载不支持嵌套m3u8和mp4下载
/// </h1>
@property(nonatomic, copy, nullable) NSString * url;
/// 下载文件对应的appId，fileId下载必填
@property(nonatomic, strong, nullable) NSNumber * appId;
/// 下载文件Id，fileId下载必填
@property(nonatomic, copy, nullable) NSString * fileId;
/// 加密签名，加密视频必填
@property(nonatomic, copy, nullable) NSString * pSign;
/// 清晰度ID
@property(nonatomic, strong, nullable) NSNumber * quality;
/// 加密token
@property(nonatomic, copy, nullable) NSString * token;
/// 下载速度，单位：KByte/秒
@property(nonatomic, strong, nullable) NSNumber * speed;
/// 资源是否已损坏, 如：资源被删除了
@property(nonatomic, strong, nullable) NSNumber * isResourceBroken;
@end

@interface TXDownloadListMsg : NSObject
+ (instancetype)makeWithInfoList:(nullable NSArray<TXVodDownloadMediaMsg *> *)infoList;
@property(nonatomic, strong, nullable) NSArray<TXVodDownloadMediaMsg *> * infoList;
@end

@interface UInt8ListMsg : NSObject
+ (instancetype)makeWithValue:(nullable FlutterStandardTypedData *)value;
@property(nonatomic, strong, nullable) FlutterStandardTypedData * value;
@end

@interface ListMsg : NSObject
+ (instancetype)makeWithValue:(nullable NSArray *)value;
@property(nonatomic, strong, nullable) NSArray * value;
@end

@interface BoolMsg : NSObject
+ (instancetype)makeWithValue:(nullable NSNumber *)value;
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface IntMsg : NSObject
+ (instancetype)makeWithValue:(nullable NSNumber *)value;
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface StringMsg : NSObject
+ (instancetype)makeWithValue:(nullable NSString *)value;
@property(nonatomic, copy, nullable) NSString * value;
@end

@interface CachePathMsg : NSObject
+ (instancetype)makeWithAndroidAbsolutePath:(nullable NSString *)androidAbsolutePath
    iOSAbsolutePath:(nullable NSString *)iOSAbsolutePath;
@property(nonatomic, copy, nullable) NSString * androidAbsolutePath;
@property(nonatomic, copy, nullable) NSString * iOSAbsolutePath;
@end

@interface DoubleMsg : NSObject
+ (instancetype)makeWithValue:(nullable NSNumber *)value;
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface PreLoadMsg : NSObject
+ (instancetype)makeWithPlayUrl:(nullable NSString *)playUrl
    preloadSizeMB:(nullable NSNumber *)preloadSizeMB
    preferredResolution:(nullable NSNumber *)preferredResolution;
@property(nonatomic, copy, nullable) NSString * playUrl;
@property(nonatomic, strong, nullable) NSNumber * preloadSizeMB;
@property(nonatomic, strong, nullable) NSNumber * preferredResolution;
@end

@interface PreLoadInfoMsg : NSObject
+ (instancetype)makeWithAppId:(nullable NSNumber *)appId
    fileId:(nullable NSString *)fileId
    pSign:(nullable NSString *)pSign
    playUrl:(nullable NSString *)playUrl
    preloadSizeMB:(nullable NSNumber *)preloadSizeMB
    preferredResolution:(nullable NSNumber *)preferredResolution
    tmpPreloadTaskId:(nullable NSNumber *)tmpPreloadTaskId;
@property(nonatomic, strong, nullable) NSNumber * appId;
@property(nonatomic, copy, nullable) NSString * fileId;
@property(nonatomic, copy, nullable) NSString * pSign;
@property(nonatomic, copy, nullable) NSString * playUrl;
@property(nonatomic, strong, nullable) NSNumber * preloadSizeMB;
@property(nonatomic, strong, nullable) NSNumber * preferredResolution;
@property(nonatomic, strong, nullable) NSNumber * tmpPreloadTaskId;
@end

@interface MapMsg : NSObject
+ (instancetype)makeWithMap:(nullable NSDictionary<NSString *, NSString *> *)map;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> * map;
@end

@interface SubTitlePlayerMsg : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithUrl:(NSString *)url
    name:(NSString *)name
    mimeType:(nullable NSString *)mimeType
    playerId:(nullable NSNumber *)playerId;
@property(nonatomic, copy) NSString * url;
@property(nonatomic, copy) NSString * name;
@property(nonatomic, copy, nullable) NSString * mimeType;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@end

@interface SubTitleRenderModelPlayerMsg : NSObject
+ (instancetype)makeWithCanvasWidth:(nullable NSNumber *)canvasWidth
    canvasHeight:(nullable NSNumber *)canvasHeight
    familyName:(nullable NSString *)familyName
    fontSize:(nullable NSNumber *)fontSize
    fontScale:(nullable NSNumber *)fontScale
    fontColor:(nullable NSNumber *)fontColor
    isBondFontStyle:(nullable NSNumber *)isBondFontStyle
    outlineWidth:(nullable NSNumber *)outlineWidth
    outlineColor:(nullable NSNumber *)outlineColor
    lineSpace:(nullable NSNumber *)lineSpace
    startMargin:(nullable NSNumber *)startMargin
    endMargin:(nullable NSNumber *)endMargin
    verticalMargin:(nullable NSNumber *)verticalMargin
    playerId:(nullable NSNumber *)playerId;
@property(nonatomic, strong, nullable) NSNumber * canvasWidth;
@property(nonatomic, strong, nullable) NSNumber * canvasHeight;
@property(nonatomic, copy, nullable) NSString * familyName;
@property(nonatomic, strong, nullable) NSNumber * fontSize;
@property(nonatomic, strong, nullable) NSNumber * fontScale;
@property(nonatomic, strong, nullable) NSNumber * fontColor;
@property(nonatomic, strong, nullable) NSNumber * isBondFontStyle;
@property(nonatomic, strong, nullable) NSNumber * outlineWidth;
@property(nonatomic, strong, nullable) NSNumber * outlineColor;
@property(nonatomic, strong, nullable) NSNumber * lineSpace;
@property(nonatomic, strong, nullable) NSNumber * startMargin;
@property(nonatomic, strong, nullable) NSNumber * endMargin;
@property(nonatomic, strong, nullable) NSNumber * verticalMargin;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@end

@interface StringOptionPlayerMsg : NSObject
+ (instancetype)makeWithKey:(nullable NSString *)key
    value:(nullable NSArray<id> *)value
    playerId:(nullable NSNumber *)playerId;
@property(nonatomic, copy, nullable) NSString * key;
@property(nonatomic, strong, nullable) NSArray<id> * value;
@property(nonatomic, strong, nullable) NSNumber * playerId;
@end

/// The codec used by TXFlutterSuperPlayerPluginAPI.
NSObject<FlutterMessageCodec> *TXFlutterSuperPlayerPluginAPIGetCodec(void);

@protocol TXFlutterSuperPlayerPluginAPI
/// @return `nil` only when `error != nil`.
- (nullable StringMsg *)getPlatformVersionWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 创建点播播放器
///
/// @return `nil` only when `error != nil`.
- (nullable PlayerMsg *)createVodPlayerWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 创建直播播放器
///
/// @return `nil` only when `error != nil`.
- (nullable PlayerMsg *)createLivePlayerWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 开关log输出
- (void)setConsoleEnabledEnabled:(BoolMsg *)enabled error:(FlutterError *_Nullable *_Nonnull)error;
/// 释放播放器资源
- (void)releasePlayerPlayerId:(PlayerMsg *)playerId error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置播放引擎的最大缓存大小。设置后会根据设定值自动清理Cache目录的文件
/// @param size 最大缓存大小（单位：MB)
- (void)setGlobalMaxCacheSizeSize:(IntMsg *)size error:(FlutterError *_Nullable *_Nonnull)error;
/// 在短视频播放场景中，视频文件的本地缓存是很刚需的一个特性，对于普通用户而言，一个已经看过的视频再次观看时，不应该再消耗一次流量。
///  @格式支持：SDK 支持 HLS(m3u8) 和 MP4 两种常见点播格式的缓存功能。
///  @开启时机：SDK 并不默认开启缓存功能，对于用户回看率不高的场景，也并不推荐您开启此功能。
///  @开启方式：全局生效，在使用播放器开启。开启此功能需要配置两个参数：本地缓存目录及缓存大小。
///
/// 该缓存路径默认设置到app沙盒目录下，postfixPath只需要传递相对缓存目录即可，不需要传递整个绝对路径。
/// e.g. postfixPath = 'testCache'
/// Android 平台：视频将会缓存到sdcard的Android/data/your-pkg-name/files/testCache 目录。
/// iOS 平台：视频将会缓存到沙盒的Documents/testCache 目录。
/// @param postfixPath 缓存目录
/// @return true 设置成功 false 设置失败
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)setGlobalCacheFolderPathPostfixPath:(StringMsg *)postfixPath error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置播放器资源缓存目录绝对路径，该方法会与 setGlobalCacheFolderPath(String postfixPath) 相互覆盖，调用其中一个即可
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)setGlobalCacheFolderCustomPathCacheMsg:(CachePathMsg *)cacheMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置全局license
- (void)setGlobalLicenseLicenseMsg:(LicenseMsg *)licenseMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置log输出级别 [TXLogLevel]
- (void)setLogLevelLogLevel:(IntMsg *)logLevel error:(FlutterError *_Nullable *_Nonnull)error;
/// 获取依赖Native端的 LiteAVSDK 的版本
///
/// @return `nil` only when `error != nil`.
- (nullable StringMsg *)getLiteAVSDKVersionWithError:(FlutterError *_Nullable *_Nonnull)error;
///
/// 设置 liteav SDK 接入的环境。
/// 腾讯云在全球各地区部署的环境，按照各地区政策法规要求，需要接入不同地区接入点。
///
/// @param envConfig 需要接入的环境，SDK 默认接入的环境是：默认正式环境。
/// @return 0：成功；其他：错误
/// @note 目标市场为中国大陆的客户请不要调用此接口，如果目标市场为海外用户，请通过技术支持联系我们，了解 env_config 的配置方法，以确保 App 遵守 GDPR 标准。
///
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)setGlobalEnvEnvConfig:(StringMsg *)envConfig error:(FlutterError *_Nullable *_Nonnull)error;
///
/// 开始监听设备旋转方向，开启之后，如果设备自动旋转打开，播放器会自动根据当前设备方向来旋转视频方向。
/// <h1>该接口目前只适用安卓端，IOS端会自动开启该能力</h1>
/// 在调用该接口前，请务必向用户告知隐私风险。
/// 如有需要，请确认是否有获取旋转sensor的权限。
/// @return true : 开启成功
///         false : 开启失败，如开启过早，还未等到上下文初始化、获取sensor失败等原因
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)startVideoOrientationServiceWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void TXFlutterSuperPlayerPluginAPISetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TXFlutterSuperPlayerPluginAPI> *_Nullable api);

/// The codec used by TXFlutterNativeAPI.
NSObject<FlutterMessageCodec> *TXFlutterNativeAPIGetCodec(void);

@protocol TXFlutterNativeAPI
/// 修改当前界面亮度
- (void)setBrightnessBrightness:(DoubleMsg *)brightness error:(FlutterError *_Nullable *_Nonnull)error;
/// 恢复当前界面亮度
- (void)restorePageBrightnessWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前界面亮度 0.0 ~ 1.0
///
/// @return `nil` only when `error != nil`.
- (nullable DoubleMsg *)getBrightnessWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 获取系统界面亮度，IOS系统与界面亮度一致，安卓可能会有差异
///
/// @return `nil` only when `error != nil`.
- (nullable DoubleMsg *)getSysBrightnessWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 设置当前系统音量，0.0 ~ 1.0
- (void)setSystemVolumeVolume:(DoubleMsg *)volume error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前系统音量，范围：0.0 ~ 1.0
///
/// @return `nil` only when `error != nil`.
- (nullable DoubleMsg *)getSystemVolumeWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 释放音频焦点，只用于安卓端
- (void)abandonAudioFocusWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 请求获得音频焦点，只用于安卓端
- (void)requestAudioFocusWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 当前设备是否支持画中画模式
/// @return [TXVodPlayEvent]
///  0 可开启画中画模式
///  -101  android版本过低
///  -102  画中画权限关闭/设备不支持画中画
///  -103  当前界面已销毁
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)isDeviceSupportPipWithError:(FlutterError *_Nullable *_Nonnull)error;
///
/// register or unregister system brightness
///
- (void)registerSysBrightnessIsRegister:(BoolMsg *)isRegister error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void TXFlutterNativeAPISetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TXFlutterNativeAPI> *_Nullable api);

/// The codec used by TXFlutterVodPlayerApi.
NSObject<FlutterMessageCodec> *TXFlutterVodPlayerApiGetCodec(void);

@protocol TXFlutterVodPlayerApi
/// 播放器初始化，创建共享纹理、初始化播放器
///
/// To initialize the player, you would need to create a shared texture and initialize the player.
/// @param onlyAudio 是否是纯音频模式 if pure audio mode
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)initializeOnlyAudio:(BoolPlayerMsg *)onlyAudio error:(FlutterError *_Nullable *_Nonnull)error;
/// 通过url开始播放视频
/// 10.7版本开始，startPlay变更为startVodPlay，需要通过 {@link SuperPlayerPlugin#setGlobalLicense} 设置 Licence 后方可成功播放，
/// 否则将播放失败（黑屏），全局仅设置一次即可。直播 Licence、短视频 Licence 和视频播放 Licence 均可使用，若您暂未获取上述 Licence ，
/// 可[快速免费申请测试版 Licence](https://cloud.tencent.com/act/event/License) 以正常播放，正式版 License 需[购买]
/// (https://cloud.tencent.com/document/product/881/74588#.E8.B4.AD.E4.B9.B0.E5.B9.B6.E6.96.B0.E5.BB.BA.E6.AD.A3.E5.BC.8F.E7.89.88-license)。
///
/// Starting from version 10.7, the method `startPlay` has been changed to `startVodPlay` for playing videos via a URL.
/// To play videos successfully, it is necessary to set the license by using the method `SuperPlayerPlugin#setGlobalLicense`.
/// Failure to set the license will result in video playback failure (a black screen).
/// Live streaming, short video, and video playback licenses can all be used. If you do not have any of the above licenses,
/// you can apply for a free trial license to play videos normally[Quickly apply for a free trial version Licence]
/// (https://cloud.tencent.com/act/event/License).Official licenses can be purchased
/// (https://cloud.tencent.com/document/product/881/74588#.E8.B4.AD.E4.B9.B0.E5.B9.B6.E6.96.B0.E5.BB.BA.E6.AD.A3.E5.BC.8F.E7.89.88-license).
/// @param url : 视频播放地址 video playback address
/// return 是否播放成功 if play successfully
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)startVodPlayUrl:(StringPlayerMsg *)url error:(FlutterError *_Nullable *_Nonnull)error;
/// 通过fileId播放视频
/// 10.7版本开始，startPlayWithParams变更为startVodPlayWithParams，需要通过 {@link SuperPlayerPlugin#setGlobalLicense} 设置 Licence 后方可成功播放，
/// 否则将播放失败（黑屏），全局仅设置一次即可。直播 Licence、短视频 Licence 和视频播放 Licence 均可使用，若您暂未获取上述 Licence ，
/// 可[快速免费申请测试版 Licence](https://cloud.tencent.com/act/event/License) 以正常播放，正式版 License 需[购买]
/// (https://cloud.tencent.com/document/product/881/74588#.E8.B4.AD.E4.B9.B0.E5.B9.B6.E6.96.B0.E5.BB.BA.E6.AD.A3.E5.BC.8F.E7.89.88-license)。
///
/// Starting from version 10.7, the method "startPlayWithParams" has been changed to "startVodPlayWithParams" for playing videos using fileId.
/// To play the video successfully, you need to set the Licence using "SuperPlayerPlugin#setGlobalLicense" method before playing the video.
/// If you do not set the Licence, the video will not play (black screen). The Licence for live streaming,
/// short video, and video playback can all be used. If you have not obtained the Licence, you can apply for a free trial version [here]
/// (https://cloud.tencent.com/act/event/License) for normal playback. To use the official version, you need to [purchase]
/// (https://cloud.tencent.com/document/product/881/74588#.E8.B4.AD.E4.B9.B0.E5.B9.B6.E6.96.B0.E5.BB.BA.E6.AD.A3.E5.BC.8F.E7.89.88-license).
/// @params : see[TXPlayInfoParams]
/// return 是否播放成功  if play successful
- (void)startVodPlayWithParamsParams:(TXPlayInfoParamsPlayerMsg *)params error:(FlutterError *_Nullable *_Nonnull)error;
/// 播放 DRM 加密视频
///
/// Playing DRM-encrypted video.
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)startPlayDrmParams:(TXPlayerDrmMsg *)params error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置是否自动播放
///
/// set autoplay
- (void)setAutoPlayIsAutoPlay:(BoolPlayerMsg *)isAutoPlay error:(FlutterError *_Nullable *_Nonnull)error;
/// 停止播放
///
/// Stop playback
/// return 是否停止成功 if stop successful
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)stopIsNeedClear:(BoolPlayerMsg *)isNeedClear error:(FlutterError *_Nullable *_Nonnull)error;
/// 视频是否处于正在播放中
///
/// Is the video currently playing
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)isPlayingPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 视频暂停，必须在播放器开始播放的时候调用
///
/// pause video, it must be called when the player starts playing
- (void)pausePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 继续播放，在暂停的时候调用
///
/// resume playback, it should be called when the video is paused
- (void)resumePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置是否静音
///
/// Set whether to mute or not
- (void)setMuteMute:(BoolPlayerMsg *)mute error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置是否循环播放
///
/// Set whether to loop playback or not
- (void)setLoopLoop:(BoolPlayerMsg *)loop error:(FlutterError *_Nullable *_Nonnull)error;
/// 将视频播放进度定位到指定的进度进行播放
///
/// Set the video playback progress to a specific time and start playing.
/// progress 要定位的视频时间，单位 秒 The video playback time to be located, in seconds
- (void)seekProgress:(DoublePlayerMsg *)progress error:(FlutterError *_Nullable *_Nonnull)error;
/// 跳转到视频流指定PDT时间点, 可实现视频快进,快退,进度条跳转等功能
/// 单位毫秒(ms)
/// 播放器高级版 11.6 版本开始支持
///
/// Jump to the specified PDT time point of the video stream, which can realize video fast forward, fast rewind, progress bar jump and other functions.
/// Unit millisecond (ms)
/// Player Premium version 11.6 starts to support
- (void)seekToPdtTimePdtTimeMs:(IntPlayerMsg *)pdtTimeMs error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置播放速率，默认速率 1
///
/// Set the playback speed, with a default speed of 1.
- (void)setRateRate:(DoublePlayerMsg *)rate error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得播放视频解析出来的码率信息
///
/// get the bitrate information extracted from playing a video
/// return List<Map>
/// Bitrate：index 码率序号，
///         width 码率对应视频宽度，
///         height 码率对应视频高度,
///         bitrate 码率值
///
/// Bitrate：index:bitrate index，
///         width:the video with of this bitrate，
///         height:the video height of this bitrate,
///         bitrate:bitrate value
///
/// @return `nil` only when `error != nil`.
- (nullable ListMsg *)getSupportedBitratePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前设置的码率序号
///
/// Get the index of the current bitrate setting
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)getBitrateIndexPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置码率序号
///
/// Set the index of the bitrate setting.
- (void)setBitrateIndexIndex:(IntPlayerMsg *)index error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置视频播放开始时间，单位 秒
///
/// Set the start time of the video playback, in seconds.
- (void)setStartTimeStartTime:(DoublePlayerMsg *)startTime error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置视频声音 0~100
///
/// Set the volume of the video, ranging from 0 to 100.
- (void)setAudioPlayOutVolumeVolume:(IntPlayerMsg *)volume error:(FlutterError *_Nullable *_Nonnull)error;
/// 请求获得音频焦点
///
/// Request audio focus.
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)setRequestAudioFocusFocus:(BoolPlayerMsg *)focus error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置播放器配置
///
/// Set player configuration
/// config @see [FTXVodPlayConfig]
- (void)setConfigConfig:(FTXVodPlayConfigPlayerMsg *)config error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前已经播放的时间，单位 秒
///
/// Get the current playback time, in seconds.
///
/// @return `nil` only when `error != nil`.
- (nullable DoubleMsg *)getCurrentPlaybackTimePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前视频已缓存的时间
///
/// Get the current amount of video that has been buffered.
///
/// @return `nil` only when `error != nil`.
- (nullable DoubleMsg *)getBufferDurationPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前视频的可播放时间
///
/// Get the current playable duration of the video.
///
/// @return `nil` only when `error != nil`.
- (nullable DoubleMsg *)getPlayableDurationPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前播放视频的宽度
///
/// Get the width of the currently playing video.
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)getWidthPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 获得当前播放视频的高度
///
/// Get the height of the currently playing video.
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)getHeightPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置播放视频的token
///
/// Set the token for playing the video.
- (void)setTokenToken:(StringPlayerMsg *)token error:(FlutterError *_Nullable *_Nonnull)error;
/// 当前播放的视频是否循环播放
///
/// Is the currently playing video set to loop
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)isLoopPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 开启/关闭硬件编码
///
/// Enable/Disable hardware encoding.
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)enableHardwareDecodeEnable:(BoolPlayerMsg *)enable error:(FlutterError *_Nullable *_Nonnull)error;
/// 进入画中画模式，进入画中画模式，需要适配画中画模式的界面，安卓只支持7.0以上机型
/// <h1>
/// 由于android系统限制，传递的图标大小不得超过1M，否则无法显示
/// </h1>
/// @param backIcon playIcon pauseIcon forwardIcon 为播放后退、播放、暂停、前进的图标，如果赋值的话，将会使用传递的图标，否则
/// 使用系统默认图标，只支持flutter本地资源图片，传递的时候，与flutter使用图片资源一致，例如： images/back_icon.png
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)enterPictureInPictureModePipParamsMsg:(PipParamsPlayerMsg *)pipParamsMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 退出画中画，如果该播放器处于画中画模式
///
/// Exit picture-in-picture mode if the video player is in picture-in-picture mode.
- (void)exitPictureInPictureModePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)initImageSpriteSpriteInfo:(StringListPlayerMsg *)spriteInfo error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable UInt8ListMsg *)getImageSpriteTime:(DoublePlayerMsg *)time error:(FlutterError *_Nullable *_Nonnull)error;
/// 获取总时长
///
/// To get the total duration
///
/// @return `nil` only when `error != nil`.
- (nullable DoubleMsg *)getDurationPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)addSubtitleSourcePlayerMsg:(SubTitlePlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable ListMsg *)getSubtitleTrackInfoPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable ListMsg *)getAudioTrackInfoPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)selectTrackPlayerMsg:(IntPlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)deselectTrackPlayerMsg:(IntPlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setSubtitleStylePlayerMsg:(SubTitleRenderModelPlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setStringOptionPlayerMsg:(StringOptionPlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void TXFlutterVodPlayerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TXFlutterVodPlayerApi> *_Nullable api);

/// The codec used by TXFlutterLivePlayerApi.
NSObject<FlutterMessageCodec> *TXFlutterLivePlayerApiGetCodec(void);

@protocol TXFlutterLivePlayerApi
/// 播放器初始化，创建共享纹理、初始化播放器
/// @param onlyAudio 是否是纯音频模式
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)initializeOnlyAudio:(BoolPlayerMsg *)onlyAudio error:(FlutterError *_Nullable *_Nonnull)error;
///
/// 当设置[LivePlayer] 类型播放器时，需要参数[playType]
/// 参考: [PlayType.LIVE_RTMP] ...
/// 10.7版本开始，startPlay变更为startLivePlay，需要通过 {@link SuperPlayerPlugin#setGlobalLicense} 设置 Licence 后方可成功播放，
/// 否则将播放失败（黑屏），全局仅设置一次即可。直播 Licence、短视频 Licence 和视频播放 Licence 均可使用，若您暂未获取上述 Licence ，
/// 可[快速免费申请测试版 Licence](https://cloud.tencent.com/act/event/License) 以正常播放，正式版 License 需[购买]
/// (https://cloud.tencent.com/document/product/881/74588#.E8.B4.AD.E4.B9.B0.E5.B9.B6.E6.96.B0.E5.BB.BA.E6.AD.A3.E5.BC.8F.E7.89.88-license)。
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)startLivePlayPlayerMsg:(StringIntPlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 停止播放
/// return 是否停止成功
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)stopIsNeedClear:(BoolPlayerMsg *)isNeedClear error:(FlutterError *_Nullable *_Nonnull)error;
/// 视频是否处于正在播放中
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)isPlayingPlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 视频暂停，必须在播放器开始播放的时候调用
- (void)pausePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 继续播放，在暂停的时候调用
- (void)resumePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置直播模式，see TXPlayerLiveMode
- (void)setLiveModeMode:(IntPlayerMsg *)mode error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置视频声音 0~100
- (void)setVolumeVolume:(IntPlayerMsg *)volume error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置是否静音
- (void)setMuteMute:(BoolPlayerMsg *)mute error:(FlutterError *_Nullable *_Nonnull)error;
/// 切换播放流
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)switchStreamUrl:(StringPlayerMsg *)url error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置appId
- (void)setAppIDAppId:(StringPlayerMsg *)appId error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置播放器配置
/// config @see [FTXLivePlayConfig]
- (void)setConfigConfig:(FTXLivePlayConfigPlayerMsg *)config error:(FlutterError *_Nullable *_Nonnull)error;
/// 开启/关闭硬件编码
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)enableHardwareDecodeEnable:(BoolPlayerMsg *)enable error:(FlutterError *_Nullable *_Nonnull)error;
/// 进入画中画模式，进入画中画模式，需要适配画中画模式的界面，安卓只支持7.0以上机型
/// <h1>
/// 由于android系统限制，传递的图标大小不得超过1M，否则无法显示
/// </h1>
/// @param backIcon playIcon pauseIcon forwardIcon 为播放后退、播放、暂停、前进的图标，仅适用于android，如果赋值的话，将会使用传递的图标，否则
/// 使用系统默认图标，只支持flutter本地资源图片，传递的时候，与flutter使用图片资源一致，例如： images/back_icon.png
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)enterPictureInPictureModePipParamsMsg:(PipParamsPlayerMsg *)pipParamsMsg error:(FlutterError *_Nullable *_Nonnull)error;
/// 退出画中画，如果该播放器处于画中画模式
- (void)exitPictureInPictureModePlayerMsg:(PlayerMsg *)playerMsg error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void TXFlutterLivePlayerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TXFlutterLivePlayerApi> *_Nullable api);

/// The codec used by TXFlutterDownloadApi.
NSObject<FlutterMessageCodec> *TXFlutterDownloadApiGetCodec(void);

@protocol TXFlutterDownloadApi
/// 启动预下载。
/// playUrl: 要预下载的url
/// preloadSizeMB: 预下载的大小（单位：MB）
/// preferredResolution 期望分辨率，long类型，值为高x宽。可参考如720*1080。不支持多分辨率或不需指定时，传-1。
/// 返回值：任务ID，可用这个任务ID停止预下载 [stopPreload]
///
/// @return `nil` only when `error != nil`.
- (nullable IntMsg *)startPreLoadMsg:(PreLoadMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)startPreLoadByParamsMsg:(PreLoadInfoMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// 停止预下载。
/// taskId： 任务id
- (void)stopPreLoadMsg:(IntMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// 开始下载
/// videoDownloadModel: 下载构造体
- (void)startDownloadMsg:(TXVodDownloadMediaMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// 继续下载，与开始下载接口有区别，该接口会寻找对应的缓存，复用之前的缓存来续点下载，
/// 而开始下载接口会启动一个全新的下载
/// videoDownloadModel: 下载构造体
- (void)resumeDownloadMsg:(TXVodDownloadMediaMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// 停止下载
/// videoDownloadModel: 下载构造体
- (void)stopDownloadMsg:(TXVodDownloadMediaMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// 设置下载请求头
- (void)setDownloadHeadersHeaders:(MapMsg *)headers error:(FlutterError *_Nullable *_Nonnull)error;
/// 获取所有视频下载列表
///
/// @return `nil` only when `error != nil`.
- (nullable TXDownloadListMsg *)getDownloadListWithError:(FlutterError *_Nullable *_Nonnull)error;
/// 获得指定视频的下载信息
///
/// @return `nil` only when `error != nil`.
- (nullable TXVodDownloadMediaMsg *)getDownloadInfoMsg:(TXVodDownloadMediaMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// 删除下载任务
///
/// @return `nil` only when `error != nil`.
- (nullable BoolMsg *)deleteDownloadMediaInfoMsg:(TXVodDownloadMediaMsg *)msg error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void TXFlutterDownloadApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TXFlutterDownloadApi> *_Nullable api);

NS_ASSUME_NONNULL_END
