//
//  DLFinshTableViewCell.h
//  DownLoadTest
//
//  Created by 李五民 on 15/10/24.
//  Copyright © 2015年 李五民. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"

@interface DLFinshTableViewCell : SWTableViewCell

- (void)configViewWithDownloadName:(NSString *)downloadName;

@end
