/***
 * Excerpted from "Core Data in Objective-C, Third Edition",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material,
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose.
 * Visit http://www.pragmaticprogrammer.com/titles/mzcd3 for more book information.
***/
typedef void (^ExportCompletionBlock)(NSData *jsonData, NSError *error);

@interface PPRExportOperation : NSOperation

//@property (nonatomic, copy) ExportCompletionBlock completionBlock;

- (id)initWithRecipe:(NSManagedObject*)recipe;

@end
