# Programming Abstractions in C++

- [Programming Abstractions in C++](#programming-abstractions-in-c)

  - [Chapter 1. An overview of C++](#chapter-1-an-overview-of-c)
    - [1.1 What is `C++`?](#11-what-is-c)
    - [1.2 `C++` Basics](#12-c-basics)
      - [**Declarations and definitions**](#declarations-and-definitions)
      - [**namespace**](#namespace)
    - [1.3 Functions](#13-functions)
  - [Chapter 2. Data Types in C++](#chapter-2-data-types-in-c)
    - [2.1 `Strings`](#21-strings)
    - [2.2 `const`](#22-const)
      - [**The keyword const**](#the-keyword-const)
      - [**A const pointer** - (Read right to left)](#a-const-pointer---read-right-to-left)
      - [**Challenge Mode**](#challenge-mode)
  - [Chapter 3. Standard C++ Programming](#chapter-3-standard-c-programming)
    - [3.1 Templates](#31-templates)
      - [**Generic Thinking** - Lift the concept](#generic-thinking---lift-the-concept)
      - [**Implicit interface**](#implicit-interface)
      - [**Predicate**: takes *a number of* arguments and returns a `boolean`](#predicate-takes-a-number-of-arguments-and-returns-a-boolean)
    - [3.2 Standard C++ Iterators](#32-standard-c-iterators)
      - [**Iterator usages**](#iterator-usages)
      - [**`Const` Iterators**](#const-iterators)
    - [3.3 STL Algorithms](#33-stl-algorithms)
      - [**Why use STL algorithms**?](#why-use-stl-algorithms)
    - [3.4 Neat features](#34-neat-features)
    - [3.5 Wrapping up the STL](#35-wrapping-up-the-stl)
  - [Chapter 4. Using Abstract Data Types (STL Collections)](#chapter-4-using-abstract-data-types-stl-collections)
    - [4.1 `Vector`](#41-vector)
      - [**out of bound access**](#out-of-bound-access)
    - [4.2 `LinkedList`](#42-linkedlist)
    - [4.3 `Stack`](#43-stack)
      - [**Stack limitations/idioms**](#stack-limitationsidioms)
    - [4.4 `Queues`](#44-queues)
    - [4.5 `Sets` and `Maps`](#45-sets-and-maps)
      - [**ordered V.S. unordered**](#ordered-vs-unordered)
      - [**Stanford C++ sets and maps**](#stanford-c-sets-and-maps)
      - [**Multimaps**](#multimaps)
      - [**Map iterators**](#map-iterators)
  - [Chapter 5. Introduction to Recursion](#chapter-5-introduction-to-recursion)
  - [Chapter 6. Recursion Procedures](#chapter-6-recursion-procedures)
  - [Chapter 7. Backtracking Algorithms](#chapter-7-backtracking-algorithms)
    - [7.1 Exhaustive search](#71-exhaustive-search)
    - [7.2 Backtracking](#72-backtracking)
  - [Chapter 8. Algorithm Analysis](#chapter-8-algorithm-analysis)
  - [Chapter 9. Classes and Objects](#chapter-9-classes-and-objects)
    - [9.1 OOP Basics](#91-oop-basics)
      - [**Elements of a class**](#elements-of-a-class)
      - [**Move Semantics** (C++17 feature)](#move-semantics-c17-feature)
    - [9.2 Inheritance](#92-inheritance)
      - [**When to use templates and derived classes**?](#when-to-use-templates-and-derived-classes)
      - [**Public, private and protected**](#public-private-and-protected)
      - [**More common form of polymorphism**](#more-common-form-of-polymorphism)
    - [9.3 Operator Overloading](#93-operator-overloading)
  - [Chapter 11. Linear Structures](#chapter-11-linear-structures)
    - [11.1 Pointer](#111-pointer)
    - [11.2 LinkedList](#112-linkedlist)
    - [11.3 Priority Queues and Heaps](#113-priority-queues-and-heaps)
  - [Chapter 12. Implementing Maps](#chapter-12-implementing-maps)
  - [Chapter 13. Trees](#chapter-13-trees)
    - [**Terminology**](#terminology)
    - [13.1 Binary trees](#131-binary-trees)
      - [**Traversal**](#traversal)
    - [13.2 Binary search trees (BSTs)](#132-binary-search-trees-bsts)
    - [13.3 Advanced trees](#133-advanced-trees)
      - [**Red-Black trees**](#red-black-trees)
      - [**Tries (Prefix trees)**](#tries-prefix-trees)
  - [Chapter 14. Expresion Trees](#chapter-14-expresion-trees)
  - [Chapter 15. Sets](#chapter-15-sets)
  - [Chapter 16. Graphs](#chapter-16-graphs)
    - [16.1 Basics of graph](#161-basics-of-graph)
      - [**Terminology of graph**](#terminology-of-graph)
    - [16.2 DFS and BFS](#162-dfs-and-bfs)
      - [*DFS pseudocode*](#dfs-pseudocode)
      - [*BFS pseudocode*](#bfs-pseudocode)
    - [16.3 Dijkstra's algorithm](#163-dijkstras-algorithm)
      - [**Dijkstra's runtime**](#dijkstras-runtime)
    - [16.4 A\* algorithm](#164-a-algorithm)
    - [16.5 Spanning tree](#165-spanning-tree)
    - [16.6 Implementing a graph](#166-implementing-a-graph)
  - [Chapter 17. Hashing](#chapter-17-hashing)
    - [17.1 What is hashing?](#171-what-is-hashing)
    - [17.2 Rehashing](#172-rehashing)
    - [17.3 Hash map](#173-hash-map)
    - [17.4 Hashing structs/objects](#174-hashing-structsobjects)
  - [18. Sorting](#18-sorting)
    - [18.0 Bogo sort](#180-bogo-sort)
    - [18.1 Selection sort](#181-selection-sort)
    - [18.2 Insertion sort](#182-insertion-sort)
    - [18.3 Merge sort](#183-merge-sort)
  - [**RAII** (Resource Acquisition Is Initialization) - Scope based memory management](#raii-resource-acquisition-is-initialization---scope-based-memory-management)
    - [Smart Pointers](#smart-pointers)
  - [Multi-threading](#multi-threading)

## Chapter 1. An overview of C++

### 1.1 What is `C++`?

```cpp
#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!" << endl;
}
```

`std` is the name of the top-level `namespace` where all symbols defined in the C++ standard library are placed.

---

### 1.2 `C++` Basics

#### **Declarations and definitions**

+ A *declaration* is a statement that introduces a name into a scope. A declaration that fully specifies the entity declared is called a *definition*.
+ Every definition is also a declaration, but only some declarations are also definitions.
+ A declaration that isn't a definition simply tells how you can use a name; it is just an interface and doesn't allocate memory or specify a function body.
+ You can declare something as often as you like as long as you do so *consistently*. But you can NOT define something twice.
+ A `const` variable requires an initializer when they are declared. It is almost always a good idea to initialize variables, an uninitialized variable is a recipe for obscure bugs.

---

#### **namespace**

It's a way to group together your lines of code/classes into a single namespace that you can reference later.

Careful with `using` keyword.

```cpp
using namespace std;
int main() {
   vector<int> v{1,2,3};
   int count = 0;
   cout << count(v.begin(), v.end(), 1); // count how many 1 in v
   return 0;
}
```

Surprisingly, this will not work although we are `using namespace std` because the compiler will take `count` as an local integer.

---

### 1.3 Functions

+ ***Value semantics***: In Java and C++, when variables are passed as parameters, their values are **copied**.
+ ***Reference semantics***: If you declare a parameter with an `&` after its **type**, it will link the function to the same place in memory i.e. modifying a parameter *will* affect the variable passed in. Instead of `return`, this is a different way of sending information out of a function.

> **Properties of a good function:**
>
> 1. Fully performs a single coherent task;
> 2. Does not do too large a share of the work;
> 3. Is not unnecessarily connected to other functions;
> 4. The **main** function should be a concise summary of the overall program.

---

## Chapter 2. Data Types in C++

### 2.1 `Strings`

+ Concatenate using `+` (or `+=`)

```cpp
string s1 = "Ch";
s1 += "eng";
```

+ Compare using relational operators (ASCII ordering)

```cpp
string s2 = "Cynthia";
if (s1 > s2 && != "Joe"){  //true
    ...
}
```

+ C++ strings are mutable and can be changed.

### 2.2 `const`

#### **The keyword const**

+ you have to initialize a `const` variable simultaneously with its declaration, because you are not allowed to modify it after you've declared it. In constructors, you can use *initialization list* to make sure you can initialize a `const` object well.

```cpp
const int a;
a = 3; // compile error, not allowed
const int = 3; // OK
```

+ a const reference parameter can't be modified by the function:

```c++
void foo(const BankAccount& ba) {
   ...
}
```

+ a const member function can't change the object's state:

```c++
class BankAccount { ...
   double getBalance() const;
}
```

#### **A const pointer** - (Read right to left)

```cpp
//constant pointer to a non-constant int
int* const p;
// non-constant pointer to a constant int
const int* p;
int const* p;
// constant pointer to a constant int
const int* const p;
int const* const p;
```

#### **Challenge Mode**

```cpp
const int* const myClassMethod(const int* const &param) const;
```

1. this function takes in a const pointer (passing by reference) pointing to a const int
2. it returns a const pointer pointing to a const int
3. it is also a const member function, i.e. this function can NOT modify any variables of the `this` instance

---

## Chapter 3. Standard C++ Programming

### 3.1 Templates

A classic `C` type solution (to the problem of more `min` functions that take in different data types) would be to write two overloaded functions.

The problem is you have multiple copies of essentially the same function. Everytime you want to add a new type, you need to add a new function. If you edit the function slightly, you need to edit it in each version manually.

**Templates** are a blueprint of a function that let you use the same function for a variety of types. We can give that blueprint to the compiler in the form of a `template function` by telling it what specific parts need to get replaced. Just before the function we specify a `template parameter`.

```cpp
template <typename T>   // tell compiler T is a generic type
T min(T a, T b) {
   return (a < b) ? a : b;
}

int a = 3, b = 9;       
// we can indicate the type by angle brackets after the function name
int c = min<int>(a, b); // this is an explicit initialization, you can also just use int c = min(a, b); 
```

---

**Class Templates**: The idea with class templates is the same as function templates.

```cpp
// ArrayStack.h
template <typename T>
class ArrayStack {
public:
   void push(T n);
}

// have to be under the same `.h` file at the same time!
template <typename T>
void ArrayStack<T>::push(T n) {
   elements[size] = n;
   size++;
}
```

```cpp
// this is also possible, there is no semantic difference between class and typename in a template-parameter.
template <class T, class Container = std::vector<T>>
```

---

#### **Generic Thinking** - Lift the concept

Looking at the assumptions you place on the parameters, and questioning if they are really necessary. - Can you solve a more general problem by relaxing the constraints?

*EX)*: How many times does the [`type`] [`val`] appear in a [`collection`] of [`DataType`]?

```cpp
template <typename Collection, typename DataType>
// const here makes sure this function works with both const and non-const collections
int countOccurences(const Collection<DataType>& list, DataType val) {
   int count = 0;
   for (auto iter = list.begin(); iter != list.end(); ++iter) {
      if(*iter == val) ++count;
   }
   return count;
}
```

We can even give control of where the start and end should be.

```cpp
template <typename InputIterator, typename DataType>
// const here makes sure this function works with both const and non-const collections
int countOccurences(InputIterator begin, InputIterator end, DataType val) {
   int count = 0;
   for (auto iter = begin; iter != end; ++iter) {
      if(*iter == val) ++count;
   }
   return count
} 
```

---

#### **Implicit interface**

Basically, if we replace all instances of `T` with the actual type we want to use, would it compile? - If the answer is yes, it is valid to use a templatized function.

Each template parameter must have the operations the function assumes it has!

+ `InputIterator` **must support**
   1. copy assignment (`iter = begin`)
   2. prefix operator (`++iter`)
   3. comparable to end (`begin != end`)
   4. dereference operator (`*iter`)

+ `DataType` **must support** comparable to `*iter`

---

#### **Predicate**: takes *a number of* arguments and returns a `boolean`

```cpp
//Unary predicate (one argument)
bool isLessThanFive(int val) {
   return val < 5;
}

template <typename InputIterator, typename UniaryPredicate>
int countOccurences(InputIterator begin, InputIterator end, UniaryPredicate predicate) {
   int count = 0;
   for (auto iter = begin; iter != end; ++iter) {
      if (predicate(*iter)) ++count;
   }
   return count;
}

int main() {
   vector<int> vec {1,3,4,5,6,7,8,9};
   int count = countOccurences(vec.begin(), vec.end(), isLessThanFive);
}
```

But what if we want information not available at compiling time, for example, we want user input? Adding an extra parameter to the predicate won't work since the function must be a unary predicate here.

```cpp
// this code won't work
template<typename T>
inline bool greaterThan(T val, T limit) {
   return val >= limit;
}

int main() {
   int limit = getInteger("Minimum for A?");
   vector<int> grades = readStudentGrades();
   // compiler error, greaterThan not a unary predicate function
   cout << countOccurences(grades.begin(), grades.end(), greaterThan);
}
```

**Pre-C++ solution: function objects ("functors")**:

```cpp
class GreaterThan {
   public:
      GreaterThan(int limit) : limit(limit) {}
      bool operator ()(int val) (return val >= limit);
   private:
   int limit;
}

int main() {
   int limit = getInteger("Minimum for A?");
   vector<int> grades = readStudentGrades();
   // key idea: create an object which can act like a function since it has an () operator
   GreaterThan func(limit);
   cout << countOccurences(grades.begin(), grades.end(), func);
}

```

**Actual C++ solution - `lambda`**:

```python
lessThanPy = lambda x, y: x < y # Recall Python
```

```cpp
// Anatomy of a Lambda function
// The return-value is optional, if omitted it's just like an auto return value
// It creates a class for you but you don't know the class name
auto func = [capture-clause](parameters) -> return-value {
   // body
};

int main() {
   int limit = getInteger("Minimum for A?");
   vector<int> grades = readStudentGrades();
   // Parameters of the function: you can use auto to templatize the function
   auto func = [limit](auto val) {return val >= limit;};
   countOccurrences(grades.begin(), grades.end(), func); // works perfectly!
}

// You can also capture by reference
set<string> teas{"black","green","oolong"};
string banned = "boba";
auto likedByCheng = [&teas, banned](auto type) {
   return teas.count(type) && type != banned;
};

```

---

### 3.2 Standard C++ Iterators

**Motivation**: How do we iterate over associative containers (map or set) which have no notion of a sequence/indexing?

Iterators are a generalization of indices, it store a position within a collection, and allows traversal over any collection, even *unordered* ones. This means taht we can use the exact same code to perform a logical action, regardless of the data structure!

Iterators let us view a non-linear collection (associative containers) in a linear manner. Consider a `set` named mySet:

+ `mySet.begin()` points to the start of the sequence, and it is the `iterator` type defined in the `set<int>` class!
+ We can get the value of an iterator by using the dereference `*` operator.
+ We advance the iterator one by using the `++` operator (***prefix***).
+ The `end()` iterator is the one **passed** the end of collection.

```cpp
using namespace std;

set<int> mySet(10);
for (int i = 0; i < mySet.size(); i++) {
   mySet.insert(i);
}

// points to the first element of the vector
set<int>::iterator iter = mySet.begin();
while (iter != mySet.end()) {
   cout << *iter << ' ';
   ++iter;
}
cout << endl;

// alternatively using a for loop

set<int>:: iterator iter2;
// in other contexts there is a difference between ++i and i++, but not for loops.
for (iter2 = mySet.begin(); iter2 != mySet.end(); ++iter2) {
   cout << *iter2 << ' ';
}
cout << endl;
```

Most standard collections operate with iterators instead of indices, iterator is a standard interface for looping through things in a very powerful way.

---

#### **Iterator usages**

1. we can use iterators in algorithms like sort to sort a vector

   ```cpp
   std:sort(vec.begin(), vec.end());
   ```

2. we can use `lower_bound` and `upper_bound` to restrict the iteration range.

   ```cpp
   set<int> mySet{1, 3, 57, 137, 357};
   // lower_bound returns the first element that is greater or equal to the key
   set<int>::iterator iter = mySet.upper_bound(1);
   // upper_bound returns the first element that is greater to the key
   set<int>::iterator end = mySet.upper_bound(57);
   while (iter != end) {
      cout << *iter << endl;
      ++iter;
   }
   ```

3. *range based* `for` loop is (more or less) a shorthand for iterator code

   ```cpp
   map<string, int> myMap;
   for (auto thing : myMap) {
      doSomething(thing.first, thing.second);
   }   
   ```

4. there are **5** different types of iterators!
   All iterators share a few **common traits** like: 1. can be created from existing iterator; 2. can be advanced using `++`; 3. can be compared with `==` and `!=`.

   + **Input**: for *sequential, single-pass* input, read only.
   + **Output**: for *sequential, single-pass* output, write only.
   + **Forward**: can read from and write to (if *NOT* `const` iterator), except can make *multiple* passes.
   + **Bidirectional**: same as forward iterators except it can also go backwards with drecrement operator `--`.
   + **Random Access**: same as bidirectional iterators except can be incremented/decremented by `arbitray` amounts/numbers using `+` and `-`.
     + use cases: std::vector, std::deque, std:: string and pointers!

---

#### **`Const` Iterators**

+ remember that iterators act like pointers
+ `const vector<int>::iterator itr` however acts like `int* const itr`, in which the iterator itself can not be modified
+ to make an iterator read only, define a new `const_iterator`

   ```cpp
   vector<int> vec{1,2,3,4};
   const vector<int>::iterator itr = vec.begin();
   ++itr;   // doesn't compile
   *itr = 15;  // compiles

   vector<int>::const_iterator itr2 = vec.begin();
   ++itr2; // OK! changing iter
   *itr2 = 5; // BAD! can't change value of iter pointing to
   int value = *itr2; // OK! reading from iter
   ```

---

### 3.3 STL Algorithms

#### **Why use STL algorithms**?

1. *Abstraction*: perform algorithms without looking at elements.
2. *Generic*: operations are based on ranges, not containers.
3. *Correct*: heavily tested, most definitely correct.
4. *Heavily optimized*: performs optimizations using features we haven't/won't even learn about.

+ `std::sort()` is $O(NlogN)$ algorithm.
+ `std::stable_partition()`: separate the container by using predicate (true/false), and the order preserved within each true or false group. the return value is the iterator pointer to that partition point.
+ `std:copy_if()` should work along with an iterator that can expand the container. `back_inserter(Container)` will take the container and spit out an special iterator that can expand the container.

   ```cpp
   std::string dep = "CS";
   auto isDep = [dep](auto element) {
      return element.name.size() > 2 && 
            element.name.substr(0, 2) == dep;
   }
   std::copy_if(courses.begin(), courses.end(),
               back_inserter(csCourses), isDep); // copy to csCourses
   ```

+ **erase-remove idiom**: `.erase()` will erase every trash between iterator and end, `.remove_if()` returns iterator to beginning of trash (not actually removing).

   ```cpp
   vec.erase(std::remove_if(vec.begin(), vec.end(), predicate), vec.end());
   ```

+ for `sets` and `maps`, the find() member function is faster than the std find function.

---

### 3.4 Neat features

`auto` is a C++11 feature that uses **type deduction**, it will ask the compiler to figure out the type for you.

1. use it whenever the type is **obvious** (e.g. iterators)
2. in places where only the compiler knows the type (yes these exist)
3. don't use it when it obviously hurts readability.
4. you can't use `auto` as function parameters, but you can use it as a return type.

`g++ -std=c++11` is a way to set c++ versions when you compile the code.

`C++` has too many ways to `initialize` a variable depending on the type. To solve this, `C++11` adds one more way: ***uniform initialization***. Using the uniform initialization syntax, the initializer list `ctor` is preferred over constructor.

```cpp
int main() {
   vector<int> vec1{3}; // vector = {3}
   vector<int> vec2(3); // vector = {0, 0, 0}
}
```

`C++17` allows structured bindings, allowing you to unpack the variables in a pair.

```cpp
pair<int, int> findPriceRange(int dist) {
   int min = static_cast<int>(dist * 0.08 + 100);
   int max = static_cast<int>(dist * 0.36 + 750);
   return make_pair(min, max);
}

int main() {
   int dist = 6452;
   auto [min, max] = findPriceRange(dist);
   cout << "You can find prices between: " 
<< min << " and " << max << endl;
}
```

---

### 3.5 Wrapping up the STL

A `string` iterator is pointer pointing to string's `char`s.

Before recreating by yourself, looking up to see what tools are already out there.

---

## Chapter 4. Using Abstract Data Types (STL Collections)

**Abstract Data Type (ADT):** A specification of a collection of data and the operations that can be performed on it.

+ Describes *what* collections can do, not *how* it does it.
+ We could say both `Vector` and `LinkedList` implement the operations of the *abstract data type* called **"list"**.

We don't always know exactly how a given collection is implemented internally, and we don't need to.

+ We just need to understand the idea of the collection and what operations it can perform.
+ Each implementation usually has its pros and cons.

---

### 4.1 `Vector`

Why not arrays?

+ Arrays have fixed size and cannot be easily resized;
+ C++ lets you index out of the array bounds (garbage memory) according to the **philosophy of C++**;
+ An array does not support many operations that you'd want:
  + inserting/deleting elements into the front/middle/back of the array;
  + reversing, sorting the elements;
  + searching for a given value, ...

Collections can contain other collections.

#### **out of bound access**

+ `vec.at(i)` throws an exception;
+ `vec[i]` causes undefined behavior, you can't predict it!

`emplace_back()`: designed for large objects. takes multiple arguments, let's the vector create the object inside directly, **no extra copy**. EX):

```cpp
struct President {
   std::string name;
   std::string country;
   int year;
   ...
}

std::vector<President> elections;
elections.emplace_back("Nelson Mandela", "South Africa", 1994);
std::vector<President> reElections;
reElections.push_back(President("Franklin", "the USA", 1936));
```

---

### 4.2 `LinkedList`

For a vector `v`, `v.insert()` and `v.remove()` operations are slower the more elements they need to shift. Thats why we introduce `LinkedList`.

What operations are slow/fast for a linked list to perform? (Ans: **element access**)

---

### 4.3 `Stack`

Stack is a collection based on the principle of adding elements and retrieving them in the opposite order. (LIFO)

Why do we need stack? - Stack appear a lot in computer science.

1. Programming languages and compilers:
   + function calls are placed onto a stack (*call*=`push`, *return*=`pop`)
   + compilers use stacks to evaluate expressions
2. Matching up related pairs of things:
   + find out whether a string is a palindrome
   + examine a file to see if its braces `{}` match
   + convert 'infix' expressions to pre/postfix
3. Sophisticated algorithms:
   + searching through a maze with 'backtracking'
   + many programs use an "undo stack" of previous operations

#### **Stack limitations/idioms**

+ you cannot access a stack's elements by index.
+ to implement `stack`, you just limit the functionality of a vector/deque to only allow `push_back()` and `pop_back()`.

---

### 4.4 `Queues`

Queue retrieves elements in the order they were added (FIFO). Elements are stored in order of insertion but don't have indexes. Can add only to the end of the queue, and can only examine/remove the front.

Why do we need queues? why not just vectors? - no shifting, faster

1. Operating systems
   + queue of print jobs to send to the printer
   + queue of program/processes to be run
   + queue of network data packets to send
2. Programming
   + modeling a line of customers or clients
   + storing a queue of computations to be performed in order
3. Real world examples
   + people on an escalator or waiting in a line
   + cars at gas station (or on an assembly line)

`deque` (pronounced 'deck') is double ended queue that can do everything a `vector` can do. Deques support **fast** `push_front()` or `pop_front()` operations, however for other common operations like element access, vector will always outperform a deque (`deque` slower to access middle elements).

> calling `.insert()` in the middle of the deque *invalidates* all the iterators and references to its elements.
>
> `vector is` the type of sequence that should be used by default, `deque` is the data structure of choice when most insertions and deletions take place at the beginning or at the end of the sequence.
> -- C++ ISO Standard.
>
> `std::stack` and `std::queue` classes are known as ***container adaptors***, the class template acts as a wrapper to the underlying container - **only a specific set of functions is provided.**

---

### 4.5 `Sets` and `Maps`

`std::set<T>` and `std::map<T1, T2>` are ***associative containers***, which can be accessed using the **key** instead of **indexes**. also true for `std::unordered_map<T1,T2>` and `std::unordered_set<T>`.

#### **ordered V.S. unordered**

+ map/set: keys in sorted order, faster to *iterate* through a range of elements.
+ unordered map/set: faster to access *individual* elements by key.

#### **Stanford C++ sets and maps**

+ **Set**: implemented using a linked structure called a ***binary search tree***.
  + fast; elements are stored in sorted order
  + values must have a `<` operation
+ **HashSet**: implemented using a special array called a *hash table*.
  + very fast; elements are stored in *unpredictable order*
  + values must have a hashCode function (provided for most standard types)

*Map/Dictionary* is a collection that stores *pairs*, where each pair consists of a first half called a *key* and a second half called a *value*.
in the stanford C++ library, there are also two map classes which are `Map` and `HashMap`. It requires 2 type parameters: one for the keys, one for values.

```cpp
Map<string, int> votes;
```

#### **Multimaps**

Traditional maps store unique keys, but sometimes we want to allow the map to have the same key pointing to different values.

+ don't have `[]` operator
+ add elements by calling `.insert` on a key value `std::pair`
+ we will have duplicate keys

```cpp
multimap<int, int> myMMap;
myMMap.insert(make_pair(3, 3));
myMMap.insert({3, 12}); // shorter syntax
cout << myMMap.count(3) << endl; //prints 2
```

#### **Map iterators**

Map iterators are slightly different because we have both *keys* and *values*.

The iterator of a `std::map<string, int>` points to a `std::pair<string, int>`.

*Recap*: a pair is simply two objects bundled together.

```cpp
std::pair<string, int> p;
p.first = "Phone number";
p.second = 3482415668;
// quicker ways to make a pair
std::pair<string, int> p2{"Phone number", 3482415668};
std::make_pair("Phone number", 65523232);
```

> when you try to use `*` to dereference a map iterator, you need to use parentheses `()` around `*iter`, which will be like `(*iter).first`.

---

## Chapter 5. Introduction to Recursion

The defination of an operation in terms of itself.
Every recursive algorithm involves at least 2 cases:

+ *Base case*: a simple occurence that can be answered directly.

+ *Recursive case*: a more complex occurence of the problem that cannot be directly answered.

Ask yourself: "How is this task **self-similar**?" - How can I describe this algorithm in terms of a smaller or simpler version of itself?

Recursive thinking: In recursive function calling, it is not that your function goes back to the top, it's that you spawn a new copy of the function.

Be lazy! The base case doesn't do anything! The towers of hanoi puzzle can be solved with recursion magically, the code will be excured from bottom all the way back to the top.

---

## Chapter 6. Recursion Procedures

Fractals: a self-similar mathematical set that can often be drawn as a recurring graphical pattern.

+ Smaller instances of the same shape or pattern occur within the pattern itself.

+ When displayed on a computer screen, it can be possible to infinitely zoom in/out of a fractal.

Sometimes, the base case can be implicit.

If the required function doesn't accept the parameters you need:

+ Write a **helper function** that accpets more parameters.

+ Extra params can represent current state, choices made, etc.

---

## Chapter 7. Backtracking Algorithms

### 7.1 Exhaustive search

```cpp
Explore(decisions):
   - if there are no more decisions to make: Stop.
   - else, lets handle one decision ourselves, and the rest by recursion.
      for each available choice C for this decision:
      - Choose C.
      - Explore the remaining decisions that could follow C.
```

Sometimes a set of successor function calls will be included in the recursive function. And when the set of choices available is large, using a loop to enumerate them avoids redundancy.

---

### 7.2 Backtracking

Finding solution(s) by trying partial solutions and then abandoning them if they are not suitable.

+ a "brute force" algorithmic technique (tries all paths)
+ often implemented recursively

Applications:

+ Producing all permutations of a set of values
+ Escaping from a maze

```cpp
Explore(decisions):
   - if there are no more decisions to make: Stop.
   - else, lets handle one decision ourselves, and the rest by recursion.
      for each available choice C for this decision:
      - Choose C.
      - Explore the remaining decisions that could follow C.
      - Un-choose C. (backtracking here)
```

Key tasks:

+ Figure out appropriate smallest unit of work (decision).
+ Figure out how to enumerate all possible choices/options for it.

Permute Vector: Suitable to be solved with backtracking.

Recursive Backtracking:

+ "Arm's" length recursion: a **poor** style where unnecessary tests are performed before performing recursive calls. (Typically, the tests try to avoid making a call into what would otherwise be a base case).

---

## Chapter 8. Algorithm Analysis

---

## Chapter 9. Classes and Objects

### 9.1 OOP Basics

+ **Class**: a template for a new type of *objects*
+ **Object**: entity that combines *state* and *behavior*
  + object-oriented programming (OOP): programs that perform their behavior as interactions between objects.
  + abstraction: separation between concepts and details.

Main benefit of OOP: separation of details and usage.

C++ separates classes into two kind of code files:

1. `.h`: a header file containing the interface (declarations).
2. `.cpp`: a source file containing definitions (method bodies).

+ class `Foo`: => must write both `Foo.h` and `Foo.cpp`.
+ The content of `.h` files is `#included` inside `.cpp` files.
  + Makes them aware of declarations of code implemented elsewhere.
  + At compilation, all definitions are *linked* together into an executable.

***Implicit parameter***: the object on which a member function is called.

> Use `::` after the name of a **class**, **enumeration**, or **namespace**.
>
> Use `.` after an **object** or **struct** name.

Why are we using `ClassName::` in front of all of our class member functions? - So that the compiler knows which class you are defining a function for!

#### **Elements of a class**

1. **member variables**: state inside each object
   + also called instance variables or `fields`.
   + each object has a copy of each member.
   + an initializer for a class member specified as part of the member declaration is called an *in-class initializer*.
   + for a class member, we use `static` to make sure that there is just only one copy of the value in the program, rather than one per object of the class.

2. **member functions**: behavior inside each object
   + also called `methods`.
   + each object has a copy of each method.
   + the method can interact with the data inside that object.
   + *const memeber functions*: we use `const` right after the argument list in a member function declaration to indicate that the member function can be called for a `const` object (const object can only call const member functions). once we have declared a member function `const`, the compiler holds us to our promise not to modify the object.

   ```cpp
   class Planet {
      int countPopulation() const;
      void deathStar();
   };

   int Planet::countPopulation() const {
      return 42;
   }

   void Planet::deathStar() {
      cout << "BOOM" << endl;
   }

   void evil(const Planet& p) {
      // OK: count population is const
      cout << p.countPopulation() << endl;
      // Not OK: deathStar isn't const
      p.deathStar();
   } 
   ```

   + the compiler assumes non-const member functions may modify the class.
   + classifying operations on a class as modifying and nonmodifying is a pretty fundamental distinction that helps us understand a class.
   + for an `Object`'s internal state if it has const interface and non-const interface, the external `void foo(const Object& input_param)` can only access to the const interface, but the `void foo(Object& input_param)` can access both.

3. **constructor**: initializes new objects as they are created
   + no return type is specified, implicitly returns the object
   + sets the initial state of each new object
   + often accepts parameters for the initial state of the fields
   + more like `__init__()` in Python, it's an **initializer**
   + you can have more than one constructor in a class
   + A constructor that takes no arguments is called a *default constructor*

4. **special member function**: (usually) automatically generated by the compiler. when the default one generated by the compiler does not work (ownership, pointers, etc.), you need to write your own special member functions. In other words, use initializer list to copy members where assignment does the correct thing (int, other objects, etc.); deep copy all members where assignment does not work (pointers to heap memory).

   + *default construction*: object created with no parameters
   + *copy construction*: object is created as a copy of an existing object. for some reasons, we have to write the **copy constructor** by ourselves.
      + What's the problem of the following code?

      ```cpp
      vector<int> operator+(const vetor<int>& vec, int elem) {
         vector<int> copy = vec; // the equal operator here will call the default copy constructor and copies everything (int size, int *elems)
         copy += element;
         return copy;
         // when it's out of scope, it will free the heap memory multiple times (3 times due to 3 calls to destructor)
      }
      ```

   ```cpp
   // deep copy, we simply put the members that can be easily initialized by an equal operator to the initialization list
   StringVector::StringVector(const StringVector& other) noexcept
      : logicalSize(other.logicalSize), allocatedSize(other.logicalSize) {
      // allocate new memories instead of just copying pointer to heaps
      elems = new std::string[allocatedSize];
      std::copy(other.begin(), other.end(), begin());
   }
   ```

   if the above copy constructor is not defined, `=` is a shallow copy so the elems (which is the pointer) points to the same array for these two objects, which is not our intention. instead, deep copy will copy another array and manipulation on the new object has no effect on the original object.

   + *copy assignment*: existing object replaced as a copy of another existing object (wipe up + copy)

   ```cpp
   // deep copy assignment
   // why are we returning the reference? it's a member function, we want to return the object itself.
   StringVector& StringVector::operator=(const StringVector& other) {
      // what if we say v1 = v1?
      if (this != &other) {
         delete[] elems;
         // = is not a constructor, so we can't use initialization list
         allocatedSize = other.allocatedSize;
         logicalSize = other.logicalSize;
         elems = new std::string[allocatedSize];
         std::copy(other.begin(), other.end(), begin());
      }

      return *this;
   }
   ```

   + *deconstruction*: object destroyed when it is out of scope

   ```cpp
   StringVector function(StringVector vec0) {   // copy construction
      StringVector vec1;   // default construction
      StringVector vec2{"Black", "March"};   // normal construction
      StringVector vec3(); // this declares a function!
      StringVector vec4(vec2);   // copy constructor
      StringVector vec5{}; // default construction
      StringVector vec6{vec3 + vec4};  // copy construction
      StringVector vec7 = vec4;  // copy construction
      vec7 = vec2;   // copy assignment
      return vec7;   // copy construction, creates a copy of local variable to be returned (you can't return local variable by reference!)
   }
   ```

---

#### **Move Semantics** (C++17 feature)

+ An object that is an `l-value` is NOT disposable, so you can copy from, but definitely cannot move from (steal).
+ An object that is an `r-value` is disposable, so you can either copy or move from.

```cpp
int val = 2;
int* ptr = 0x02248837;
vector<int> v1{1,2,3};
int*& ptr2 = ptr;       // ptr2 is an l-value reference
vector<int>&& v4 = v1 + v2;    // v4 is an r-value reference
auto&& val2 = val;      // ERROR: can't bind r-val ref to l-val
const auto& ptr3 = ptr + 5;   // OKAY: can bind const l-val ref to r-val (why)? because you are not going to modify the r-value.
```

BTW: No one uses const r-value reference, it doesn't make any sense although it compiles.

`std::move`: unconditionally casts a variable to an r-value

*new* special member functions (remember that copy constructor create new from existing `l-value`):

1. **move constructor** (create new from existing r-value)

   ```cpp
   StringVector::StringVector(StringVector&& rhs) noexcept : 
      logicalSize(std::move(rhs.logicalSize)),
      allocatedSize(std::move(rhs.allocatedSize)),
      elems(std::move(rhs.elems)) {
      // stealing
      rhs.elems = nullptr;
   }
   ```

2. **move assignment** (overwrite existing from existing r-value)

   ```cpp
   // the type of the parameter is an r-value reference, but they themselves (rhs's members) are l-values.
   StringVector& StringVector::operator=(StringVector&& rhs) noexcept {
      if(this != &rhs) {
         delete[] elems;
         logicalSize = std::move(rhs.logicalSize);
         allocatedSize = std::move(rhs.allocatedSize);
         elems = std::move(rhs.elems);
         // set the other object's ownership to null is important
         rhs.elems = nullptr;
      }
      // we never copied anything, we just move everything over
      return *this;
   }
   ```

Key steps for a move constructor:

+ Transfer the contents of other to `this`.
  + move instead of copy whenever possible!
+ Leave other in an undetermined but valid state
  + highly recommended: set it to the default value of class

If you explicitly define (or delete) a copy constructor, copy assignment, move constructor, move assignment, or destructor, you should define (or delete) **ALL** five.

```cpp
StringVector();
StringVector(const StringVector& other) noexcept;
StringVector& operator=(const StringVector& other) noexcept;
~StringVector();
// when the rhs is (or returns, for example like a function) a tempory value that will be thrown away immediately (r-value), these following two will rouse.
StringVector(StringVector&& other noexcept);
StringVector& operator=(StringVector&& other) noexcept;
```

the fact that you defined one of these means one of your members has *ownership* issues that need to be resolved.

---

### 9.2 Inheritance

Inheritance is a way to form new classes based on existing classes, taking on their attributes/behavior.

+ a way to indicate that classes are related
+ a way to share code between two or more related classes (a **hierarchy**)

Comparing it with templates, the templates is `static` polymorphism because it will replace `T` at compile time, and derived classes are `dynamic` polymorphism, which figure out all of their types at runtime.

#### **When to use templates and derived classes**?

+ prefer templates when:
  + `runtime` efficiency is most important
  + no common base can be defined (like an rock and a cup of tea, there is no inheritance can be made)

+ prefer derived classes when:
  + `compile-time` efficiency is most important
  + want to hide implementations
  + don't want code bloat

One class can extend another, absorbing its data/behavior.

+ *superclass* (base class): parent class that is being extended.
+ *subclass* (derived class): child class that inherits from the superclass.
  + subclass gets a copy of every field and method from superclass.
  + subclass can add its own behavior, and/or change inherited behavior.
  + subclass ***cannot*** access private members of the superclass.
  + subclass inherits from its near superclass.
  + subclasse inherits `private`ly by default.
  + if a subclass member has the same name as an inherited number, subclass will hide the inherited one.
  + always call the superclass constructor, if not specified, it calls the default constructor of superclass.

Always use `virtual` when the method is going to be overided. if you intend to make your class inheritable (i.e. if your class has any virtual functions), make your `destructor` virtual! otherwise will almost definitely have *memory leaks*.

**Liskov Substitution Principle**: Should be able to replace a class with its subclass and have the same expected behavior.

To call a superclass constructor from subclass constructor, use an *initialization list*, with a colon `:` after the constructor declaration.

```cpp
Lawyer::Lawyer(string name, int years, string lawSchool)
      : Employee(name, years) {
   myLawSchool = lawSchool;
}
```

#### **Public, private and protected**

+ `private` can only be accessed by `this` class
+ `protected` can only be accessed by `this` class or `derived` classes
+ `public` can be accessed by **anyone**

**Override**: to replace a superclass's memeber function by writing a new version of that function in a subclass.

**Virtual function**: one that is allowed to be overridden.

+ must be declared with `virtual` keyword in superclass (**only** in the `superclass.h` file and also in the `subclass.h`).

+ if you *override* a non-virtual function, it actually just puts a second copy of that function in the subclass, which can be confusing later.

+ virtual has some subtleties. for example, destructors in inheritance hierarchies should always be declared *virtual* or else memory may not get cleaned up properly.

**Multiple inheritance**: When one subclass has multiple superclasses, it's forbidden in many object-oriented languages but allowed in C++.

**Pure virtual functions**: `virtual returntype name(params) = 0;`, it's declared in superclass's `.h` file and set to 0 (null). An absent function that has not been implemented.

+ must be implemented by any subclass, or it cannot be used
+ a way of forcing subclasses to add certain important behavior
+ in java, this is called an *abstract method*

If a class has at least one pure virtual function, it is called an *abstract class*. Abstract classes cannot be instantiated.

---

**Polymorphism (多态)**: Ability for the same code to be used with different types of objects and behave differently with each.

+ polymorphism = *'many forms'*
+ one of the main benefits of inheritance (from client perspective)

Poly. and pointers

+ a pointer of type T can point to any subclass of T.

```cpp
Employee* edna = new Lawyer("Harvard", 5);
Lawyer* steve = new PatentLawyer("Stanford", 2);
World* world = new WorldMap("map-stanford.txt");
```

When a member function is called on `edna`, it behaves as a `Lawyer`.

+ this is because the employee functions are declared `virtual`.

+ you can *not* call any `Lawyer`-only members on `edna` (e.g. sue).

+ you can *not* call any `PatentLawyer`-only members on `steve` (e.g. filePatent).

#### **More common form of polymorphism**

1. a *method* expecting a pointer to type T can take in a pointer to a subclass of T (same rules apply: can't call any non-Employee member functions).

   ```cpp
   void printEmployeeInfo(Employee* employee) {
      ...
   }
   printEmployeeInfo(new Employee(0));
   printEmployeeInfo(new Lawyer("UW", 1));
   ```

2. a *collection* cotaining pointers to T can have elements that point to any subclasses of T.

   ```cpp
   vector<Employee*> workforce;
   workforce.add(new Lawyer("Harvard", 5));
   workforce.add(new Programmer(2));
   int payrollBudget = 0;
   for (Employee* employee : workforce) {
      payrollBudget += employee->salary();
   }
   ```

**Casting**: you can use the object's extra functionality by casting.

```cpp
Lawyer* edna = new PatentLawyer("Harvard", 5);
edna->vacationDays();                           // ok
edna->filePatent("iPhone");                     // compiler error
((PatentLawyer*) edna)->filePatent("iPhone");   // ok
```

Casting doesn't change the output, it only changes what's legal to call.

Determine the **declared** type (left side of '=' sign) and **initialized** type (right side if '=' sign)

+ casting changes the compile type

```cpp
if (Is the variable cast) {
   if (the casted type is a superclass/the same 
      class as the initialized type) {
      if (the declared type or a superclass define the method) {
            use the initialized type's method 
            (or the method from the closest superclass);
      }
      Compiler Error;
   }
   Crash;
}
```

**Side Note about casting**: with modern C++, the best way to cast is to use `static_cast<int>(b)`. all of these are legal:

```cpp
int a = (int) b;
int a = int (b);
int a = static_cast<int>(b);
```

---

### 9.3 Operator Overloading

*Operator overloading* redefines the behavior of a common operator (`()`, `[]`, even `new`) in the `C++` language (e.g. make objects printable).

How does `C++` know how to apply operators to user-defined classes?

```cpp
vector<string> vec{"Hello","World"};
cout << vec[0];
vec[1] += "!";
```

The compiler tries to transfer the above code to following:

```cpp
vector<string> vec{"Hello", "World"};
cout.operator<<(vec.operator[](0));
vec.operator[](1).operator+=("!");
```

Indeed, the people who wrote the STL wrote these functions:

```cpp
// why returning by reference? - support chaining << calls
// const-ness: here we are modifying the stream, not the string s.
ostream& operator<<(ostream& s, const string& val) {
   // body
}

// must be memeber, technically it's written as a template
string& vector<string>::operator[](size_t index) const {
   // body
}
```

The `int_variable += 2` operator will return the reference to the `int_variable` itself, so every operator overloading inside an object should return the reference to the object itself, too.

```cpp
vector<string>& vector<string>::operator+=(const int& element) {
   // body, this is a member function being called on some vector represented by `this` pointer
   return *this; 
}
```

+ **What is `*this`?** Every object in C++ has access to its own address through an important pointer called `this` pointer. The `this` pointer is an implicit parameter to all member functions.
+ **Why use reference returns above?** Consider the following situation.

   ```cpp
   vector<string> vec; 
   const string s = "abc";
   (vec += s) += "ef";
   ```

   if the operator `+=` is returning by reference, this statement will compile and work perfectly; but if it's return is not a reference, then `vec += s` is a new copy of the orignial vec and gone after it's execution, so the original vec is not modified at all.

+ **When to return a reference?** You should return a reference to an existing object that isn't going away immediately, and where you don't intend any transfer of ownership. Never return a reference to a local variable or some such, because it **WON'T** be there to be referenced!

**Key takeaways**:

1. Respect the semantics of the operator. If it normally returns a reference to `*this`, make sure you do so!
2. always think about const-ness of parameters.
3. When overloading operators as a member function, the left hand argument is the implicit `*this`.
4. **Memeber vs. non-memeber**:
   + some operators must implemented as members (e.g. `[]`, `()`, `->`, `=`) due to `C++` semantics.
   + some must be implemented as non-members (e.g. `<<`, our class works as the rhs, but we can't change the class of lhs (*stream library*)).
   + if unary operator (e.g. `++`), implement as member.
   + if binary operator and treats both operands equally (e.g. both unchanged), implement as non-member (maybe `friend` to access private variables). *EX)* `+`, `<`
   + if binary operator and not both equally (e.g. changes lhs), implement as member (allows easy access to lhs private members). *EX)* `+=`
5. Principles of Least Astonishment (PoLA): design operators primarily to mimic conventional usage.

---

## Chapter 11. Linear Structures

### 11.1 Pointer

+ Nullpointer: Memory address 0; "points to nothing".

+ Uninitialized pointer: points to a ramdom address.

  + if you dereference these (use `*p` to get the values that p points to), program will probably crash.

```c++
int x = 42;
int* p1 = nullptr;   // store 0
int* p2;             // uninitialized
cout << p1 << endl;  // 0
cout << *p1 << endl; // KABOOM
cout << *p2 << endl; // KABOOM
```

Pointer to a struct:

```c++
// 1) non-pointer
void foo1() {
   Date d1;
   d1.month = 7;
   d1.day = 13;
   // d1 is thrown away
}

// 2) pointer
void foo2() {
   Date* d2 = new Date(); // declare a new pointer which points to a date struct.
   d2->month = 7; // equivalent to (*d2).month = 7;
   d2->day = 13;
   // d2 is NOT thrown away
}
```

A list node structure

```c++
struct ListNode {
   int val;
   ListNode* next;
}
```

Use a 'current' pointer to tranverse a linkedlist to keep the track of linkedlist.

### 11.2 LinkedList

In function call, if the pointer is passed as parameter, you need to pass it by reference so that the change will be seen in the caller. If you are modifying the linkedlist, pass pointer as reference.

```c++
void addFront(ListNode*& front, int value) {
   ListNode* temp = new ListNode(value);
   temp->next = front;
   front = temp;
}

int main() {
   ListNode* list = ...;
   addFront(list, 10);
}
```

Think the many states that a linkedlist could be in, such as, what if the `front` of the linkedlist is `nullptr`? What if there is only one node in the linkedlist? And the general case: a lot of nodes.

Add to empty linkedlist:

+ We must create a new node and attach it to the list.
+ For an empty list to become non-empty, we must change front.

*Memory leak*: Nothing to get access to the garbage memory, the memory will not be used by any applicaiton until your program exist. That's bad!

*Freeing memory*:

+ `delete pointer`: *Releases the memory for the object pointed at by the given pointer.*
+ Must be done for all list node objects created with `new`.

**Destructor**: Called when the object is deleted by the program. (when the object falls out of {} scope) `~ClassName();`

+ useful if your object need to free any memory as it dies.
  + `delete` any pointer stored as private members
  + `delete[]` any arrays stored as private members

If that class is built in a function, after the function call is ended, the destructor of the class will then be called.

Implementing a LinkedIntList class:
The destructor need to free up all the pointers and nodes.

### 11.3 Priority Queues and Heaps

Prioritization problems
We want a `queue` with these operations:

+ *add* an element
+ *get/remove* the most **important** or **urgent** element

**priority queue**: provides fast access to its highest-priority element.

 adding and removing to/from a `heap` all have a $O(logN)$ time complexity, because you are jumping $2$ or $1/2$ each time.

---

## Chapter 12. Implementing Maps

---

## Chapter 13. Trees

Trees are the mixture of pointers and recursion. It's a directed, acyclic structure of linked nodes.

+ directed: has one-way links between nodes.
+ acyclic: no path wraps back around to the same node twice.
  + only one unique path from a node to any other node.

It's heavily used in AI like decision trees.

### **Terminology**

+ node: an object containing a data value and left/right children.
  + root: topmost node of a tree
  + leaf: a node that has no children
  + branch: any internal node; neither the root nor a leaf
  + parent: a node that refers to this one
  + child: a node that this node refers to
  + sibling: a node with a common
+ subtree: the smaller tree of nodes on the left or right of the current node
+ **height**: length of the *longest* path from the root to any node
+ level or **depth**: length of the path from a root to a given node

---

### 13.1 Binary trees

You should *always* think about the `nullptr` case first! A good attribute of recursive code is that you are focusing on your own thing, not the other guy's thing.

#### **Traversal**

1. preorder: process root node, then its left, right subtrees. (Contain)
2. inorder: process left subtree, then root node, then right. (BST)
3. postorder: process left, right subtrees, then root node. (Free Tree)

Lecture 16 36:27
Why is this code adding nothing to the original tree?

```cpp
void add(TreeNode* node, int value) {
   ...;
   node = new TreeNode(value);
}
```

Because the address stored in the pointer `*node` is changed, but this change is not reflected in the `main()`. **However, if you are changing the value to which the pointer is pointing to, that will *BE* reflected.**

```cpp
void swapInt(int *a,int *b) {
   int temp; temp=*a; a=*b; *b=temp; //指针的指向地址并没有变，但是改变了所指地址中存储的变量值
}
```

> 指针传递使用的情况：形参为指向实参地址的指针，当对形参的指向操作时，就相当于对实参本身进行的操作。
>
> 指针传递参数本质上是值传递的方式，它所传递的是一个地址值。值传递过程中，被调函数的形式参数作为被调函数的局部变量处理，即在栈中开辟了内存空间以存放由主调函数放进来的实参的值，从而成为了实参的一个副本。值传递的特点是被调函数对形式参数的任何操作都是作为局部变量进行，不会影响主调函数的实参变量的值。***这里是在说实参指针本身的地址值不会变。***

```c++
void add(TreeNode* node, int value) {
   node = new TreeNode(value);   //node作为副本，改变node存储的地址值并不会改变实参存储的地址
}
```

---

### 13.2 Binary search trees (BSTs)

+ BSTs store their elements in sorted order, which is helpful for searching/sorting tasks.
+ A structure for trees, which makes adding to them and searching them easier.
+ Implementation of the Stanford `Set`.

BST is a binary tree where each non-empty node R has the following properties:

+ every element of R's left subtree contains data less than R's data
+ every element of R's right subtree contains data greater than R's data
+ R's left and right subtrees are also binary search trees.

What is the maximum number of nodes you would need to examine to perform any search in a BST? (the depth of tree)

**What is the minimum value of a BST?** - The **first** node that does not have a left node. (If you are looking for a maximum, we just go to the right)

When you are trying to add a new node (with a given value) to a BST, you need also to check if the value already exists in the tree. (Only checking the `nullptr` condition is not enough) - Must pass the current node by reference for changes to be seen.

To avoid leaking memory when discarding a tree, we must free the memory for every node. (In **postorder**)

+ Like most tree problems, often written recursively
+ Must free the node itself, and its left/right subtrees

**Adding to a BST** will always add **as a leaf** (you can always find a position for the new node where there are no child nodes).

**Removing from a BST**
Removing when there is only one node or one child at left/right (whatever), you can just replace the node with `nullptr` or the left/right node.

If you are removing a node with **both** children, you need to replace with **min from right subtree** (replacing with max from left would also work).

Tree Maps (or Map Tree?):

+ each tree node will store both a key and a value
+ tree is BST-ordered by its keys
+ keys must be comparable by its key (support `<` operator)

**Balanced trees**: One where for every node R, the height of R's subtrees differ by at most 1, and R's subtrees are also balanced.

---

### 13.3 Advanced trees

#### **Red-Black trees**

#### **Tries (Prefix trees)**

---

## Chapter 14. Expresion Trees

## Chapter 15. Sets

---

## Chapter 16. Graphs

### 16.1 Basics of graph

**Graph**: a data structure containing:

+ a set of **vertices** (vertex) *V*, (sometimes called nodes)
+ a set of **edges** *E*, (sometimes called arcs)
  + which are connections between 2 vertices.
+ Graph G = (V, E)
+ an edge is a pair (v, w) where v, w are in V

**Degree**: number of edges touching a given vertex.

**Example of graph**: social network, google maps (airlines, roads), etc.

*Reducing one problem to another one where the second one has a known solution.*

#### **Terminology of graph**

+ **path**: a path from vertex *a* to *b* is a sequence od edges that can be followed starting from *a* to reach *b*.
  + can be represented as veertices visited, or edges taken
+ **path length**: number of vertices or edges contained in the path
+ **neighbor** or **adjacent**: two vertices connected directly by an edge.
+ **reachable**: vertex *a* is *reachable* from *b* if a path exists from *a* to *b*.
+ **connected**: a graph is *connected* if every vertex is reachable from every other.
+ **complete**: if evert vertex has a *direct* edge to every other.
+ **cycle**: a path that begins and ends at the same node.
  + acyclic graph: one that does not contain any cycles.
+ **loop**: an edge directly from a node to *itself*.
  + many graphs don't allow loops.

**Linked Lists, Trees, Graphs**:
A binary tree is a graph with some restrictions:

+ the tree is an unweighted, directed, acyclic graph (DAG).
+ each node's in-degree is at most 1, and out-degree is at most 2.
+ there is exactly *one* path from the root to every node.

A linked list is also a graph:

+ unweighted DAG.
+ in/out degree of at most 1 for all nodes.

**Weighed graphs**
weight: cost associated with a given **edge**.

+ some graphs have weighted edges, and some are unweighted.
+ edges in an unweighted graph can be thought of as having equal weight (e.g. all 0, or all 1, etc.)
+ most graphs do not allow negative weights.
+ example: graph of airline flights, weighted by miles between cities.

**Directed graph ("digraph")**
directed graph is one where edges are *one-way* connections between vertices.

+ if graph is directed, a vertex has a separate in/out degree.
+ a digraph can be weighted or unweighted.

---

### 16.2 DFS and BFS

**Depth-first search (DFS):** finds a path between two vertices by exploring each possible path as far as possible before *backtracking*.

+ often implemented recursively.
+ many graph algorithms involve visiting or marking vertices.

#### *DFS pseudocode*

```cpp
dfs from v1 to v2:
   mark v1 as visited, and add to path.
   perform a dfs from each of v1's unvisited neighbors n to v2:
      if dfs(n,v2) succeeds: a path is found~
   if all neighbors fail: remove v1 from path.
```

To retrieve the DFS path found, pass a collection parameter to each call and **choose-explore-unchoose**.

Discovery: DFS is guaranteed to find *a* path if one exists.

Retrieval: It is easy to retrieve exactly what the path is (the sequence of edges taken) if we find it: choose-explore-unchoose.
  
Optimality: not optimal. DFS is guaranteed to find *a* path, but not necessarily the best/shortest path

**Breadth-first search (BFS):** finds a path between two vertices by taking one step down all paths and then immediately backtracking.

+ often implemented by maintaining a queue of vertices to visit.
+ always returns shortest path (fewest edges) from start to end.

#### *BFS pseudocode*

```cpp
bfs from v1 to v2:
   create a queue of vertices to visit,
      initially storing just v1.
   mark v1 as visited.
   while queue is not empty and v2 is not seen:
      dequeue a vertex v from it,
      mark that vertex v as visited,
      and add each unvisited neighber n of v to the queue.
```

Optimality:

+ always finds the shortest path (fewest edges).
+ in unweighted graphs, finds optimal *cost* path.
+ in weighted graphs, *not* always optimal cost.

Retrieval:
Harder to reconstruct the actual sequence of vertices or edges in the path once you find it.

+ conceptually, BFS is exploring many possible paths in parallel, so it's not easy to store a path array/list in progress
+ solution: we can keep track of the path by storing predecessors for each vertex
  
DFS uses less memory than BFS, easier to reconstruct the path once found;
but DFS does not always find shortest path. BFS does.

Expected runtime of DFS and BFS, in terms of the number of the number of vertices *V* and the number of edges *E*: $O(V+E)$.

+ Must potentially visit every node and/or examine every edge once.
+ why not $O(V*E)$?

DFS/BFS do **NOT** consider edge weights.

+ the minimum weight path is not necessarily the shortest path
+ sometimes weight is more important:
  + example: plane flight costs, network transmission (lantency between servers)

---

### 16.3 Dijkstra's algorithm

> Edsger D**ijk**stra (1930 - 2002) is the reason why we start with i, j, k in program loops!

**Dijkstra's algorithm**: finds the minimum-weight path between a pair of vertices in a weighted directed graph.

+ solves the "shortest path from a given vertex" problem in weighted graphs.
+ *basic algorithm concept*: store information about the currently known best way to reach each vertex (cost, previous vertex), and improve it until it reaches the best solution.

```c
dijkstra(v1,v2):
   1. consider every vertex to have a cost of infinity, except v1 which has a cost of 0.
   2. create a priority queue of vertexes, ordered by cost, storing only v1.
   while the pqueue is not empty:
      dequeue a vertex v from the pqueue, and mark it as visited.
      for each unvisited neighbor, n, of v, we can reach n with a total
      cost of (v's cost + the weight of the edge from v to n).
         if this cost is cheaper than n's current cost,
         we should eunqueue the neighbor *n* to the pqueue 
         with this new cost,
         and remember *v* was its previous vertex. (how???)
when we are done, we can reconstruct the path from v2 back to v1 by following the path of previous vertices.
```

Dijkstra's algorithm is a greedy algorithm:

+ make choices that currently seem best

It is correct because it maintains the following two properties:

1. for every marked vertex, the current recorded cost is the lowest cost to that vertex from the source vertex.
2. for every unmarked vertex v, its recorded distance is shortest path distance to v from source vertex, considering only currently known vertices and v.

#### **Dijkstra's runtime**

+ for sparse graphs (i.e. graphs with much less than $V^2$ edges), Dijkstra's implemented most efficiently with a *priority queue*.
  + initialization: $O(V)$
  + while loop: $O(V)$ times
    + remove min-cost vertex from *pq*: $O(logV)$
    + potentially perform E updates on cost/previous
    + update costs in *pq*: $O(logV)$
  + reconstruct path: $O(E)$
  + Total runtime: $O(VlogV+ElogV) = O(ElogV)$, because $V=O(E)$ if graph is connected
    + if a list/vector is used instead of a *pq*: $O(V^2+E) = O(V^2)$

---

### 16.4 A\* algorithm

Dijkstra's algorithm uses a priority queue and examines possible paths in increasing order of their known cost or distance.

+ the idea is that *paths with a lower distance-so-far are more likely to lead to paths with a lower total distance at the end*.
+ but what about the remaining distance? what if we knew that a path that was promising so far will be unlikely to lead to a good result?
+ can we modify the algorithm to take advantage of this information?

Dijkstra's algorithm works by incrementally computing the shortest path to intermediary nodes in the graph in case they prove to be useful, although some of these paths are in the *wrong* direction.

The algorithm has no "big-picture" conception of how to get to the destination; the algorithm explores outward in all directions.

+ could we give the algorithm a hint? explore in a smarter order?
+ what if we knew more about the vertices or graph being searched?

**Heuristics**: a speculation, estimation, or educated guess that guides the search for a solution to a problem.

+ example: spam filters flag a message as probable spam if it contains certain words, has certain attachments, is sent to many people, ...

in the context of graph searches: a function that approxiamtes the distance from a known vertex to another destination vertex.

+ example: estimate the distance between two places on a Google Maps graph to be the direct straight-line distance between them.

**Admissible heuristic**: one that never overestimates the distance.

A\* is a modified version of  Dijkstra's algorithm that uses a heuristic function to guide its order of path exploration.

+ suppose we are looking for paths from start vertex *a* to *c*
  + any intermediate vertex *b* has two costs:
    + the known (exact) cost from the start vertex *a* to *b*
    + the heuristic (estimated, it relies on some information) cost from *b* to the end vertex *c*
  + **idea**: run Dijkstra's algorithm, but use this priority in the pqueue:
    + priority(b) = cost(a,b) + Heuristic(b,c)
    + choose to explore paths with lower estimated cost
    + basically, just add $H(...)$ to costs of elements in PQ to improve PQ processing order

---

### 16.5 Spanning tree

A spanning tree is a subset of Graph G, which has all the vertices covered with minimum possible number of edges. Hence, a spanning tree does not have cycles and it cannot be disconnected..

By this definition, we can draw a conclusion that every connected and undirected Graph G has at least one spanning tree. *A disconnected graph does not have any spanning tree*, as it cannot be spanned to all its vertices.

We now understand that one graph can have more than one spanning tree. Following are a few properties of the spanning tree connected to graph G −

+ A connected graph G can have more than one spanning tree.

+ All possible spanning trees of graph G, have the **same number of edges and vertices**.

+ The spanning tree does not have any cycle (loops).

+ Removing one edge from the spanning tree will make the graph disconnected, i.e. the spanning tree is **minimally connected**.

+ Adding one edge to the spanning tree will create a circuit or loop, i.e. the spanning tree is **maximally acyclic**.

**Kruskal's algorithm**
if the weights of all edges are distinct, you are going to have only one spanning tree.

```cpp
function kruskal(graph):
   remove all edges from the graph.
   place all edges into a priority queue based on their weight (cost).
   while the priority queue is not empty:
      dequeue an edge e from the priority queue.
      if e's endpoints aren't already connected, add that edge into the graph.
      otherwise, skip the edge.
```

**Runtime**: $O(ElogE)=O(ElogV)$

**Data structure**:

1. priority queue
2. vertex clusters
     + to identify which vertexes are 'connected' to which other ones.
     + also need an efficient way to figure out which cluster a given vertex is in.
     + also need to merge clusters when adding an edge.

---

### 16.6 Implementing a graph

If we want to make a data structure to represent a graph, what information must we store? - for each vertex? for each edge?

What kind of questions would we want to be able to answer quickly:

+ about a vertex?
+ about edges/neighbors?
+ about paths?
+ about what edges exist in the graph?

Three common graph implementation strategies:

1. *edge list* - easy to implement, iterate, and add vertexes. basically every action on the edge list you need to iterate over the whole list.
2. *adjacency list* - easy to get neighbors and add new vertexes and edges. bad at determining whether an edge exists. suitable for ***BFS***!
3. *adjacency matrix* - bad at adding new vertexes.

**Edge list** - unordered list of all edges in graph.

+ an array, vector, linked list, or set
+ each edge stores start/end vertex
+ vertexes are not explicitly stored anywhere; V is contained *implicitly* in the list of edges
+ using an edge list, how would you find:
  + all neighbors of a given vertex? the degree of a given vertex?
  + whether there is an edge from A to B?
  + whether there are any loops (self-edges)?

**Adjacency list** - *stores edges as lists of each vertex's neighbors.*

+ can use a linked list, vector, set, etc.
+ in undirected graphs, edge $(i, j)$ is stored in both $i$'s and $j$'s lists

**Adjacency matrix** - An N*N matrix where:

+ the entry a[i,j] is the weight of the edge joining vertex i and vertex j (or 0 if no such edge exists).
+ in an undirected graph, a[i,j] = a[j,i] for all i,j. (diagonally symmetric)
+ in a directed graph, the row represents the start vertex and the column represents the ending vertex.
+ advantages and disadvantages:
  + fast to tell whether an edge exists between any two vertices i and j (and to get its weight)
  + consumes a lot of memory on sparse graphs (one with few edges)
  + slow to add/remove a vertex ($O(V^2)$)
  + somewhat slow to get all neighbors of a given vertex (loop over a lot zeros if the graph is sparse)

---

## Chapter 17. Hashing

### 17.1 What is hashing?

How you make a set that has constant time of searching? **Silly idea**: when client add value i, store it at index i in the array.

`hash`: to map a large domain of values to a smalleer fixed domain.

+ *idea*: store any given element value in a particular predictable index.
+ *hash table*: an array that stores elements via hasing.
+ *hash function*: an algorithm that maps values to indexes.
+ *hash code*: the output of a hash function for a given value.

**collision**: when a hash function maps 2 values to same index.

*collision resolution*: an algorithm for fixing collisions.

**probing**: resolving a collision by moving to another index (could run out of space).

+ linear probing: moves to the next available index(wraps if needed).
+ quadratic probing: a variation that moves increasingly far away.
  + index +1, +4, +9, ...
+ clustering: clumps of elements at neighboring indexes.
  + slows down the hash table lookup; you must loop through them.

**separate chaining**: solving collisions by storing a list at each index.

+ add/search/remove must traverse lists, but the lists are short.
+ impossible to "run out" of indexes, unlike with probing.
+ pick a weird number (prime number) of size so the data will spread evenly.
+ **it's unordered!!!**
+ a good hashCode function is well-distributed.

How do we add an element to the hash table?

+ where in the linked list should we add the new element? (the order of the chain doesn't matter, you can just add it as the new front, resulting $O(1)$ runtime).
+ must make sure to avoid duplicates. `.contains(val)` also has runtime of $O(1)$.

What's a double pointer? - `HashNode**` is a pointer that points to pointers that points to a `HashNode`.

```cpp
//constructor
HashIntSet::HashIntSet() {
   hashTable = new HashNode*[capacity]();
   mysize = 0;
   capacity = 10;
}

int HashSet::hashCode(int value) const {
   return abs(value % capacity);
}

void HashIntSet::add(int value) {
   int hash = hashCode(value);
   if (contains(value)) {  // prevent duplicates
      return;
   }
   HashNode* newNode = new HashNode(value);  // insert at front of **list**
   newNode->next = hashTable[hash];
   hashTable[hash] = newNode;
   mysize++;

   // check if rehash
   if (loadFactor() > MAX_LOAD_FACTOR) rehash();

}

bool HashIntSet::contains(int value) const {
   int hash = hashCode(value);
   HashNode* cur = hashTable[hash];
   while (cur) {
      if (cur->data == value) {
         return true;
      }
      cur = cur->next;
   }
   return false;
}
```

---

### 17.2 Rehashing

**rehash**: growing to a larger array when the table is too full.

+ cannot simply copy the old array to a new one - *the hashCode will be changed*.
+ *load factor*: ratio of (# of elements) / (hash table length). Many implementations rehash when load factor is 0.75, we can use big prime numbers as hash table sizes to reduce collisions.

```cpp
void HashIntSet::rehash() {
   int oldCapacity = capacity;
   HashNode** oldTable = hashTable;
   capacity *= 2;
   hashTable = new HashNode*[capacity](); //() means everything is null
   for (int i = 0; i < oldCapacity; i++) {
      HashNode* cur = oldTable[i];
      while (cur) {
         HashNode* next = cur->next;
         int hash = hashCode(cur->data);
         cur->next = hashTable[hash];
         hashTable[hash] = cur;
         cur = next;
      }
   }
   delete[] oldTable;   // not deleting the linked lists, we still need that
}
```

---

### 17.3 Hash map

A hash map is like a set where the nodes store key/value pairs - must modify the HashNode class to store a *key* and a *value*.

+ **the hashing is always done on the keys, not the values**.
+ the `contains` function is now `containsKey`; there and in `remove`, you search for a node whose keys matches a given key.
+ the add method is now `put`; if the given key is already there, you must replace its old value with the new one.

**hashing strings** - consistency and well-distributed

It is easy to hash an integer i, how can we hash other types of values (such as strings)?

+ if we could convert strings into integers, wew could hash them.
+ what kind of integer is appropriate for a given string?
+ does it matter what integer we choose? what should it be based on?

*A valid* hashCode function **must** be consistent with **equality**- mush produce same results on each call.
`a == b` must imply that `hashCode(a) == hashCode(b)`, but `a != b` does **NOT** necessarily imply that `hashCode(a) != hashCode(b)` (because *collision* is unavoidable).

For example, the following hash function is valid, but it's not good enough because there are many collisions for the string with a same length.

```cpp
int hashCode(string s) {return s.length();}
```

To avoid collisions: weighted sum. instead of adding, let's give each charactor a *weight*. Here is the actual hash function used for strings in Java.

```cpp
int hashCode(string s) {
   int hash = 5381;
   for (int i = 0; i < (int) s.length(); i++) {
      hash = 31 * hash + (int) s[i];
   }
   return hash;
}
```

---

### 17.4 Hashing structs/objects

By default you cannot add your own structs/objects to hash sets. Our library don't know how to hash these objects.

To make your own types hashable by your libraries:

1. overload the `==` operator
2. write a hashCode function that takes your types as its parameter

The `add`, `contains` and `remove` method of a hash table is all $O(1)$! Isn't that amazing?

**Hashing: another use** - store a unique code for each password instead of the actual password string.

Cuckoo hashing is really fast for `contains` (check two buckets at **MAX**), but the `add` will get a little slower.

---

## 18. Sorting

### 18.0 Bogo sort

Bogo sort: orders a list of values by repetitively shuffling them and checking if they are sorted.
How long should we expect bogo sort to take?

+ related to probability of shuffling into sorted order
+ assuming shuffling code is fair, probability equals to 1 / (number of permutations of N elements)
+ average case performance: $O(N*N!)$
+ worst case perfomance: $O(inf)$
+ Best case performance: $O(n)$

---

### 18.1 Selection sort

Selection sort will repeatedly ***swap*** smallest unplaced value to front.

**Runtime**: $O(n^2)$

```cpp
void selectionSort(vector<int>& v) {
   for (int i = 0; i < v.size(); i++) {
      int smallestIndex = i;

      for (int j = i+1; j < v.size(); j++) {
         if (v[j] < v[smallestIndex]) {
            smallestIndex = j;
         }
         swap(v, i, smallestIndex);
      }
   }
}
```

---

### 18.2 Insertion sort

Insertion sort orders a list of values by repetitively inserting a particular value into a sorted subset of the list. It's slightly better than selection sort (like the array is partialy sorted).

**Runtime**: $O(n^2)$, makes $N-1$ passes over the array.

```cpp
void insertionSort(vector<int>& v) {
   for (int i = 1; i < v.size(); i++) {
      int temp = v[i];
      int j = i;

      // slide elements right to make room for v[i]
      while (j >= 1 && v[j-1] > temp) {
         v[j] = v[j-1];
         j--;
      }
      v[j] = temp;
   }
}
```

---

### 18.3 Merge sort

Merge sort repeatedly divides the data in half, sorts each half, and combines the sorted halves into a sorted whole.

1. divide the list into two roughly equal halves
2. sort the left half
3. sort the right half
4. **merge** the two sorted halves into one sorted list

Often implemented recursively, it's an example of a **divide and conquer** algorithm.

**Runtime**: $O(NlogN)$, somewhat faster for ascending/descending input.

Merge sort is very conducive to being split up and parallelized by multiple computers.

---

## **RAII** (Resource Acquisition Is Initialization) - Scope based memory management

| Resources   | Acquisition | Release  |
| ----------- | ----------- | -------- |
| heap memory | `new`       | `delete` |
| files       | `try_lock`  | `unlock` |
| locks       | `open`      | `close`  |
| sockets     | `socket`    | `close`  |

Avoid calling `new` and `delete` explicitly!

We can't guarantee the `delete` call is called if an exception is thrown. but the constructor will always be called when its out of scope. you can put the code that releases the resource in the destructor. no matter what way you exit the function, the resource will be released.

All resources should be `acquired` in the `constructor`.
All resources should be `released` in the `desctructor`.

The rationale of this is there should never be a *half-valid* state of the object. object useable after its creation; the destructor is always called (even with exceptions), so the resource is always freed.

---

### Smart Pointers

`std::unique_ptr` is a smart pointer uniquely owns its resource and deletes it when the object is destroyed. it can ***NOT*** be copied! if you allow copy of this unique pointer, when the copy of it is out of scope, it will automatically release the heap memory, hence when you dereference your original pointer or try to delete it, it crash.

how can you tell a class to disallow copying? - by deleting the copy constructor and copy assignment. (`= delete`)

```cpp
// RAII is not guaranteed
void rawPtr() {
   Node* ptr = new Node;
   // do stuff with ptr
   delete ptr;
}

// This is safe
void rawPtr() {
   std::unique_ptr<Node> ptr(new Node);
} // freed memory
```

`C++` also has built-in smart pointer `creators`

```cpp
// instead of using this one
std::unique_ptr<Node> n(new Node);
// this is better (RAII)
std::unique_ptr<Node> n = std::make_unique<Node>();
```

In modern `C++`, we pretty much never use `new` and `delete`!

`std::shared_ptr`: resource can be stored by any number of `shared_ptr`s. deleted when none of them point to it (this **ONLY** works if new `shared_ptr`s are made through copying!). implemented by ***reference counting***:

+ Idea: store an `int` that keeps track of the number currently referencing that data
  + gets incremented in copy constructor/copy assignment
  + gets decremented in destructor or when overwritten with copy assignment
+ Frees the resource when reference count hits `0`

```cpp
{
   std::shared_ptr<int> p1(new int);
   // use p1
   {
      std::shared_ptr<int> p2 = p1;
      // use p1 and p2
   }
   // use p1
}  // freed!
```

`std::weak_ptr` is similar to `shared_ptr`, but doesn't contribute to the reference count. it is used to deal with circular references of `shared_ptr`.

---

## Multi-threading

Code is usually sequential, threads are ways to parallelise execution.

*Atomic operation*: operation that does everything at once is an atomic operation.

`<mutex>`: a mutex is a lockable `object` that is designed to signal when critical sections of code need exclusive access, preventing other threads with the same protection from executing concurrently and access the same memory locations. mutex objects provide *exclusive ownership*.

`std::lock_guard`: a lock guard is an `object` that manages a mutex object by keeping it always locked.

On construction, the mutex object is locked by the calling thread, and on destruction, the mutex is unlocked. It is the simplest lock, and is specially useful as an object with automatic duration that lasts until the end of its context. In this way, it guarantees the mutex object is properly unlocked in case an exception is thrown. (**RAII**)

Here is a non-template version of how the `lock_guard` is implemented:

```cpp
class lock_guard {
public:
   lock_guard(std::mutex& lock) : acquired_lock(lock) {
      acquired_lock.lock();
   }
   ~lock_guard() {
      acquired_lock.unlock();
   }
private:
   // l-value references can be used to alias an existing object
   std::mutex& acquired_lock;
}
```

Sidenote: mutexes cannot be copied or be moved! (this is why `acquired_lock` is declared as a reference)

```cpp
class mutex {
public:
   mutex(const mutex& other) = delete;
   mutex& operator=(const mutex& rhs) = delete;
   mutex(mutex&& other) = delete;
   mutex& operator=(mutex&& other) = delete;
}
```

```cpp
// demo code
#include <iostream>
#include <vector>
#include <chrono>
#include <mutex>
#include <thread>

const size_t kNumThreads = 5;
static std::mutex mtx;

void greet(int id) {
    // template <class Mutex> class lock_guard;
    std::lock_guard<std::mutex> lg(mtx);
    std::cout << "Hello my name is " << id << std::endl;
}

int main() {
    std::cout << "Greetings from threads..." << std::endl;
    std::vector<std::thread> threads;

    for (size_t i = 0; i < kNumThreads; ++i) {
        threads.push_back(std::thread(greet, i));
        // in the following way, the code will push_back a thread, and
        // wait until it returns back, and push next thread, there is on
        // paralyzed execution at all and will execute exactly serially.

        // bad code
        //threads[i].join();
    }


   // right code
   for (std::thread& t : threads) { // thread can't be copied 
      t.join();
   }

    std::cout << "All greetings done!" << std::endl;

    return 0;
}
```
