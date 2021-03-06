//
//  ALUtilityClass.h
//  ChatApp
//
//  Copyright (c) 2015 AppLozic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ALChatLauncher.h"
#import "ALChatLauncher.h"

@interface ALUtilityClass : NSObject

+ (NSString *) formatTimestamp:(NSTimeInterval) timeInterval toFormat:(NSString *) forMatStr;

+ (NSString *)generateJsonStringFromDictionary:(NSDictionary *)dictionary;

+(UIColor*)colorWithHexString:(NSString*)hex;

+(id)parsedALChatCostomizationPlistForKey:(NSString *)key;

+ (BOOL)isToday:(NSDate *)todayDate;

+ (NSString*) fileMIMEType:(NSString*) file;

+(CGSize)getSizeForText:(NSString *)text maxWidth:(CGFloat)width font:(NSString *)fontName fontSize:(float)fontSize;

+(void)displayToastWithMessage:(NSString *)toastMessage;


+(void)thirdDisplayNotificationTS:(NSString *)toastMessage andForContactId:(NSString *)contactId withGroupId:(NSNumber*) groupID delegate:(id)delegate;
+(UIView *)setStatusBarStyle;

+(NSString *)getNameAlphabets:(NSString *)actualName;
+(NSString *)getFileNameWithCurrentTimeStamp;
+(UIImage *)getImageFromFramworkBundle:(NSString *) UIImageName;

@property (nonatomic, strong) NSString *msgdate;
@property (nonatomic, strong) NSString *msgtime;

-(void)getExactDate:(NSNumber *)dateValue;
+(UIImage *)setVideoThumbnail:(NSString *)videoFilePATH;
+(UIImage *)subProcessThumbnail:(NSURL *)url;
+(void)showAlertMessage:(NSString *)text andTitle:(NSString *)title;
+(UIImage *)getNormalizedImage:(UIImage *)rawImage;
+(BOOL)isThisDebugBuild;

@end
