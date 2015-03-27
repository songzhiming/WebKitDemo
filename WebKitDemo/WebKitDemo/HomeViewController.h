//
//  HomeViewController.h
//  WebKitDemo
//
//  Created by 宋志明 on 15-3-27.
//  Copyright (c) 2015年 songzm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface HomeViewController : UIViewController<WKNavigationDelegate>
{
    WKWebView *webView;
    __weak IBOutlet UIProgressView *homeProgressView;
}

@end
