//
//  ITExperimentalViewController.h
//  iTransmission
//
//  Created by Mike Chen on 10/23/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ITSidebarItemDatasource.h"

@interface ITExperimentalViewController : UIViewController <ITSidebarItemDatasource>
@property (nonatomic, strong) ITSidebarItem *sidebarItem;

@end
