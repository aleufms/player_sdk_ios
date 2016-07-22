// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class SambaMediaRequest;
@class SambaMedia;

SWIFT_CLASS("_TtC11SambaPlayer8SambaApi")
@interface SambaApi : NSObject

/// Default constructor
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;

/// Request media from SambaPlayer API<br><br>
///
/// The SambaPlayer API returns a base64 string with the encoded media info and its decoded before intiate
///
/// \param request SambaMediaRequest - Request to our api
///
/// \param callback SambaMedia - Callback when the request is made passing our SambaMedia object
- (void)requestMedia:(SambaMediaRequest * _Nonnull)request callback:(void (^ _Nonnull)(SambaMedia * _Nullable))callback;
@end



/// <ul><li>Data entity representing a media.</li><li></li><li>If <code>outputs
/// </code> field is nil, use <code>url
/// </code> field.</li></ul>
SWIFT_CLASS("_TtC11SambaPlayer10SambaMedia")
@interface SambaMedia : NSObject

/// Media´s title
@property (nonatomic, copy) NSString * _Nonnull title;

/// Current media URL
@property (nonatomic, copy) NSString * _Nullable url;

/// DFP tag URL
@property (nonatomic, copy) NSString * _Nullable adUrl;

/// Delivery type ( HLS, PROGRESSIVE, OTHER )
@property (nonatomic, copy) NSString * _Nonnull deliveryType;

/// Thumb´s URL
@property (nonatomic, copy) NSString * _Nullable thumb;

/// Indicate if the media is live or not
@property (nonatomic) BOOL isLive;

/// Indicate if the media is audio or not
@property (nonatomic) BOOL isAudio;

/// Media current color theme
@property (nonatomic) NSUInteger theme;

/// Default initializer
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer
///
/// \param url String URL of the media
- (nonnull instancetype)init:(NSString * _Nonnull)url;

/// Media initializer
///
/// \param url String URL of the media
///
/// \param title String Media´s title
///
/// \param thumb String URL of the thumb
- (nonnull instancetype)init:(NSString * _Nonnull)url title:(NSString * _Nullable)title thumb:(NSString * _Nullable)thumb OBJC_DESIGNATED_INITIALIZER;

/// Description of the media ( if empty returns the media´s title
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


SWIFT_CLASS("_TtC11SambaPlayer17SambaMediaRequest")
@interface SambaMediaRequest : NSObject

/// Project Hash of the media
@property (nonatomic, copy) NSString * _Nonnull projectHash;

/// ID of the media
@property (nonatomic, copy) NSString * _Nullable mediaId;

/// If it´s live, streamName of the media
@property (nonatomic, copy) NSString * _Nullable streamName;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable streamUrls;

/// Default initializer
///
/// \param projectHash String Project Hash of the media
///
/// \param mediaId String ID of the media
///
/// \param streamName String streamName of the media live
///
/// \param streamUrls [String] List of streamURLs
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash mediaId:(NSString * _Nullable)mediaId streamName:(NSString * _Nullable)streamName streamUrls:(NSArray<NSString *> * _Nullable)streamUrls OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer
///
/// \param projectHash String Project Hash of the media
///
/// \param streamUrls [String] List of streamURLs
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash streamUrls:(NSArray<NSString *> * _Nonnull)streamUrls;

/// Convenience initializer
///
/// \param projectHash String Project Hash of the media
///
/// \param streamName String streamName of the media live
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash streamUrl:(NSString * _Nonnull)streamUrl;

/// Convenience initializer
///
/// \param projectHash String Project Hash of the media
///
/// \param streamName String streamName of the media live
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash streamName:(NSString * _Nonnull)streamName;

/// Convenience initializer
///
/// \param projectHash String Project Hash of the media
///
/// \param mediaId String ID of the media
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash mediaId:(NSString * _Nonnull)mediaId;
@end

@class UIView;
@class NSCoder;
@protocol UIViewControllerTransitionCoordinator;

SWIFT_CLASS("_TtC11SambaPlayer11SambaPlayer")
@interface SambaPlayer : UIViewController

/// Current media time
@property (nonatomic, readonly) float currentTime;

/// Current media duration
@property (nonatomic, readonly) float duration;

/// Current media
@property (nonatomic, strong) SambaMedia * _Nonnull media;

/// Flag if the media is or not playing
@property (nonatomic, readonly) BOOL isPlaying;

/// Default initializer
///
/// <ul><li></li></ul>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;

/// Convenience initializer
///
/// <ul><li></li></ul>
/// \param parentViewController UIViewController The view-controller in which the player view-controller and view should to be embedded
- (nonnull instancetype)init:(UIViewController * _Nonnull)parentViewController;

/// Convenience initializer
///
/// <ul><li></li></ul>
/// \param parentViewController UIViewController The view-controller in which the player view-controller should to be embedded
///
/// \param parentView UIView The view in which the player view should to be embedded
- (nonnull instancetype)init:(UIViewController * _Nonnull)parentViewController parentView:(UIView * _Nonnull)parentView;

/// Required initializer
///
/// <ul><li></li></ul>
/// \param aDecoder NSCoder
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;

/// Play the media<br><br>
///
/// <code>player.play()
/// 
/// </code>
- (void)play;

/// Pause the media<br><br>
///
/// <code>player.pause()
/// 
/// </code>
- (void)pause;

/// Stop the media returning it to it´s initial time<br><br>
///
/// <code>player.stop()
/// 
/// </code>
- (void)stop;

/// Seek the media to a given time<br><br>
///
/// <code>player.seek(20)
/// 
/// </code>
/// <ul><li>parameter: pos: Int Time in seconds</li></ul>
- (void)seek:(NSInteger)pos;

/// Change the current output<br><br>
///
/// <code>player.switchOutput(1)
/// 
/// </code>
/// <ul><li>parameter: value: Int Index of the output</li></ul>
- (void)switchOutput:(NSInteger)value;

/// Destroy the player instance<br><br>
///
/// <code>player.destroy()
/// 
/// </code>
- (void)destroy;

/// Change the orientation of the player<br><br>
///
/// \param size CGSize
///
/// \param withTransitionCoordinator coordinator 
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;

/// Get all the supported orientation<br><br>
///
/// \returns  .AllButUpsideDown
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;

/// Fired up when the view disapears<br><br>
///
/// Destroy the player after it
- (void)viewDidDisappear:(BOOL)animated;
@end


@interface UIColor (SWIFT_EXTENSION(SambaPlayer))
@end


@interface UIImage (SWIFT_EXTENSION(SambaPlayer))

/// Tint, Colorize image with given tint color<br><br>
///
/// This is similar to Photoshop's "Color" layer blend mode<br><br>
///
/// This is perfect for non-greyscale source images, and images that have both highlights and shadows that should be preserved<br><br>
///
/// white will stay white and black will stay black as the lightness of the image is preserved<br><br>
///
/// <img src="http://yannickstephan.com/easyhelper/tint1.png" height="70" width="120"/>

/// <em>To</em>
///
/// <img src="http://yannickstephan.com/easyhelper/tint2.png" height="70" width="120"/>

/// \param tintColor UIColor
///
/// \returns  UIImage
- (UIImage * _Nonnull)tintPhoto:(UIColor * _Nonnull)tintColor;

/// Tint Picto to color
///
/// \param fillColor UIColor
///
/// \returns  UIImage
- (UIImage * _Nonnull)tintPicto:(UIColor * _Nonnull)fillColor;
@end

#pragma clang diagnostic pop
