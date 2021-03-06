//
//  ContactFavoriteManager.h
//  ACE
//
//  Created by Karen Muradyan on 3/7/16.
//  Copyright © 2016 VTCSecure. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContactFavoriteManager : NSObject


@property (strong, nonatomic) NSString* databasePath;

+ (ContactFavoriteManager *)sharedInstance;

- (void)createFavoriteTablesInFriendListByPath;
- (void)updateContactFavoriteOptionByName:(NSString*)name contactAddress:(NSString*)sipURI andFavoriteOptoin:(int)isFavorite;
- (void)updateContactFavoriteOptionByRefKey:(NSString*)refKey andFavoriteOptoin:(int)isFavorite;
- (int)findContactIDWithRefKey:(NSString*)refKey;
- (BOOL)isContactFavoriteWithName:(NSString*)name andAddress:(NSString*)sipURI;
- (BOOL)isContactFavoriteWithRefKey:(NSString*)refKey;
- (void)deleteContactFavoriteOptionWithName:(NSString*)name andAddress:(NSString*)sipURI;
- (int)findContactIDWithSIPURI:(NSString*)sipAddress;

@end
