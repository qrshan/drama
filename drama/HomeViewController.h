//
//  HomeViewController.h
//  drama
//
//  Created by qrs on 14-8-9.
//  Copyright (c) 2014年 qrs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>
@property(nonatomic, retain)NSMutableDictionary *dramas;
@property(nonatomic, retain)NSArray *datasource;

@end
