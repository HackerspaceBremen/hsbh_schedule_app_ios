#import <Foundation/Foundation.h>


@interface NSString (NSString_AdditionEmpty)

- (NSString*) trimmedString;
- (NSString*) normalizedString;
- (NSString*) placeHolderWhenEmpty:(NSString*)placeholder;
- (NSString*) httpUrlString;
+ (NSString*) placeHolder:(NSString*)placeholder forEmptyString:(NSString*)string;


+ (BOOL) isEmpty:(NSString*)str;
- (BOOL) isEmpty;
- (NSUInteger) integerValueFromHex;
- (BOOL) containsString:(NSString *)stringValue;
- (BOOL) containsString:(NSString *)stringValue ignoringCase:(BOOL)flag;

- (NSString *) sentenceCapitalizedString; // sentence == entire string
- (NSString *) realSentenceCapitalizedString; // sentence == real sentences
- (NSString *) wordCapitalizedString;
- (NSString *) stringByStrippingHTML;
@end
