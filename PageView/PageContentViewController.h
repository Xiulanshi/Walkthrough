//
//  PageContentViewController.h
//  PageView
//
//  Created by Xiulan Shi on 2/24/16.
//  Copyright © 2016 Xiulan Shi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;


@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
