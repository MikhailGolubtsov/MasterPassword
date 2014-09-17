//
//  MPAppDelegate_Shared.h
//  MasterPassword
//
//  Created by Maarten Billemont on 24/11/11.
//  Copyright (c) 2011 Lyndir. All rights reserved.
//

#import "MPEntities.h"

#if TARGET_OS_IPHONE

@interface MPAppDelegate_Shared : PearlAppDelegate
#else
@interface MPAppDelegate_Shared : NSObject <PearlConfigDelegate>
#endif

@property(strong, nonatomic) MPKey *key;
@property(strong, nonatomic) NSManagedObjectID *activeUserOID;

+ (instancetype)get;

- (MPUserEntity *)activeUserForMainThread;
- (MPUserEntity *)activeUserInContext:(NSManagedObjectContext *)context;
- (void)setActiveUser:(MPUserEntity *)activeUser;

- (BOOL)isPurchased:(NSString *)productIdentifier;

@end
