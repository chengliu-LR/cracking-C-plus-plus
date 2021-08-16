# Effective `C++`

***55** specific ways to improve your programs and designs*

- [Effective `C++`](#effective-c)
  - [Chapter 1: Accustoming yourself to `C++`](#chapter-1-accustoming-yourself-to-c)
    - [Item1 - View C++ as a federation of languages](#item1---view-c-as-a-federation-of-languages)
    - [Item2 - Prefer `const`s, `enum`s and `inline`s to `#define`s](#item2---prefer-consts-enums-and-inlines-to-defines)
    - [Item3 - Use `const` whenever possible](#item3---use-const-whenever-possible)
    - [Item4 - Make sure that objects are initialized before they're used](#item4---make-sure-that-objects-are-initialized-before-theyre-used)
  - [Chapter 2: Constructors, destructors and assignment operators](#chapter-2-constructors-destructors-and-assignment-operators)
    - [Item5 - Know what functions C++ silently writes and calls](#item5---know-what-functions-c-silently-writes-and-calls)
  - [Chapter 3: Resource management](#chapter-3-resource-management)
  - [Chapter 4: Designs and declarations](#chapter-4-designs-and-declarations)
  - [Chapter 5: Implementations](#chapter-5-implementations)
  - [Chapter 6: Inheritance and OOP design](#chapter-6-inheritance-and-oop-design)
  - [Chapter 7: Templates and generic programming](#chapter-7-templates-and-generic-programming)
  - [Chapter 8: Customizing `new` and `delete`](#chapter-8-customizing-new-and-delete)

## Chapter 1: Accustoming yourself to `C++`

### Item1 - View C++ as a federation of languages

- C
- Object-Oriented C++
- Template C++
- The STL

Rules of effective C++ programming vary, depending on the part of C++ you are using.

### Item2 - Prefer `const`s, `enum`s and `inline`s to `#define`s

- For simple constants, prefer `const` objects or enums to `#define`s
- For function-like macros, prefer `inline` functions to `#define`s

### Item3 - Use `const` whenever possible

- Declaring something `const` helps compilers detect usage errors. `const` can be applied to objects at any scope, to function parameters and return types, and to member functions as a whole.
- Compilers enforce *bitwise constness*, but you should program using *logical constness*. (Watchout the pointers that my be escape the bitwise constness)
- When `const` and non-`const` member functions have essentially identical implementations, code duplication can be avoided by having the non-`const` version call the `const` version (the reverve way is dangerous).

### Item4 - Make sure that objects are initialized before they're used

For most types, a single call to a copy constructor is more efficient, sometimes `much` more efficient than a call to the default constructor followed by a call to the copy assignment operator. This is why initialization list is prefered than the assignment-based constructor (in the assignment-based version, default constructors are called to initialize the nested-classes, and then promptly assign new values on top of the default-constructed ones).

For objects of built-in types, there is no difference in cost between initialization and assignment, but for consistency, it's often best to initialize everything via member initialization.

Sometimes the initialization list *must* be used, even for built-in types. For example, data members that are `const` or are references must be initialized; they can't be assigned.

- Manually initialize objects of built-in type, because C++ only sometimes initializes them itself.
- In a cosntructor, prefer use of the member initialization list to assignment inside the body of the constructor. List data members in the initialization list in the same order they're declared in the class.
- Avoid initialization order problems accross *translation units* by replacing non-local static objects with local static objects (C++ guarantees that local static objects are initialized when the object's definition is first encountered during a call to that function).

**What is non-local static object?**

## Chapter 2: Constructors, destructors and assignment operators

### Item5 - Know what functions C++ silently writes and calls

Consider what should happen here:

```cpp
template<typename T>
class NamedObject {
public:
  NamedObject(std::string& name, const T& value);

private:
  std::string& nameValue; // reference
  const T objectValue;  // const
};

std::string newDog("Liu Le");
std::string oldDog("Le Liu");

NamedObject<int> p(newDog, 2);
NamedObject<int> s(oldDog, 18);

p = s; // call copy assignment operator

```

C++ compiler refuses to compile the code above. C++ does not provide a way to make a reference refer to a different object. If you want to support copy assignment in a class containing a reference memeber, you must define the copy assignment operator yourself. Compilers behave similarly for classes containing `const` members. It is not legal to modify `const` members, so compulers are unsure how to treat them during an implicitly generated assignment function.

## Chapter 3: Resource management

## Chapter 4: Designs and declarations

## Chapter 5: Implementations

## Chapter 6: Inheritance and OOP design

## Chapter 7: Templates and generic programming

## Chapter 8: Customizing `new` and `delete`
