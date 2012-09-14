//
//  HelloWorldViewController.h
//  Hello-World
//
//  Created by oz on 14/09/12.
//  Copyright (c) 2012 oz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
@property (copy, nonatomic) NSString *userName;
@end
