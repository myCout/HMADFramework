//
//  CTAnalysisService.h
//  CTAnalysisSDK
//


#import <Foundation/Foundation.h>

@interface CTAnalysisService : NSObject
//Advice calls once on app running.
+ (void)analysisWithSlot_id:(NSString *)slot_id;
//Get SDK Version.
+(NSString*)getSDKVersion;
@end
