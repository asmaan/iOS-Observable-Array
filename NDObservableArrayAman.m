//
//  NDObservableArray.m
//  CPT Analytics
//
//  Created by A S Maan on 4/1/15.
//
//

#import "NDObservableArrayAman.h"

@implementation NDObservableArrayAman
- (id)init
{
    self = [super init];
    if (self)
    {
        self.objects = [[NSMutableArray alloc] init];
    }
    return self;
}
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state objects:(id __unsafe_unretained [])buffer count:(NSUInteger)len
{
    return [self.objects countByEnumeratingWithState:state objects:buffer count:len];
}
- (id)initWithCoder:(NSCoder *)aDecoder
{
    if ((self = [self init]))
    {
        self.objects = [aDecoder decodeObjectForKey:@"objects"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:_objects forKey:@"objects"];
}
- (id)initWithCapacity: (NSUInteger)numItems
{
    self.objects = [[NSMutableArray alloc] initWithCapacity:numItems];
    return self;
}
- (id)initWithArray: (NSArray *)array
{
    self.objects = [[NSMutableArray alloc] initWithArray:array];
    return self;
}
- (NSUInteger)countOfObjects
{
    return self.objects.count;
}
- (id)objectInObjectsAtIndex: (NSUInteger)index
{
    return [self.objects objectAtIndex:index];
}
- (NSArray *)objectsAtIndexes: (NSIndexSet *)indexes
{
    return [self.objects objectsAtIndexes:indexes];
}
- (void)insertObject: (id)object
    inObjectsAtIndex: (NSUInteger)index
{
    [self.objects insertObject:object atIndex:index];
}
- (void)insertObjects: (NSArray *)objectsArray
            atIndexes: (NSIndexSet *)indexes
{
    [self.objects insertObjects:objectsArray atIndexes:indexes];
}
- (void)removeObjectFromObjectsAtIndex: (NSUInteger)index
{
    [self.objects removeObjectAtIndex:index];
}
- (void)removeObjectsAtIndexes: (NSIndexSet *)indexes
{
    [self.objects removeObjectsAtIndexes:indexes];
}
- (void)replaceObjectAtIndex: (NSUInteger)index
                  withObject: (id)anObject
{
    [self.objects replaceObjectAtIndex:index withObject:anObject];
}
#pragma mark - Set KVO Methods

- (NSEnumerator *)enumeratorOfObjects
{
    return [self.objects objectEnumerator];
}

- (void)addObject:(id)object
{
    [self.objects addObject:object];
}

- (void)removeObject: (id)object
{
    [self.objects removeObject:object];
}
@end
