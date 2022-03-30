//
//  ZEGOViewController.m
//  ZegoToken
//
//  Created by LarryLuo on 03/29/2022.
//  Copyright (c) 2022 LarryLuo. All rights reserved.
//

#import "ZEGOViewController.h"
#import <ZegoToken/ZegoToken.h>

@interface ZEGOViewController ()

@end

@implementation ZEGOViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    uint appID = 1234567890; // your appid
    NSString *userID = @"ID123";
    NSString *server_secret = @"your_server_secret";
    ZegoTokenResult *tokenResult = [ZegoToken generateToken:appID
                                                     userID:userID
                                                     secret:server_secret];
    
    NSLog(@"\n=========\nErrorCode: %lul,\nErrorMessage:%@ \n Token:%@\n=========", tokenResult.errorInfo.errorCode, tokenResult.errorInfo.errorMessage, tokenResult.token);
}


@end
