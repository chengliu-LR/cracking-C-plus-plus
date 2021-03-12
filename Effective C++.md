# Effective `C++`

***55** specific ways to improve your programs and designs*

- [Effective `C++`](#effective-c)
  - [Chapter 1: Accustoming yourself to `C++`](#chapter-1-accustoming-yourself-to-c)
    - [Item1 - View C++ as a federation of languages](#item1---view-c-as-a-federation-of-languages)
    - [Item2 - Prefer `const`s, `enum`s and `inline`s to `#define`s](#item2---prefer-consts-enums-and-inlines-to-defines)
    - [Item3 - Use `const` whenever possible](#item3---use-const-whenever-possible)
  - [Chapter 2: Constructors, destructors and assignment operators](#chapter-2-constructors-destructors-and-assignment-operators)
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

## Chapter 2: Constructors, destructors and assignment operators

## Chapter 3: Resource management

## Chapter 4: Designs and declarations

## Chapter 5: Implementations

## Chapter 6: Inheritance and OOP design

## Chapter 7: Templates and generic programming

## Chapter 8: Customizing `new` and `delete`