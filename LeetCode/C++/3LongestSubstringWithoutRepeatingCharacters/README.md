# 3. Longest Substring Without Repeating Characters
Editor: Kuang(kuang.work@gmail.com)

**This is just a note during my LeetCode pratice**

## Data Structure

### std::map

**Editor Note**
```
#include <map> // Which is necessary for *map* using.
using namespace std;
```

Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.

In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. The types of key and mapped value may differ, and are grouped together in member type value_type, which is a pair type combining both:

```sh 
typedef pair<const Key, T> value_type;
```

Internally, the elements in a map are always sorted by its key following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).

*map containers are generally slower than unordered_map containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.*<font color=red>*Comment* According to the result of leetcode, **map** run faster than **unordered_map** in this case.*Comment*Maybe I should use hashtable to get a better performance.</font>

*The mapped values in a map can be accessed directly by their corresponding key using the bracket operator ((operator[]).*

Maps are typically implemented as binary search trees.

### std::unordered_map
```
template < class Key,                                    // unordered_map::key_type
           class T,                                      // unordered_map::mapped_type
           class Hash = hash<Key>,                       // unordered_map::hasher
           class Pred = equal_to<Key>,                   // unordered_map::key_equal
           class Alloc = allocator< pair<const Key,T> >  // unordered_map::allocator_type
           > class unordered_map;
```

Unordered maps are associative containers that store elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys.

In an unordered_map, the key value is generally used to uniquely identify the element, while the mapped value is an object with the content associated to this key. Types of key and mapped value may differ.

Internally, the elements in the unordered_map are not sorted in any particular order with respect to either their key or mapped values, but organized into buckets depending on their hash values to allow for fast access to individual elements directly by their key values (with a constant average time complexity on average).

*unordered_map containers are faster than map containers to access individual elements by their key, although they are generally less efficient for range iteration through a subset of their elements.*

*Unordered maps implement the direct access operator (operator[]) which allows for direct access of the mapped value using its key value as argument.*

Iterators in the container are at least forward iterators.

#### Container properties
Associative
Elements in associative containers are referenced by their key and not by their absolute position in the container.

Unordered
Unordered containers organize their elements using hash tables that allow for fast access to elements by their key.

Map
Each element associates a key to a mapped value: Keys are meant to identify the elements whose main content is the mapped value.

Unique keys
No two elements in the container can have equivalent keys.

Allocator-aware
The container uses an allocator object to dynamically handle its storage needs.

## Algorithm

Sliding Window