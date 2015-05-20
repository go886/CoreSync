//
//  NSDictionary+CoreSync.h
//  CoreSync
//
//  Created by Janum Trivedi on 5/17/15.
//  Copyright (c) 2015 Styled Syntax. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CoreSyncTransaction.h"

@interface NSMutableDictionary (CoreSync)

- (void)applyTransaction:(CoreSyncTransaction *)transaction;

- (NSString *)json;

+ (NSDictionary *)dictionaryWithJSON:(NSString *)json;

@end