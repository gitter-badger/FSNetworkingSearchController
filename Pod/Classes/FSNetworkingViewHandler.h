//
//  FSNetworkingViewHandler.h
//  FSNetworkingSearchController
//
//  Created by alexruperez on 30/3/15.
//
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, FSNetworkingImageSize) {
    FSNetworkingImageSize32 = 32,
    FSNetworkingImageSize44 = 44,
    FSNetworkingImageSize64 = 64,
    FSNetworkingImageSize88 = 88
};

typedef void(^FSNSCVenueBlock)(NSDictionary *venue, UIImage *categoryImage);

@interface FSNetworkingViewHandler : NSObject <UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchResultsUpdating>

@property (copy, nonatomic) FSNSCVenueBlock selectHandler;

@property (assign, nonatomic) BOOL shouldHideRefreshControl;

@property (assign, nonatomic) CGFloat cellHeight;

@property (assign, nonatomic) UIViewContentMode imageContentMode;

@property (assign, nonatomic) FSNetworkingImageSize imageSize;

#pragma mark - Public Methods

- (IBAction)reloadData:(id)sender;

@end