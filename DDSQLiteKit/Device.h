//
//  Device.h
//  DDSQLiteKit
//
//  Created by Diaoshu on 15-2-4.
//  Copyright (c) 2015年 DDKit. All rights reserved.
//

#import "SQLitePersistentObject.h"

@interface Device : SQLitePersistentObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, strong) NSNumber *price;

@end
