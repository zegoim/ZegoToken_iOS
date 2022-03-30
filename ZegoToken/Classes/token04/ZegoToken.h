//
//  ZegoToken.h
//  MakeToken
//
//  Created by zavierzhang on 2022/3/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ZegoErrorCode) {
    success = 0,  // Obtain authentication token successfully
    appIDInvalid = 1,  // wrong appID parameter
    userIDInvalid = 3,  // wrong userID parameter
    secretInvalid = 5,  // wrong secret parameter
    effectiveTimeInSecondsInvalid = 6   // wrong effectiveTimeInSeconds parameter
};


@interface ErrorInfo : NSObject

@property (nonatomic, assign) ZegoErrorCode errorCode;
@property (nonatomic, copy) NSString *errorMessage;

@end


@interface ZegoTokenResult : NSObject

@property (nonatomic, copy) NSString *token;
@property (nonatomic, strong) ErrorInfo *errorInfo;

@end

@interface ZegoToken : NSObject

+ (ZegoTokenResult*)generateToken:(unsigned int)appid
                           userID:(NSString*)userID
                           secret:(NSString*)secret;

+ (ZegoTokenResult*)generateToken:(unsigned int)appid
                           userID:(NSString*)userID
                           secret:(NSString*)secret
           effectiveTimeInSeconds:(long long)effectiveTimeInSeconds
                          payload:(NSString*)payload;

@end

NS_ASSUME_NONNULL_END

