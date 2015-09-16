

#pragma mark Class Interface

@interface NDObservableArrayAman : NSObject<
NSFastEnumeration,
NSCoding>
{
}


#pragma mark - Properties

@property (nonatomic, strong) NSMutableArray *objects;


#pragma mark - Constructors

- (id)init;
- (id)initWithCapacity: (NSUInteger)numItems;
- (id)initWithArray: (NSArray *)array;


#pragma mark - Array KVO Methods

- (NSUInteger)countOfObjects;
- (id)objectInObjectsAtIndex: (NSUInteger)index;
- (NSArray *)objectsAtIndexes: (NSIndexSet *)indexes;

- (void)insertObject: (id)object
    inObjectsAtIndex: (NSUInteger)index;
- (void)insertObjects: (NSArray *)objectsArray
            atIndexes: (NSIndexSet *)indexes;

- (void)removeObjectFromObjectsAtIndex: (NSUInteger)index;
- (void)removeObjectsAtIndexes: (NSIndexSet *)indexes;

- (void)replaceObjectAtIndex: (NSUInteger)index
                  withObject: (id)anObject;


#pragma mark - Set KVO Methods

- (NSEnumerator *)enumeratorOfObjects;

- (void)addObject: (id)object;

- (void)removeObject: (id)object;


@end // @interface LBObservableArray
