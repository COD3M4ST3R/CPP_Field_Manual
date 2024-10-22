
# CPP

<style>   
#version-label-11 
{
   background-color: #4f4f4f;
   color: white;
   padding: 3px 8px;
   border-radius: 5px;
   font-size: 12px;
}

#version-label-14 
{
   background-color: #ff1298;
   color: white;
   padding: 3px 8px;
   border-radius: 5px;
   font-size: 12px;
}

#version-label-17 
{
   background-color: #ac12ff;
   color: white;
   padding: 3px 8px;
   border-radius: 5px;
   font-size: 12px;
}

#version-label-20 
{
   background-color: #125dff;
   color: white;
   padding: 3px 8px;
   border-radius: 5px;
   font-size: 12px;
}

#version-label-23 
{
   background-color: #ff1212;
   color: white;
   padding: 3px 8px;
   border-radius: 5px;
   font-size: 12px;
}
</style>

1. [Basic Concepts](#1-basic-concepts)

   - [Keywords & Core Syntax](#keywords--core-syntax)
      - [auto](#auto) <span id="version-label-11">C++11</span>
      - [inline](#inline)
      - [static](#static)
      - [constexpr](#constexpr) <span id="version-label-11">C++11</span>
      - [typename](#typename)
      - [using](#using)
      - [extern](#extern)
      - [volatile](#volatile)
      - [mutable](#mutable)

   - [Data Types](#data-types)
      - [Trivial types (e.g., int, float, double, short int)](#trival-types)
      - [Compound types (std::pair, std::tuple)](#compound-types) <span id="version-label-11">C++11</span>
      - [Standard library types (std::string, std::string_view)](#standard-library) <span id="version-label-17">C++17</span>
      - [Modern types (std::optional, std::variant, std::any)](#modern-types) <span id="version-label-17">C++17</span>

   <br>
   <br>


2. [Passing Values](#2-passing-values)

   - [By Value](#by-value)
   - [By Reference](#by-reference)
   - [Raw Pointers](#by-raw-pointers)
   - [Smart Pointers](#smart-pointers) <span id="version-label-11">C++11</span>
   - [Reference Wrappers](#by-reference-wrapper) <span id="version-label-11">C++11</span>

   <br>
   <br>


3. [Object-Oriented Programming (OOP)](#3-object-oriented-programmingoop)

   - [Class Features](#class-features)
      - [Constructors & Destructors](#constructors--destructors)
      - [Member functions (const and non-const)](#member-functionsconst--non-const)
      - [Overloading (Function & Operator)](#overloadingfunction--operator)
      - [Struct vs. Class](#struct-vs-class)

   - [Fundamentals](#fundamentals)
      - [Encapsulation](#encapsulation)
      - [Inheritance](#inheritance)
      - [Polymorphism](#polymorphism)
      - [Abstraction (Abstract Classes & Interfaces)](#abstraction-abstract-classes--interfaces)
    
    - [Advanced OOP](#advanced-oop)
      - [Virtual destructors](#virtual-destructors)
      - [Pure virtual functions](#pure-virtual-functions)
      - [RAII (Resource Acquisition Is Initialization)](#raiiresource-acquisition-is-initialization)

   <br>
   <br>


4. [Templates & Generic Programming](#4-templates--generic-programming)

   - [Basic Templates](#basic-templates)
      - [Function Templates](#function-templates)
      - [Class Templates](#class-templates)
   
   - [Advanced Templates](#advanced-templates)
      - [Template Specialization](#template-specialization)
      - [Variadic Templates](#variadic-templates) <span id="version-label-11">C++11</span>
      - [Template Metaprogramming (TMP)](#template-metaprogrammingtmp)
      - [Concepts and requires clauses](#concepts--require-clauses) <span id="version-label-20">C++20</span>
   
   <br>
   <br>


5. [Standard Library (STL)](#standard-librarystl)

   - [Containers](#containers)
      - [Sequence Containers (std::vector, std::list, std::deque)](#sequence-containers)
      - [Associative Containers (std::set, std::map)](#associative-containers)
      - [Unordered Containers (std::unordered_set, std::unordered_map)](#unordered-containers) <span id="version-label-11">C++11</span>
   
   - [Iterators](#iterators)
      - [Input/Output, Forward, Bidirectional, Random Access](#inputoutput-forward-bidirectional-random-access)
   
   - [Algorithms](#algorithms)
      - [Sorting, Searching, Modifying](#sorting-searching-modifying)
      - [Utilities](#utilities)

   <br>
   <br>


6. [Modern C++ Features](#modern-c-features)

   - [Function Objects](#function-objects)
      - [Functors](#functors)
      - [Lambdas](#lambdas) <span id="version-label-11">C++11</span>
      - [std::function](#stdfunction) <span id="version-label-11">C++11</span>
      
   - [Function Composition](#function-composition) <span id="version-label-11">C++11</span>

   - [Function Patterns & Event Management](#function-patterns--event-management)
      - [Event Handling](#event-handling)
      - [Command Pattern](#command-pattern)

   - [Ranges](#ranges) <span id="version-label-20">C++20</span>
      - [std::ranges, Views, Actions](#stdranges-views-actions)
      
   - [Modules](#modules) <span id="version-label-20">C++20</span>
      - [Basics of Modular Programming in C++](#basics-of-modular-programming)
      
   - [Spaceship Operator](#spaceship-operator) <span id="version-label-20">C++20</span>

   <br>
   <br>


7. [Memory Management](#memory-management)

- [Automatic vs. Dynamic Memory](#automatic-vs-dynamic-memory)
   - [Stack vs. Heap](#stack-vs-heap)
   - [Smart Pointers (std::unique_ptr, std::shared_ptr, std::weak_ptr)](#smart-pointers) <span id="version-label-11">C++11</span>
   - [Manual Memory Management (New/Delete)](#manual-memory) 
   
- [Advanced Memory Techniques](#advanced-memory-techniques)
   - [Custom Allocators](#custom-allocators) 
   - [Memory Pools](#memory-pools) 
   - [Garbage Collection Concepts (Beyond C++)](#garbage-collection-concepts) 

   <br>
   <br>


8. [Advanced C++ Features](#advanced-c-features)

   - [Error Handling](#error-handling)
      - [Exceptions (try, catch, throw)](#exceptions)
      - [Custom Exception Classes](#custom-exception-classes) 
      - [std::expected](#stdexpected) <span id="version-label-23">C++23</span>
   
   - [Type Casting](#type-casting)
      - [static_cast](#static_cast)
      - [dynamic_cast](#dynamic_cast)
      - [const_cast](#const_cast)
      - [reinterpret_cast](#reinterpret_cast)
      - [C-Style Cast](#c-style-cast-type-casting)
   
   - [Metaprogramming](#metaprogramming)
      - [SFINAE (Substitution Failure Is Not An Error)](#sfinaesubstitution-failure-is-not-an-error) 
      - [constexpr if](#constexpr-if) <span id="version-label-17">C++17</span>
      - [Fold Expressions](#fold-expressions) <span id="version-label-17">C++17</span>

   - [PIMPL Idiom](#pimpl-idiom)

   <br>
   <br>


9. [Concurrency & Multithreading](#concurrency--multithreading)

   - [Basics](#basics)
      - [Memory Model](#memory-model) <span id="version-label-11">C++11</span>
      - [std::thread](#stdthread) <span id="version-label-11">C++11</span> 
      - [std::mutex](#stdmutex) <span id="version-label-11">C++11</span> 
      - [std::lock_guard](#stdlock_guard) <span id="version-label-11">C++11</span>
      - [std::unique_lock](#stdunique_lock) <span id="version-label-11">C++11</span>
      - [std::atomic](#stdatomic) <span id="version-label-11">C++11</span>
   
   - [Synchronization](#synchronization)
      - [Condition Variables (std::condition_variable)](#condition-variables) <span id="version-label-11">C++11</span>
      - [Barriers, Latches](#barriers-latches) <span id="version-label-20">C++20</span> 
   
   - [High-Level Concurrency](#high-level-concurrency)
      - [std::async, std::future, std::promise](#stdasync-stdfuture-stdpromise)
   
   - [Async Programming](#async-programming) <span id="version-label-11">C++11</span>
      - [Coroutines](#coroutines) <span id="version-label-20">C++20</span>
         - [Awaiting, Reusable Functions (Generators)](#awaiting-reusable-functions-generators) 

   <br>
   <br>


10. [Performance Optimization](#performance-optimization)

   - [Move Semantics](#move-semantics) <span id="version-label-11">C++11</span>
      - [Move Constructors, Move Assignment](#move-constructors-move-assignment)
    
   - [Copy Elision](#copy-elision) <span id="version-label-11">C++11</span>
    
   - [Inlining](#inlining)
    
   - [Profile-Guided Optimization (PGO)](#profile-guided-optimizationpgo) <span id="version-label-11">C++11</span> 
    
   - [Compiler Optimizations](#compiler-optimizations)
      - [Link Time Optimization (LTO)](#link-time-optimizationlto) <span id="version-label-11">C++11</span> 

   <br>
   <br>


11. [Design Patterns in C++](#design-patters-in-c)

   - [Creational Patterns](#creational-patterns)
      - [Singleton](#singleton-pattern)
      - [Factory](#factory-pattern)
      - [Builder](#builder-pattern)

   <br>
   <br>

<hr>





### <font color="#ffc900">1. Basic Concepts</font>
> ### <font color="#a442f5">Keywords & Core Syntax</font>
> ### <font color="#ff009e">auto</font>
> Is a type inference feature introduces in C++11. It allows the compiler to automatically deduce the type of a variable based on its initializer, reducing the need for explicit type declaratations. This feature enhances code readability and maintainability by reducing verbosity and enabling more concise code.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// Type Inference
>auto val = 42;    
>   
>// Conciseness
>auto it = myVector.begin()
>
>// Template Programming
>template<typename T, typename U>
>auto add(T val1, U val2)
>{
>   return (val1 + val2);
>}
>```
>
> **When To Use**
> 
> - **Type Clarity**:
When the type of a variable is evident from its initializer, using 'auto' can enhance code clarity by reducing redundant type informations.
>
> - **Complex Types**:
When dealing with complex or nested types, 'auto' can simplify variables declarations and make code more readable.
>
> - **Template Programming**:
In template code, 'auto' can simplify the syntax and improve code maintainability.
>
> **When Not to Use**
>
> - **Loss of Clarity**:
Avoid using it when the type of a variable is not immediately obvious from its initiallizer, as it may reduce code clarity.
>
> - **Interface Clarity**:
When defining function signatures or public interfaces, using explicit type declarations can improve readability and understanding.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Maintainability**: Helps prevent type mismatches and makes code easier to maintain and refactor.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Debugging**: When debugging, explicit type declarations can provide more information about variable types than 'auto'.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">inline</font>
> Suggest to compiler that the code of a function should be expanded in place where it is called, rather than being invoked through the usual function call mechanism. This can potentially reduce the overhead of function call and improve performance for small, frequently called functions. However, it is merely a request, and the compiler is free to ignore it. Use it when the function is simple, and frequently called.
>
> **When To Use**
> 
> - If the function is short and simple.
>
> **When Not to Use**
>
> - If the function is long/complex or virtual.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Reduced Function Call Overhead**: Since inline functions eliminate the function call overhead(stack operations, context switching), they can lead to performance improvements, expeciaally for small, frequently called functions.
>
> - **Optimization Opportunities**: Inlining can enable further optimizations by the compiler, such as constant propagation, loop untolling, and other code transformations.
>
> - **Simplified Code**: Using inline functions can make the code cleaner and easier to read compared to using macros, as inline functions are type-safe and provide better error checking.
>
> - **Debugging**: Inline functions are easier to debug compared to macros, as they retain their function-like behavior and are subject to the same scoping and type-checking rules.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Increased Code Size**: If an inline function is large or called frequently, it can lead to code bloat, increasing the size of the binary and potentially leading to instruction cache misses.
>
> - **Complex Functions**: Inline functions are best suited for small, simple functions. Large or complex functons are less suitable for inlining as they can negate the performance benefits and  exacerbate code bloat.
>
> - **Recursive Functions**: Inline functions cannot be recursive. The compiler will generally ignore this 'inline' suggestion for recursive functions.
>
> - **Compiler Optimization**: The 'inline' keyword is merely a suggestion to the compiler. Modern compilers use their optimization heuristics to decide whether to inline a function or not, and they may ignore it.
>
> - **Code Changes**: When an inline function is modified, all translation units that use it need to be recomplied. This can increase compilation times, expecially in large projects.
>
> - **Debugging Complexity**: Debugging inline functions can sometimes be more challenging, as the function call may not appear in the call stack in a straightforward way.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">static</font>
> Has several distinct usages and meanings.
>
> **Static Variable Inside Functions**
>
> A static variable inside a function retains its value between function calls.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> void counter()
> {
>    static int count = 0;
>    count++;
>    std::cout << count << std::endl;
> }
>```
>
> **When To Use**
> 
> - When you need to maintain state across multiple calls to a function, such as in counters or caching mechanism.
>
> **When Not to Use**
>
> - In multithreaded environments without proper synchronization mechanism.
> - When the function needs to be re-entrant or should not retain state between calls.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **State Preservation**: Retains state between function calls.
>
> - **Initialization**: Initialized only once, even if the function is called multiple times.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Global State**: Can lead to unintended dependencies and harder to track bugs due to shared state.
>
> - **Thread Safety**: Not thread safe by default, which can lead to issues in multithreaded environments.
>
> <hr>
>
> **Static Variable in Classes**
>
> A static member variable in a class is shared by all instances of class.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> class MyClass()
> {
>    public:
>       static int sharedValue;
> }:
> int MyClass::sharedValue;
>```
>
> **When To Use**
> 
> - For constants or data that should be shared across all instances, such as configuration settings or counters.
>
> **When Not to Use**
>
> - When each instance should have its own copy of the data.
> - When you need to maintain strong encapsulation.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Shared Data**: Useful for sharing data across all instances of class.
>
> - **Memory Efficient**: Only one copy of the variable exist, regardless of the number of instances.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Global State**: Can lead to unintended dependencies and harder to track bugs due to shared state.
>
> - **Encapsulation**: May break encapsulation if used improperly.
>
><hr>
>
> **Static Member Functions**
>
> A static member function in a class can be called without an instance of the class.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> class MyClass
> {
>    public:
>       static void printHello()
>       {
>          std::cout << "Hello, world! << std::endl;"
>       }
> };
>```
>
> **When To Use**
> 
> - When the function needs to interact with instance-specific data.
> - For factory methods or helper functions
>
> **When Not to Use**
>
> - When the function needs to interact with instance-specific data.
> - When you want to enforce object-oriented principles strictly.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Utility Functions**: Useful for utility functions that do not depend on instance-specific data.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Limited Access**: Cannot access non-static members of the class directly.
>
> <hr>
> 
> **Static Variables at Global / Namespace Scope**
>
> A static variable at global or namespace scope has internal linkage, meaning it is limited to the file in which it is declared.
>
> **When To Use**
> 
> - For global variables that should not be accessible from other files.
> - For file-specific constants or utility variables.
>
> **When Not to Use**
>
> - When the variable needs to be shared across multiple files.
> - When you need broader access to the variable.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Encapsulation**: Limits the visibility of the variable to the file, reducing potential.
>
> - **Controlled Scope**: Useful for defining file specific global variables.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Limited Scope**: Cannot be accessed from other translation units.
>
><hr>
>
> **Static Local Classes**
>
> A static local class is a class defined inside a function and has a static variable scope.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> void function() 
> {
>     static class LocalClass 
>     {
>         // Class definition
>     } instance;
> }
>``` 
>    
> **When To Use**
> 
> - For one-off utility classes used only within a specific function.
>
> **When Not to Use**
>
> - When the class should be reusable across multiple functions or files.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Encapsulation**: Keeps the class definition local to the function.
>
> - **Scoped Usage**: Useful for encapsulation function-specific logic.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Limited Scope**: Limited to the function scope, reducing reusability.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">constexpr</font>
> Indicate that the value of a variable or the return value of a function can be evaluated at compile-time. This can lead to performance improvements by enabling constant expressions to be computed at compile time, reducing runtime overhead.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Variables
> constexpr short int size = 10;
> 
> // Functions
> constexpr int square(int x)
> {
>    return (x * x);
> }
>
> // Constructors
> struct Point 
> {
>    int x, y;
>    constexpr Point(int x, int y) : x(x), y(y) {}
> };
> constexpr Point p(1, 2);
>```
>
> **When To Use**
> 
> - Use constexpr for constants that are known at compile-time and do not change, such as mathematical constants or configuration values.
>
> - Use constexpr in performance-critical code where eliminating runtime computation can provide a significant speedup.
>
> - Use constexpr for template metaprogramming and compile-time calculations, enabling more flexible and efficient code.
>
> **When Not to Use**
>
> - Avoid using constexpr for values that can only be determined at runtime.
>
> - Avoid using constexpr for functions that perform complex computations not suitable for compile-time evaluation.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Performance**: By computing values at compile-time, constexpr can reduce runtime overhead, resulting in faster code execution.
>
> - **Safety**: Ensures that certain values are constants, providing additional guarantees about the immutability of these values
>
> - **Code Optimization**: Enables the compiler to perform more aggressive optimizations since the values are known at compile-time.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Writing constexpr functions requires ensuring that all expressions within the function can be evaluated at compile-time, which can sometimes lead to more complex code.
>
> - **Compilation Time**: Evaluating complex expressions at compile-time can increase the compilation time.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">typename</font>
> Used in template programming to specify that a dependent name(a name dependent on a template parameter) is a type. It resolves ambiguity, allowing the compiler to correctly interpret the name as a type rather than something else, like a member or a variable.
>
> In templates, the compiler may not know if a dependent name refers to a type or non-type member. The 'typename' keyword clarifies this by explicitly stating that the name is a type. Without 'typename', the compiler might misinterpret the name, resulting in errors.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template <typename T>
>class Example
>{
>   typename T::value_type val;
>   public:
>      Example(typename T::value_type v) : val(v){}
>};
>
>struct Container
>{
>   using value_type = int;
>}
>```
> 
> **When To Use**
> 
> - **Template Programming**: 
Use 'typename' when you need to specify that a dependent name is a type. This is common in template classes and functions where the type depends on a template parameter.
>
> - **Nested Types**: 
Use 'typename' to disambiguate nested dependent types within templates.
>
> - **Complex Template Definitions**: 
In complex template scenarios involving multiple levels of templates, 'typename' helps ensure clarity and correctness in type interpretation.
>
> **When Not to Use**
>
> - **Non-Templates**: 
Avoid using it in non-template context or where the compiler can unambiguously infer that a name is a type.
>
> - **Built-in Types**: 
There is no need to use it for built-in types or types that do not depend on template parameters.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Disambiguation**:
Ensures that dependent names are correctly interpreted as types, preventing compilation errors and making the code more readable. 
>
> - **Template Clarity**:
Improves the clarity of template code by explicitly specifying types, making it easier to understand and maintain.
>
> - **Correct Compilation**:
Helps the compiler correctly parse complex template constructs, ensuring that the code compiles correctly.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Verbosity**: 
Can make the code more verbose as 'typename' needs to be added explicitly in several places.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">using</font>
> Serves multiple purposes. It can be used to create type aliases, bring names from a namespace into the current scope and more. Introduced in C++11, 'using' often offers a clearer and more powerful alternative to 'typedef'.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// Type Aliases
>using ulong = unsigned long;
>usint IntPtr = int*;
>using FunctionPointer = void (*)(int, double);
>
>// Template Aliases
>template <typename T>
>using Vec = std::vector<T>;
>Vec<int> myVec;
>
>// Namespace Aliases
>namespace MyNamespace
>{
>   class MyClass {};
>}
>
>using MN = MyNamespace;
>MN::MyClass obj;
>```
>
> **When To Use**
> 
> - **Modern C++ Code**:
Prefer 'using' over 'typedef' in new C++ code due to its clearer syntax and additional capabilities.
>
> - **Template Aliases**:
When you need to create an alias for a template type, which 'typedef' can not do.
>
> - **Function Pointers**:
For defining function pointer types, where 'using' provides a more readable syntax.
>
> - **Namespace Management**:
To simplify access to elements within a namespace.
>
> **When Not to Use**
>
> - **Older Codebases**:
When working with older code that predominantly uses 'typedef', introducing 'using' may cause inconsistency.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Template Aliases**:
Supports alias templates, enabling more flexible and reusable code. 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Compatibility**: Not available in pre-C++11 code.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">extern</font>
> It is used to declare a variable or function that is defined in another translation unit or file. It serves as a way to share variables and functions between different files, allowing for modular program design. The 'extern' keyword is particularly important in large-scale programs where code is split across multiple source files.
>
> **Global Variables**:
> When you declare a global variable as 'extern', you are telling the compiler that this variable is defined in another file. This allows you to use the variable without defining it again in each file.
>
> **Functions**:
> By default, functions have external linkage, meaning they can be accessed from other files without the need for an 'extern' keyword. Homever, 'extern' can still be used for explicitly for clarity.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>//----------
>// File1.cpp
>int globalVar = 42; // Definition of globalVar
>
>void display()
>{
>   std::cout << "Global variable value: " << globalVar << std::endl;
>}
>
>//----------
>// File2.cpp
>extern int globalVar; // Declaration of globalVar
>void display(); // Decleration of the function display()
>//extern void display();
>
>int main()
>{
>   globalVar = 100; // Modify the variable from another file
>   display(); // Call the function from another file.
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Global Variable Across Multiple Files**:
> When you have global variables that need to be shared across multiple files, 'extern' is necessary. This ensures that all files use the same instance of the variable.
>
> - **Forward Declarations**:
> Use 'extern' to declare functions or variables that are defined elsewhere, allowing the compiler to recognize them during compilation.
>
> **When Not to Use**
>
> - **Inside a Single File**:
> There is no need to use it if your program is contained within single source file. 'extern' is only necessary when dealing with multiple translation units.
>
> - **Avoid Overuse of Global Variables**:
> Using it can encourage reliance on global variables, which can lead to code that's harder to maintain and debug. Prefer passing variables explicitly between functions and classes.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Modular Code**
>
> - **Shared Resources** 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Global State Management** 
>
> - **Name Conflicts**
>
> - **Limited Type Safety**
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">volatile</font>
> It is used to inform the compiler that a variable's value may change unexpectedly, outisde the program's regular flow of control. This is particulary relevant in systems programmings, where hardware devices, signal handlers or concurrent processes might modify a variable directly, bypassing the program's normal execution flow.
>
> **Preventing Optimization**:
> Compilers often optimize code by assuming that variables do not change unless they are explicitly modified by the code. For instance, if a variable is not modified in a piece of code, the compiler might optimize by catching its value in a register or by eliminating repeated access. Declaring a variable as 'volatile' tells the compiler not to optimize accesses to this variable, ensuring that every read or write operation accesses the actual memory location, rather than a cached value.
>
> **Use Cases**:
>
> - **Memory-mapped hardware registers**:
> Variables representing hardware registers might change independently of the program's control flow.
>
> - **Multithreading**:
> In some cases, variables shared between threads might be marked as 'volatile' (though 'volatile' alone is not sufficient for thread safety).
>
> - **Signal handlers**:
> Variables modified by an asynchronous signal handler should be declared as 'volatile' to ensure the program checks their value every time.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>volatile bool stopFlag = false;
>
>void monitor()
>{
>   while(!stopFlag)
>   {
>      // Do some work
>   }
>   // Stop the loop when stopFlag changes
>}
>
>int main()
>{
>   // Run monitor in a separate thread or signal handler
>   stopFlag = true; // This could be set by another thread or an interrupt.
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Interacting with Hardware**:
> When dealing with hardware registers or other memory-mapped IO that might change independently of the CPU's control.
>
> - **Concurrent Programming**:
> In specific cases where variables may be modified by other threads, 'volatile' ensures that the variable is always read from memory. However, for most multithreading scenarios, atomic operations or mutexes are more appropriate.
>
> - **Signal Handling**:
> When variables are modified by signal handlers or other asynchronous interrupts.
>
> **When Not to Use**
>
> - **Thread Synchronization**:
> 'volatile' is not substitute for proper thread synchronization mechanisms like mutexes, locks or atomic operations. It does not prevent race-condition.
>
> - **General Optimization**:
> Do not use it to prevent optimization for non-volatile scenarios. Overusing 'volatile' can lead to inefficient code.
>
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Correctness in Hardware Interfacing**:
> Ensures that critical variables reflecting hardware state or signal flags are always accessed directly, preventing subtle bugs. 
>
> - **Predictable Behavior**:
> Prevents the compiler from making optimizations that could result in incorrect behavior when dealing with variables that might change unexpectedly.
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance Impact**:
> Using it can prevent certain optimizations, leading to slower code, especially in tight loops or performance-critical sections.
>
> - **Not Sufficient for Thread Safety**: 
> While 'volatile' ensures that a variable is read from memory each time, it does not guarantee atomicity or memory ordering, which are crucial for safe multithreading programming.
>
>
><hr>
>
>
>
> ### <font color="#ff009e">mutable</font>
> It is used to allow specific member of a class to be modified even when  the object is considered 'const'. This is particulary useful in situations where a certain member needs to maintain some state that can change, even though the rest of the object is treated as immutable.
>
> **Use Cases**:
> Common scenarios include caching mechanisms, reference counters or lazy initialization, where certain internal states need to change without affecting the logical 'const' nature of the object
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Logger
>{
>   private:
>      mutable int logCount = 0; // logCount can be modified even in const objects.
>
>   public:
>      void log(const std::string& message) const
>      {
>         ++logCount; // Allowed because logCount is mutable
>         std::cout << message << std::endl;
>      }
>
>      int get_logCount() const
>      {
>         return logCount;
>      }
>};
>
>int main()
>{
>   const Logger logger;
>   logger.log("First message");
>   logger.log("Second message");
>
>   std::cout << "Log count: " << logger.getLogCount() << std::endl;
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Stateful Operations on 'const' Objects**:
> Use it when you need to maintain or update internal state(like caches, counters or flags) in an object that is otherwise intended to be immutable.
>
> - **Thread-safe Laziness**:
> In cases where a value or resource should only be initialized when it is first needed, 'mutable' can allow such initialization in 'const' method.
>
> **When Not to Use**
>
> - **Overusing in Const-correct Design**:
> Overusing it can undermine the benefits of const-correctness by allowing modifications where immutability is expected. This can lead to code that's harder to understand and maintain.
>
> - **Breaking Thread Safety**:
> If you are using it in a multithreaded context, be careful as it could lead to data races if not handled correctly.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility in Const Objects**
>
> - **Useful in Caching** 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Potential for Misuse**
>
> - **Const-correctness Confusion**
>
>
>
><hr>
>
>
>
> ### <font color="#a442f5">Data Types</font>
> ### Trival Types
>
>
>
> **int**: A signed integer type typically representing 32 bits on most systems.
>
> **short int**: A signed integer type with a smaller range than 'int'. Typically 16 bits.
>
> **long int**: A signed integer type typically representing at least 32 bits.
>
> **long long int**: A signed integer type with an even larger range, at least 64 bits.
>
> **unsigned ...**: Unsigned versions of the corresponding signed integer types.
>
> **float**: 
   A single-precision floating point type typically representing 32 bits.
>
> **double**: A double-precision floating point type typically representing 64 bits.
>
> **long double**: A larger floating point type, typically with greater precision than 'double'.
>
> **int8_t**: Signed integer type with fixed sizeof 8 bits.
>
> **int16_t**: Signed integer type with fixed sizeof 16 bits.
>
> **int32_t**: Signed integer type with fixed sizeof 32 bits.
>
> **int64_t**: Signed integer type with fixed sizeof 64 bits.
>
> **uint8_t**: Unsigned integer type with fixed sizeof 8 bits.
>
> **uint16_t**: Unsigned integer type with fixed sizeof 16 bits.
>
> **uint32_t**: Unsigned integer type with fixed sizeof 32 bits.
>
> **uint64_t**: Unsigned integer type with fixed sizeof 64 bits.
>
> **bool**: true or false.
>
> **char**: A character type representing a single byte.
>
> **wchar_t**: A wide character type typically used for Unicode characters.
>
> **void**: Represents the absence of type, commonly used as the return type of functions with no return value or as a placeholder for generic pointers.
>
> **std::string**: Dynamic, owning string class that provides many functions for manipulating strings. It owns the memory for the characters in the string and can grow or shrink as needed.
>
> **std::string_view**: Non-owning view of sequence of characters. It provides lightweight way to reference a string or part of a string without copying it. It does not manage the lifetime of the string data it refers to.
>
>
>
><hr>
>
>
>
> ### Standard Library Types
> **std::string**:
>
> **std::string_view**:
>
>
>
><hr>
>
>
>
> ### Compound Types
> **std::pair**:
>
> **std::tuple**:
>
>
>
><hr>
>
>
>
> ### Modern Types
> **std::optional**:
>
> **std::variant**:
>
> **std::any**:
>
>
>
><hr>





### <font color="#ffc900">2. Passing Values</font>
> ### <font color="#a442f5">By Value</font>
> When you pass a variable by value, a copy of the variable is made. The function works with this copy, so any changes made to the variable inside the function do not affect the original variable.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>void modifyValue(int x)
>{
>   x = 10; // This change does not affect the original variable.
>}
>
>int main()
>{
>   int a = 5;
>   modifyValue(a);
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you do not need to modify the original value.
>
> - When the object being passed is small and cheap to copy, such as fundamental data types(int, char, etc...)
>
> **When Not to Use**
>
> - For large objects like vectors or strings, where copying is expensive in terms of performance.
>
> - When you need to modify the original value.
>
> **<font color="#b3f542">Advantages</font>**
>
> - Simple and safe, no need to worry about ownership or lifetime issues.
>
> - No risk of unintended side effects since the function works with a copy. 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - Can be inefficient for large objects due to the overhead of copying.
>
> - Does not allow the function to modify the original value.
>
>
>
> <hr>
>
>
>
> ### <font color="#a442f5">By Reference</font>
> When you pass a variable by reference, you pass the variable itself, not a copy. Any changes made to the variable inside the function will affect the original variable.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>void modifyValue(int& x)
>{
>   x = 10; // This change affects the original value
>}
>
>int main()
>{
>   int a = 5;
>   modifyValue(a);
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need to modify the original variable.
>
> - When passing large objects, to avoid the overhead of copying.
>
> **When Not to Use**
>
> - When you want to ensure the original variable remains unchanged.
>
> - When dealing with simple, small data types where copying is inexpensive.
>
> **<font color="#b3f542">Advantages</font>**
>
> - No copying overhead, making it efficient for large objects.
>
> - Allows the function to modify the original variable. 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - Potential for unintended side effects if the original variable is modified.
>
> - Requires careful management to avoid issues like dangling references.
>
>
>
> <hr>
>
>
> ### <font color="#a442f5">By Raw Pointers</font>
> Is similiar to passing by reference, but you pass the address of the variable explicitly. The function works with the pointer to the variable, which allows modification of the original value.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>void modifyValue(int* x)
>{
>   *x = 10; // This change affects the original variable.
>}
>
>int main()
>{
>   int a = 5;
>   modifyValue(&a);
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need to pass a variable that may be null.
>
> - When dealing with arrays or dynamically allocated memory.
>
> **When Not to Use**
>
> - When you can use references or smart pointers instead.
>
> - When ownership and lifetime management are important.
>
> **<font color="#b3f542">Advantages</font>**
>
> - Flexibility in passing null pointers and dynamic memory.
>
> - Can modify the original variable. 
> 
> **<font color="#f56942">Disadvantages</font>**
>
> - Requires explicit memory management, increasing the risk of memory leaks and dangling pointers.
>
> - Pointers can be null, so you must check for null pointers to avoid crashes.
>
>
>
> <hr>
>
>
>
> ### <font color="#a442f5">By Smart Pointers</font>
> Smart pointers are a feature in C++ that manage the lifetime of dynamically allocated objects, helping to prevent memory leaks and dangling pointers by automatically deallocating memory when it is no longer needed. The Standard Library provides several types of smart pointers, each designed for different use cases.
>
> ### <font color="#ff009e">std::unique_ptr</font>
> A smart pointer that owns and manages another object through a pointer and disposes of that object when the 'std::unique_ptr' goes out of scope. Unique ownership, non-copyable, movable.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::unique_ptr<int> ptr1(new int(10));
> // std::unique_ptr<int> ptr2 = ptr1; // Error: cannot copy
> std::unique_ptr<int> ptr2 = std::move(ptr1);
>```
>
> **When To Use**
> 
> - When you need exclusive ownership of a resource.
> - For managing the lifetime of resources that are not shared.
> - For implementing RAII (Resource Acquisition Is Initialization) patters.
>
> **When Not to Use**
>
> - When you need shared ownership or the ability to copy the smart pointer.
> - When passing ownership to function that do not accept 'std::unique_ptr'.
>
> <hr>
>
> ### <font color="#ff009e">std::shared_ptr</font>
> A smart pointer that retains shared ownership of an object through a pointer. Multiple 'std::shared_ptr' instances can manage the same object. Shared ownership, reference counting.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::shared_ptr<int> ptr1 = std::make_shared<int>(20);
> std::shared_ptr<int> ptr2 = ptr2; // Okay: shared ownership.
>```
>
> **When To Use**
> - When multiple parts of your program need to share ownership of a resource.
> - When object need to be shared across multiple scopes or threads.
>
> **When Not to Use**
> - When exclusive ownership is sufficient or required.
> - In performace-critical code where reference counting overhead is unacceptable.
>
> <hr>
>
> ### <font color="#ff009e">std::weak_ptr</font>
> A smart pointer that holds a non-owning (weak) reference to an object that is managed by 'std::shared_ptr'. It is used to break circular references. Non-owning, does not affect reference count.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::shared_ptr<int> sp = std::make_shared<int>(30);
> std::weak_ptr<int> wp = sp; // wp does not affect reference count.
> if(auto sp2 = wp.lock()) // Check if the object still exist. 
> { 
>     // use sp2. 
> } else{
>     // sp2 has been destroyed.
> }
>```
>
> **When To Use**
> - When you need to reference an object managed by 'std::shared_ptr' without affecting its lifetime.
> - For breaking circular references between 'std::shared_ptr' instances.
>
> **When Not to Use**
> - As a primary owning reference, since it does not manage the object's lifetime.
> - When you do not need to break cycles between 'std::shared_ptr' instances.
>
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Automatic Memory Management**: 
> Smart pointers automatically manage the lifetime of dynamically allocated objects, reducing the risk of memory leaks.
>
> - **Exception Safety**:
> They ensure that resources are properly relased even in the presence of exceptions.
>
> - **Clear Ownership Semantics**:
> Different types of smart pointers provide clear semantics for ownership and resource management.
>
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**: 'std::shared_ptr' has some overhead due to reference counting and atomic operations, which can impact performance.
>
> - **Complexity**:
> Using smart pointers can add complexity, especially when dealing with circular dependencies and weak references.
>
> - **Incorrect Usage**:
> Misuse of smart pointers(e.g., creating cycles with 'std::shared_ptr') can still lead to resource management issues.
>
>
>
> <hr>
>
>
>
> ### <font color="#a442f5">By Reference Wrapper</font>
> Allows you to store references in contexts where only objects are usually allowed, such as in containers like 'std::vector' or 'std::list'. The most common tool for this is 'std::reference_wrapper', which is part of Standard Library.
>
> 'std::reference_wrapper' wraps a reference is an object that can be copied and assigned like a regular object. This is useful because references themselves cannot be stored in containers, but 'std::reference_wrapper' can, allowing indirect reference storage.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> #include <functional>
> #include <vector>
>
>int main()
>{
>   int a = 10;
>   int b = 20;
>   int c = 30;
>
>   // Create a vector of reference wrappers
>   std::vector<std::vector_wrapper<int>> vec = { a, b, c };
>
>   // Modify the original variables through the reference wrapper
>   for( int& element : vec )
>   {
>      element.get() += 5; // Use .get() to access the reference
>   }
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Storing References in Containers**:
> When you need to store references in containers, which normally store copies of objects.
>
> - **Passing References to Callbacks**:
> It's useful when you need to pass references to functions or callbacks that expect objects.
>
> - **Avoiding Copy Overheads**:
> When you want to avoid the overhead of copying large objects and instad work with their references.
>
> **When Not to Use**
>
> - **When Ownership is Important**:
> If the ownership of the object matters, consider using smart pointer instead, as 'std::reference_wrapper' does not manage the object's lifetime.
>
> - **For Simple Reference Passing**:
> If you do not need to store or pass the reference in a container or function expecting objects, a normal reference will suffice.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Efficiency**:
> Allow passing and storing references without the overhead of copying.
>
> - **Container Compatibility**:
> Enables references to be stored in standard containers that normally do not allow reference types.
>
> - **Integration**:
> Works seamlessly with standard algorithms and other STL components.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **No Ownership**:
> 'std::reference_wrapper' does not manage the object's lifetime, which can lead to dangling references if the original object is destroyed.
>
> - **Additional Access Step**:
> You need to use '.get()' to access the underlying reference, which adds a small overhead and complexity.
>
> - **Potential for Dangling References**:
> If the object being references is destroyed while the reference wrapper is still in use, it leads to undefined behavior.












### <font color="#ffc900">3. Object-Oriented Programming(OOP)</font>
> ### <font color="#a442f5">Class Features</font>
> ### <font color="#ff009e">Constructors & Destructors</font>
> In C++, constructors and destructors are special member functions of a class that are responsible for initializing and cleaning up objects, respectively. They play a fundamental role in managing the lifecycle of objects and ensuring proper resource management. Constructors are invoked automatically when an object of the class is created. They initialize the object's data members and set up the object for use.
>
> **Constructors**
>
> - **Default Constructors**:
> Initializes an object with default values if no explicit constructor is defined.
>
> - **Parameterized Constructor**:
> Accepts parameters to initialize an object with specific values.
>
> - **Copy Constructor**:
> Initializes an object as a copy of another object of the same type.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> class Person
> {
>     private:
>        std::string name;
>        short int age;
>
>     public:
>        // Default Constructor
>        Person() : name("NaN"), age(0) {}
>
>        // Parameterized Constructor
>        Person(const std::string& p_name, const short int p_age) : name(p_name), age(p_age) {}
>
>        // Copy Constructor
>        Person(const Person& other) : name(other.name), age(other.age) {}
> };
>```
>
> **Destructors**
>
> Destructors are called automatically when an obejct goes out of scope or is explicitly deleted. They are responsible for relasing resources (e.g., memory, file handles, database connection ...) allocated by the object during its lifetime. A destructor is identified by its name preceded by a tilde '~'. It has no parameters and no return types.
>
> **<font color="#428df5">Example</font>**
>```cpp
> class Resource
> {
>     private:
>        int* data;
>  
>     public:
>        // Constructor
>        Resource()
>        {
>           data = new int[10]; // Allocate memory.
>        } 
>
>        // Destructor
>        ~Resource()
>        {
>           delete[] data; // Free the allocated memory.
>        } 
> }
>```
>
> **When To Use**
> 
> - **Constructor**: 
> Use constructors to initialize object state, set default values, or perform any necessary setup operations.
>
> - **Destructors**:
> Use destructors to release rsources acquired by the object during its lifetime, such as memory allocated with 'new' or 'new[]', file handles or network connections. 
>
> **When Not to Use**
>
> - **Constructors**:
> Avoid complex logic or heavy computations in constructors, as they should focus on object initialization.
>
> - **Destructors**:
> Avoid performing operations that may throw expectations or rely on other object that may have already been destroyed, as destructors should ideally be straightforward and efficient.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Resource Management**
>
> - **Initialization**:
> Allow objects to be initialized with specific values or default settings. 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**
>
> - **Performance**:
> Poorly designed constructors or destructors can impact program performance, especially in resurce-intensive applications.
>
><hr>
>
>
>
> ### <font color="#ff009e">Member Functions(const & non-const)</font>
> Member functions are functions defined inside a class that have access to its member (both data and other functions). Member functions can be classified as **const** or **non-const** depending on whether they are allowed to modify the object's state.
>
> - **Non-const Member Functions**:
> These can modify the member variables of the object.
>
> - **Const Member Functions**:
> These cannot modify the member variables of the object.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>
>class Example
>{
>   private:
>      int value;
>
>   public:
>      // Non-const member function
>      void setValue(int newValue)
>      {
>         value = newValue; // Can modify member variable
>      }
>
>      // Const member function
>      int getValue() const
>      {
>         return value; // Cannot modify member variable
>      }
>
>      // Non-const member function that modifies the object
>      void incrementValue()
>      {
>         value++;
>      }
>
>      // Const member function that does not modify the object
>      void printValue() const
>      {
>         std::cout << "Value: " << value << std::endl;
>      }
>};
>
>int main()
>{
>   Example example;
>   example.setValue(10); // Non-const function modifies the value
>   example.printValue(); // Const function only ready the value
>   example.incrementValue(); // Non-const function moddifies the value
>   example.printValue(); // Const function only ready the value
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - Const Functions: Use const member functions when the function should only read the object’s data and not modify it. This ensures the function is safe and prevents accidental changes to the object.
>
> - Non-Const Functions: Use non-const member functions when you need to modify the state of the object.
>
> **When Not to Use**
>
> - Const Functions: Avoid using const functions when you need to change the object’s state, as they do not allow modifications.
>
> - Non-Const Functions: Do not use non-const functions unnecessarily if the function doesn’t need to modify the object’s state.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Code Safety**: Const functions add safety by preventing unintended changes to the object’s state.
>
> - **Readability**: Clearly distinguishes between functions that modify the object and those that do not.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Restrictive**: Const functions may be restrictive if you need to make changes but accidentally declare the function as const.
>
> - **Complexity**: Using const and non-const overloads of the same function may introduce complexity in code.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Overloading(Function & Operator)</font>
> Refers the ability to define multiple functions or operators with the same name but different parameter types or numbers. This allows C++ to perform different actions depending on the inputs provided, making the code intutive and easier to read.
>
> - **Function Overloading**:
> Allows multiple functions to have the same name but differ in the type or number of parameters. This enables defining functions with the same name but handling different data types or argument list.
>
> - **Operator Overloading**:
> Allows operators (like **+, -, *, ==**, etc.) to be redefined for user-defined types such as classes or structs, providing intutive usage of operators with custom objects.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// Function Overloading
>
>#include <iostream>
>
>// Function to add two integers
>int add(int param_1, int param_2)
>{
>   return(param_1 + param_2);
>}
>
>// Function to add two doubles
>double add(double param_1, double param_2)
>{
>   return(param_1 + param_2);
>}
>
>// Function to add three integers
>int add(int param_1, int param_2, int param_3)
>{
>   return(param_1 + param_2 + param_3);
>}
>
>int main()
>{
>   std::cout << "Add integers: " << add(3, 4) << std::endl;  // Calls add(int, int)
>   std::cout << "Add doubles: " << add(3.5, 4.2) << std::endl;  // Calls add(double, double)
>   std::cout << "Add three integers: " << add(1, 2, 3) << std::endl;  // Calls add(int, int, int)
>}
>```
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// Operator Overloading
>
>#include <iostream>
>
>class Complex
>{
>   private:
>      double real, image;
>
>   public:
>      Complex(double r = 0, double i = 0) : real(r), image(i) {}
>
>      // Overloading the + operator to add two Complex objects
>      Complex operator + (const Complex &obj)
>      {
>         return Complex(real + obj.real, image + obj.image);
>      }
>
>      // Overloading the << operator to print a Complex object
>      friend std::ostream& operator << (std::ostream  &output, const Complex &c)
>      {
>         output << c.real << " + " << c.image << "i";
>
>         return output;
>      }
>};
>
>int main()
>{
>   Complex c1(3.5, 2.5), c2(1.5, 5.4);
>   Complex c3 = c1 + c2; // Calls operator+ for Complex
>   std::cout << "Result of addition: " << c3 << std::endl;  // Calls operator<< for Complex
>}
>```
>
> **When To Use**
> 
> - Function Overloading: Use when you want to perform similar operations with different data types or numbers of arguments (e.g., overloading a print function for different types of objects).
>
> - Operator Overloading: Use when you want to enable intuitive operator functionality (e.g., addition, subtraction) for custom types like complex numbers or vectors.
>
> **When Not to Use**
>
> - Function Overloading: Avoid overloading functions unnecessarily if the behavior is fundamentally different, as it can lead to confusion in code readability.
>
> - Operator Overloading: Avoid overloading operators if it results in non-intuitive behavior that doesn't follow conventional meanings (e.g., using the + operator for something unrelated to addition).
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Code Readability**: Overloading allows the use of the same function or operator names for similar functionality, making code more intuitive.
>
> - **Flexibility**: Provides flexibility to handle multiple types with the same function name or operator.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Code Complexity**: Overloading too many functions or operators can make the code harder to understand and maintain.
>
> - **Potential for Misuse**: If operators are overloaded in a non-intuitive way, it can lead to confusing and unreadable code.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Struct vs Class</font>
> In C++, both **struct** and **class** are user-defined types that allow for data abstraction and encapsulation. The key difference between them lies in their default access specifiers and some stylistic conventions. Otherwise, they are largely similar and interchangeable in functionality.
>
> - **struct**: 
> Originally designed for C-style data structures, in C++, a struct can have member functions, constructors, destructors, and operator overloads, just like a class. However, the default access specifier for members in a struct is public.
>
> - **class**: 
> Designed for Object-Oriented Programming (OOP), a class can also have member functions, constructors, destructors, and operator overloads. The key distinction is that the default access specifier for members in a class is private.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// struct
>
>#include <iostream>
>
>struct Person
>{
>   std::string name; // Public by default
>   int age; // Public by default
>
>   void introduce()
>   {
>      std::cout << "Hi, my name is " << name << " and I am " << age << " years old." << std::endl;
>   }
>};
>
>int main()
>{
>   Person person = {"John Dodo", 69};
>   person.introduce(); // Accessing public member function and variables
>}
>```
>
>> **<font color="#428df5">Example</font>**
>
>```cpp
> // class
>
>#include <iostream>
>
>class Person{
>   private:
>      std::string name; // Private by default
>      int age; // Private by default
>
>   public:
>      // Constructor to initialize name and age
>      Person(
>         const std::string& n,
>         int a
>      ) : 
>      name(n),
>      age(a) {}
>
>      // Public member function to access private members
>      void introduce()
>      {
>         std::cout << "Hi, my name is " << name << " and I am " << age << " years old." << std::endl;
>      }
>};
>
>int main()
>{
>   Person person("Joe Dudu", 69);
>   person.introduce(); // Accessing public member function
>}
>```
>
> **When To Use**
> 
> - Use struct: When defining simple data structures that are primarily used for holding data and have few or no member functions.
>
> - Use class: When implementing OOP features such as data hiding, encapsulation, inheritance, and polymorphism, where controlling access to members is essential.
>
> **When Not to Use**
>
> - Use struct sparingly: If your structure involves complex behaviors or needs encapsulation, consider using a class for clarity.
>
> - Avoid class for trivial data types: If you only need a simple data structure with public members, using a struct is more idiomatic.
>
> **<font color="#b3f542">Advantages</font>**
>
> - struct: Easier and faster to set up for simple data types due to its default public access.
>
> - class: Provides better control over encapsulation and access to member variables and functions, fitting the OOP paradigm.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - struct: May expose internal details unintentionally if default public access is not handled carefully.
>
> - class: Can introduce unnecessary complexity for simple data storage and access.
>
>
>
><hr>



> ### <font color="#a442f5">Fundamentals</font>
> ### <font color="#ff009e">Encapsulation</font>
> Encapsulation is one of the four fundamental concepts in object-oriented programming (OOP), alongside polymorphism, inheritance, and abstraction. It refers to the bundling of data (attributes) and methods (functions) that operate on the data into a single unit, or class. Encapsulation also involves restricting direct access to some of an object's components, which is a means of preventing unintended interference and misuse of the data.
>
> **Data Hiding**
>
> Encapsulation allows the internal representation of an object to be hidden from the outside. Only the object's own methods can directly manipulate its fields.
>
> **Access Modifiers**
>
> **Public**:
> Members declared public can be accessed from outside the class.
>
> **Private**:
> Members declared private can only be accessed from within the class.
>
> **Protected**:
> Members declared protected can be accessed within the class and by derived classes.
>
> **Getters & Setters**
>
> Encapsulation often uses getter and setter methods to control access to the private fields. Getters retrieve the value of a private member, while setters modify the value of a private member.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Person
>{
>   private:
>      std::string name;
>      short int age;
>   
>   public:
>      Person(
>         const std::string& p_name, 
>         short int p_age
>      ):
>         name(p_name),
>         age(p_age)
>      {}
>
>      void set_name(const std::string& p_name) 
>      {
>         name = p_name;
>      }
>
>      void set_age(const short int p_age) 
>      {
>         age = p_age;
>      }
>
>      const std::string get_name() const
>      {
>         return name;
>      }
>
>      const short int get_age() const
>      {
>         return age;
>      }
>};
>```
>
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Data Integrity** 
> 
> - **Modularity**
>
> - **Security**
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**
>
> - **Complexity**
>
>
>
><hr>
>
>
>
> ### <font color="#ff09e">Inheritance</font>
> Inheritance is a fundamental concept in object-oriented programming that allows a class(called a derived class or subclass) to inherit attributes and methods from another class(called a base class or superclass). This mechanism promotes code reuse, improves organization and facilities the creation of hierarchical relationships between classes.
>
> **Access Specifiers**
>
> **Public Inheritance**:
> Public and protected members of the base class remain public and protected in the derived class, respectively.
>
> **Protected Inheritance**:
> Public and protected members of the base class become protected in the derived class.
>
> **Private Inheritance**:
> Public and protected members of the base class become private in the derived class.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Animal
>{
>   public:
>      void eat()
>      {
>         std::cout << "Animal is eating . . ." << std::endl;
>      }
>};
>
>class Dog : public Animal
>{
>   public:
>      void bark()
>      {
>         std::cout << "Animal is barking . . ." << std::endl;
>      }
>};
>
>int main
>{
>   Dog myDog;
>   myDog.eat(); // Inherited from class Animal.
>   myDog.bark(); // Defined in class Dog.
>   
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Code Reuse**
>
> - **Hierarchical Relationships**:
> Use inheritance to represent hierarchical relationships where a derived class is a specialized version of the base class.
>
> **When Not to Use**
>
> - **Unrelated Classes**:
> Avoid using inheritance for classes that do not share a logical relationship, as it can lead to a confusing and inappropriate hierarchy.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Data Integrity**
>
> - **Modularity**
>
> - **Security** 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**
>
> - **Complexity**
>
>
>
><hr>
>
>
>
> ### <font color="#ff09e">Polymorphism</font>
> Fundamental concept in object-oriented programming that allow objects of different classes to be treated as objects of a common superclass. It enables a single interface to be used for entities of different types, providing flexibility and extensibility in software desing.
>
> **Compile-Time Polymorphism (Static Binding):**
> Achieved through function overloading and templates.The compiler determines which function to call based on the function signature at compile-time.
>
> **Run-Time Polymorphism (Dynamic Binding)**:
> Achieved through inheritance and virtual functions. The decision on which function to call is made at run-time, based on the type of object pointed to by the base class pointer or reference. In C++, virtual functions enable run-time polymorphism. They are declared in the base class using the 'virtual' keyword and overridden in derived classes to provide specific implementations.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Shape
>{
>  public:
>     virtual ~Shape() // Virtual destructor
>     {
>        std::cout << "Destroying a shape . . ." << std::endl;
>     }
>
>     // Virtual Function
>     virtual void draw() const
>     {
>        std::cout << "Drawing a shape . . ." << std::endl;
>     }
>};
>
>class Circle : public Shape
>{
>  public:
>     ~Circle() override // Override destructor (optional but good practice)
>     {
>        std::cout << "Destroying a Circle . . ." << std::endl;
>     }
>
>     // Override the virtual function
>     void draw() const override
>     {
>        std::cout << "Drawing a Circle . . ." << std::endl;
>     }
>};
>```
>
> **When To Use**
> 
> - **Code Reuse**:
> Use polymorphism to reuse code by treating objects of different derived classes through a common interface(base class).
>
>  - **Flexibility**:
> Use polymorphism to write a generic algorithms that can operate on different types of objects without knowing their exact types at compile-time.
>
> **When Not to Use**
>
> - **Performance Considerations**:
> Avoid excessive use of virtual functions in performance-critical code due to the overhead of dynamic dispatch.
>
> - **Over-Abstraction**:
> Avoid unnecessary inheritance hierarchies or virtual functions that do not add value to the design.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility & Extensibility**:
> Enables the addition of new classes and behaviors without modifying existing code.
>
> - **Code Reuse** 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Runtime Overhead**:
> Dynamic dispatch(virtual functions) introduces a slight runtime overhead compared to static function calls.
>
> - **Complexity** 
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Abstraction (Abstract Classes & Interfaces)</font>
> Core concept of object-oriented programming that focuses on exposing only the necessary parts of an object and hiding the implementation details. This is achived using abstract classes and interfaces, which provide a way to define methods that must be implemented by derived classes but do not provide the implementation themselves.
>
> Abstract classes and interfaces provide a way to create a template or blueprint for other classes. They allow you to define a set of methods that must be implemented, ensuring consistency across different classes that implement the same interface.
>
> **Abstract Classes**:
> Can not be instantiated directly and is intented to be a base class. It contains at least one pure virtual function, which is a function declared with the '=0' syntax. Derived classes are required to provide implementations for these pure virtual functions.
>
> **Interfaces**:
> Although C++ does not have a separate keyword for interfaces as in some other languages (like Java), interfaces can be implemented using abstract classes that contain only pure virtual function. An interface defines a contract that derived classes must fulfill.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <string>
>
>// Abstract class with pure virtual functions (interface)
>class Animal
>{
>   public:
>      // Pure virtual function, making this class abstract
>      virtual void makeSound() const = 0;
>      virtual std::string getType() const = 0;
>
>      virtual ~Animal() = default; // Virtual destructor for proper cleanup
>};
>
>// Derived class implementing the interface
>class Dog : public Animal
>{
>   public:
>      void makeSound() const override
>      {
>         std::cout << "Woof!" << std::endl;
>      }
>
>      std::string getType() : const override
>      {
>         return "Dog";
>      }
>};
>
>// Derived class implementing the interface
>class Cat : public Animal
>{
>   public:
>      void makeSound() const override
>      {
>         std::cout << "Meow!" << std::endl;
>      }
>
>      std::string getType() const override
>      {
>         return "Cat";
>      }
>};
>
>int main()
>{
>   Animal* myDog = new Dog();
>   Animal* myCat = new Cat();
>
>   myDog -> makeSound(); // Woof!
>   myCat -> makeSound(); // Meow!
>
>   delete myDog; // Be sure it's not Mr. Wick's dog!
>   delete myCat;
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Define a Common Interface**: 
> Use abstract classes to define a common interface for a group of related classes, ensuring they implement specific methods.
>
> - **Prevent Instantiation of Base Class**: 
> Use abstract classes when you want to prevent the base class from being instantiated directly, ensuring that only derived classes provide concrete implementations.
>
> - **Enforce a Contract**: 
> When you want to enforce a certain contract or behavior in derived classes, using abstract classes ensures that derived classes implement the necessary functionality.
>
> **When Not to Use**
>
> - **Concrete Classes**: 
> Do not use abstract classes if you need a class to be instantiated directly, as abstract classes cannot be instantiated.
>
> - **Simple Inheritance**: 
> If the base class does not need to enforce any specific methods or behavior, a regular class inheritance might be more appropriate.
>
> - **Overhead**: 
> If adding an abstract class or interface adds unnecessary complexity without providing a clear benefit, it may be better to avoid them.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Encapsulation of Behavior**: 
> Abstract classes allow you to encapsulate behavior that is common across multiple derived classes, promoting code reuse and consistency.
>
> - **Modular Design**: 
> They support modular design by providing a clear separation between interface and implementation, making the code easier to maintain and extend.
>
> - **Polymorphism**: 
> Abstract classes facilitate polymorphism, allowing you to write code that can work with objects of different classes through a common interface. 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Cannot Instantiate**: 
> Abstract classes cannot be instantiated directly, which can be a limitation if you need to create objects of that type.
>
> - **Increased Complexity**: 
> Using abstract classes can lead to increased complexity in the code, especially if the hierarchy of classes becomes deep or too broad.
>
> - **Overhead in Maintenance**: 
> When many classes inherit from an abstract class, changes to the base class can impact a large number of derived classes, increasing maintenance effort.
>
>
>
>
><hr>



> ### <font color="#a442f5">Advanced OOP</font>
> ### <font color="#ff009e">Virtual Destructors</font>
> A virtual destructor is a destructor that can be overridden in a derived class. It is declared with the 'virtual' keyword, just like virtual functions. Virtual destructors are crucial in object-oriented programming when dealing with inheritance, especially when polymorphism is involved. They ensure that the correct destructor is called when an object is deleted through a base class pointer.
>
> **Polymorphic Base Classes**:
> When a class has virtual functions, it is typically meant to be used polymorphically(i.e: through base class pointers or references). If a derived object is deleted through a base class pointer, a non-virtual destructor will only call the base class's destructor, potentially leading to resource leaks or undefined behavior.
>
> **Virtual Destructor Mechanism**:
> Declaring a destructor as virtual in the base class ensures that the derived class's destructor is called when an object is deleted through a base class pointer. This is essential for proper cleanup of derived class resources.
>
> **Inheritance Hierarchies**:
> In complex inheritance hierarchies, virtual destructors ensure that all destructors in the chain are called in the correct order, from the derived class to the base class.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>
>class Base
>{
>   public:
>      Base()
>      {
>         std::cout << "Base constructor." << std::endl;
>      }
>
>      virtual ~Base()
>      {
>         std::cout << "Virtual base destructor" << std::endl;
>      }
>};
>
>class Derived : public Base
>{
>   public:
>      Derived()
>      {
>         std::cout << "Derived constructor." << std::endl;
>      }
>
>      ~Derived()
>      {
>         std::cout << "Derived destructor." << std::endl;
>      }
>};
>
>int main()
>{
>   Base* obj = new Derived(); // Base pointer to Derived object.
>   delete obj; // Correctly calls Derived's destructor.
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Polymorphism**: 
> Whenever a class is intended to be used polymorphically (i.e., when you have virtual functions or plan to use base pointers/references to point to derived objects), you should use a virtual destructor.
>
> - **Base Classes**: 
> For any class that serves as a base class in a hierarchy and can potentially be deleted through a base class pointer, a virtual destructor is necessary to ensure proper cleanup.
>
> **When Not to Use**
>
> - **Non-Polymorphic Classes**: 
> If a class is not intended to be used polymorphically (it doesn’t have virtual functions or is not a base class), there’s no need to declare a virtual destructor. Doing so would add unnecessary overhead.
>
> - **Performance-critical Classes**: 
> Virtual destructors introduce a slight runtime overhead due to the vtable lookup. For classes that do not need to support polymorphic deletion, avoiding virtual destructors can improve performance.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Correct Resource Management**: 
> Ensures that derived class resources are properly released, preventing resource leaks and undefined behavior.
>
> - **Safe Polymorphic Deletion**: 
> Provides safety when deleting derived objects through base class pointers, maintaining proper order of destructor calls.
>
> - **Consistent Behavior**: 
> Promotes consistent and predictable behavior in object-oriented designs, especially when working with complex inheritance hierarchies.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**: 
> Virtual destructors add a small overhead due to the vtable mechanism. This is usually negligible but can be a consideration in performance-critical applications.
>
> - **Unnecessary in Non-polymorphic Scenarios**: 
> Using virtual destructors in classes that are not intended for polymorphic use cases adds unnecessary complexity and can be misleading to other developers.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Pure Virtual Functions</font>
> They are used to create abstract classes. They are declared in base class using the '= 0' syntax and are intended to be overridden by derived class. A class that contains at least one pure virtual function is considered an abstract class and cannot be instantiated directly.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>
>// Abstract class with a pure virtual function
>class Shape
>{
>   public:
>      virtual void draw() const = 0; // Pure virtual function
>      virtual ~Shape() = default; // Base virtual destructor
>};
>
>class Circle : public Shape
>{
>   public:
>      void draw() const override // Implementing pure virtual function
>      {
>         std::cout << "Drawing a circle..." << std::endl;
>      }
>
>      ~Circle() override
>      {
>         // Derived destructor
>      }
>};
>
>class Square : public Shape
>{
>   public:
>      void draw() const override // Implementing pure virtual function
>      {
>         std::cout << "Drawing a square..." << std::endl;
>      }
>
>      ~Square() override
>      {
>         // Derived destructor
>      }
>};
>
>
>int main()
>{
>   Shape* circle = new Circle(); // Pointer to base class pointing to derived class.
>   Shape* square = new Square();
>
>   circle -> draw(); // Calls Circle's implementation
>   square -> draw(); // Class Square's implementation
>   
>   delete circle;
>   delete square;
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Interface Design**: 
> Use pure virtual functions when you want to define an interface or a contract that all derived classes must adhere to. This enforces a common set of functions that must be implemented, making it easier to work with different types that share the same interface.
>
> - **Base Classes for Inheritance**: 
> When creating a base class that provides common functionality and serves as a foundation for other classes, use pure virtual functions to enforce that derived classes implement certain behaviors.
>
> - **Polymorphic Behavior**: 
> Pure virtual functions are essential when you need polymorphism, allowing objects of different derived types to be treated uniformly through a common base class interface.
>
> **When Not to Use**
>
> - **Concrete Classes**: 
> If the base class is intended to be instantiated directly or to provide complete implementations, pure virtual functions are not appropriate.
>
> - **Simple Inheritance**: 
> In cases where you don't need polymorphic behavior or a strict interface, and simple inheritance is sufficient, pure virtual functions might add unnecessary complexity.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Enforces Interface**: 
> Pure virtual functions enforce that derived classes provide specific implementations, making the code more robust and modular.
>
> - **Facilitates Polymorphism**: 
> They are essential for polymorphic behavior, allowing the same interface to be used for different types of objects, which is a core concept in object-oriented design.
> 
> - **Promotes Code Reusability**: 
> Using pure virtual functions allows developers to write more reusable and extendable code, as the base class provides a common interface for different derived types.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Cannot Instantiate Abstract Classes**: 
> Classes with pure virtual functions cannot be instantiated directly, which may be limiting if you want to create instances of base classes.
>
> - **Potential for Misuse**: 
> Overuse or inappropriate use of pure virtual functions can lead to overly complex and hard-to-maintain inheritance hierarchies.
>
> - **Requires Derived Class Implementation**: 
> Every derived class must implement the pure virtual functions, which can sometimes lead to redundant code if many derived classes share similar functionality.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">RAII(Resource Acquisition Is Initialization)</font>
> RAII is a programming idiom used in C++ to manage resouces such as memory, file handsles and network connections. They key idea behind it is to tie the lifecycle of a resource to the lifetime of an object. When an object is created, it acquires the resource (e.g.: allocates memory, opens a file, establishes connection with database, etc.) and when the object is destroyed, it relases the resource (e.g: deallocates memory, closes the file, disconnects the database connection, etc.).
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <fstream>
>
>class FileHandler
>{
>   private:
>      std::ofstream file;
>
>   public:
>      FileHandler(const std::string& filename)
>      {
>         file.open(filename);
>         if(!file.is_open())
>         {
>            throw std::runtime_error("Failed to open the file");
>         }
>      }
>
>      ~FileHandler()
>      {
>         if(file.is_open())
>         {
>            file.close();
>         }
>      }
>
>      void write(const std::string& payload)
>      {
>         file << payload;
>      }
>}
>
>int main()
>{
>   try
>   {
>      FileHandler fileHandler("example.txt");
>      fileHandler.write("Hello, RAII");
>   } catch(const std::exception& error)
>   {
>      std::cerr << error.what() << std::endl;
>   }
>   
>   return 0;
>}
>```
>
> **When To Use**
> 
> - Use RAII when managing resources that require explicit acquisition and relase, such as dynamic memory, file handles, sockets and mutexes.
>
> - Use RAII to ensure that resources are automatically relased when they are no longer needed, preventing leaks.
>
> **When Not to Use**
>
> - Avoid using RAII for resources that do not require explicit management or where automatic management could lead to performance overhead.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Automatic Resource Management**:
> Ensures resource are relased properly, preventing leaks
>
> - **Exception Safety**:
> RAII provides string exception safety, as resources are released when exceptions are thrown.
>
> - **Clear Ownership**:
> The obejct that manages the resource clearly owns it, making the code easier to understand and maintain. 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Ovearhead** 







### <font color="#ffc900">4. Templates & Generic Programming</font>
> ### <font color="#a442f5">Basic Templates</font>
> ### <font color="#ff009e">Function Templates</font>
> Feature that allows the creation of generic functions that can operate on different data types without rewriting the same function multiple times for each type. They enable a function to accept parameters of any type, which is particulary useful for implementing common operations like sorting, searching or handling various data structures (e.g.: arrays, linked lists) where the type of data might vary.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template <typename T>
>T functionName(T parameter_1, T parameter_2)
>{
>   // Function implementation
>}
>```
>
> **When To Use**
> 
> - **Generic Operations**: Use function templates when you need to perform the same operation on different data types (e.g., finding maximum, minimum, sorting).
>
> - **Code Reusability**: Function templates help write reusable and maintainable code by eliminating the need to duplicate function definitions for each type.
>
> - **Type Safety**: Function templates provide type safety because the compiler automatically ensures that the types used with the template are compatible with the operations performed in the function.
>
> **When Not to Use**
>
> - **Type-Specific Logic**: If the function has logic that is inherently specific to certain types, it might not be suitable for a function template.
>
> - **Complex Type Deduction**: In scenarios where type deduction becomes too complex or ambiguous, using function templates might lead to confusing code and difficult-to-debug errors.
>
> - **Overhead for Simple Cases**: For simple, one-off cases, writing a specific function might be more straightforward and clear than using templates.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Code Reusability**: Function templates allow writing generic functions that work with any data type, reducing code duplication.
>
> - **Type Safety**: The compiler checks that the types passed to the function are valid and compatible with the operations performed inside the function.
>
> - **Flexibility**: Function templates can handle any data type, making them highly flexible and adaptable to different use cases.
>
> - **Maintainability**: Using function templates helps maintain consistency in code, making it easier to maintain and extend in the future.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Compile-Time Overhead**: Function templates increase the compilation time because the compiler generates separate functions for each unique type that is used.
>
> - **Code Bloat**: If many different types are used with a function template, it can lead to code bloat, as the compiler generates a separate version of the function for each type.
>
> - **Error Complexity**: Template-related error messages can be difficult to understand, especially for beginners, because they often involve complex type deductions.
>
> - **Limited Specialization**: In some cases, it may be necessary to specialize templates for certain types to handle specific behaviors, which can add complexity to the code.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Class Templates</font>
> Allows you to create a blueprint for a class that can handle different data types without rewriting the class for each specific type. They provide a way to define classes that operate on generic types, making them flexible and reusable. This is particulary useful for implementing data structures like linked lists, stack, queues and others where the type of elements might vary.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template <typename T>
>class ClassName
>{
>   public:
>      T memberVariable;
>
>      ClassName(T value) : memberVariable(value) {}
>
>      T getValue() const
>      {
>         return memberVariable;
>      }
>
>      void setValue(T value)
>      {
>         memberVariable = value;
>      }
>};
>```
>
> **When To Use**
> 
> - **Generic Data Structures**: Use class templates when implementing generic data structures like stacks, queues, linked lists, and trees that should work with various data types.
>
> - **Code Reusability**: Class templates help write reusable and maintainable code by avoiding duplication. You can use the same class template for different types without rewriting the class for each type.
>
> **Type Safety**: Class templates provide type safety as the compiler checks that the types used with the template are compatible with the operations performed within the class.
>
> **When Not to Use**
>
> - **Type-Specific Behavior**: If a class requires behavior specific to certain types (e.g., specialized methods for specific data types), using a class template may complicate implementation.
>
> - **Overhead for Simple Classes**: For simple, one-off cases, writing a specific class might be clearer and easier to understand than using a template.
>
> - **Complex Specialization**: If extensive specialization of class template functions is needed for different types, it might be better to use inheritance or other design patterns.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Code Reusability**: Class templates allow you to write generic classes that can be used with any data type, reducing code duplication and improving maintainability.
>
> - **Type Safety**: The compiler ensures that the types used with the class template are valid and compatible with the class's operations.
>
> - **Flexibility**: Class templates can handle any data type, making them adaptable to a wide range of use cases.
>
> - **Compile-Time Type Checking**: Errors related to type mismatches are caught at compile time, reducing the risk of runtime errors.
>
> **<font color="#f56942">Disadvantages</font>**
> - **Compile-Time Overhead**: Class templates increase compilation time since the compiler generates a separate version of the class for each unique type used.
>
> **Code Bloat**: If many different types are used with a class template, it can lead to code bloat due to multiple instantiations.
>
> - **Complex Error Messages**: Template-related error messages can be difficult to understand, especially for beginners, due to complex type deductions and template instantiation errors.
>
> - **Limited Debugging Support**: Debugging template code can be more challenging compared to non-template code because of the abstraction and complexity involved.
>
>
>
><hr>



> ### <font color="#a442f5">Advanced Templates</font>
> ### <font color="#ff009e">Template Specialization</font>
> Allows you to define a specific implementation of a template for a particular data type. While templates provide a way to write generic code, template specialization provides a way to handle specific cases that require a different implementation from the general template. There are two main types of template specialization.
>
> - **Full Specialization**:
> This is where you provide a completely specialized implementation for a specific type.
>
> - **Partial Specialization**:
> This allows specialization for a subset of template parameters (typically used for class templates, not function templates).
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// Full Specialization Syntax
>template <> // Indication that this is a specialization.
>class ClassName<Type>
>{
>   // Specialized implementation for Type.
>};
>
>// Partial Specialization
>// Generic Implementation
>template <typename T, typename U>
>class ClassName
>{
>   // Generic implementation.
>}
>
>template<typename T>
>class ClassName<T, int>
>{
>   // Special implementation when the second type is int
>};
>```
>
> **When To Use**
> 
> - **Specialized Behavior**: When you need different behavior for specific types, like handling std::string differently from other data types.
>
> - **Performance Optimization**: Specialization allows you to write optimized code for certain types while maintaining generic functionality for others.
>
> - **Type-Specific Logic**: Use when certain types require distinct logic that the general template cannot accommodate efficiently.
>
> **When Not to Use**
>
> - **Overuse of Specialization**: Avoid specializing templates for too many types as it can lead to code bloat and increased complexity.
>
> - **Maintainability**: Too many specializations can make the codebase hard to understand and maintain.
>
> - **Simple Cases**: If the specialized behavior is minor and does not significantly impact performance or logic, it might not be necessary.
>
> **<font color="#b3f542">Advantages</font>**
> 
> - **Flexibility**: Allows you to tailor the behavior of a template to suit specific types or conditions without affecting the general template.
>
> - **Type Safety**: Provides type-safe customization of templates, ensuring that only appropriate types receive specialized behavior.
>
> - **Performance**: Enables optimization for specific types, leading to potentially better performance.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Increases code complexity, making it harder to read and understand, especially for those unfamiliar with template specialization.
>
> - **Code Bloat**: Specializing templates for many types can lead to code bloat, as each specialized version adds to the code size.
> 
> - **Maintenance Difficulty**: More specialized cases can make the codebase challenging to maintain and extend, particularly if future changes affect multiple specializations.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Variadic Templates</font>
> Allows you to accept an arbitrary number of arguments. They were introduced in C++11 to provide a more elegant and type-safe way to handle functions and classes that work with a variable number of parameters. Variadic templates can be used with both function templates and class templates.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template <typename... Args>
>void functionName(Args... args)
>{
>   // Function implementation
>}
>```
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
> 
>// Base case: empty function to end recursion
>void print()
>{
>   std::cout << "End of argument list." << std::endl;
>}
>
>// Variadic template function
>template <typename T, typename... Args>
>{
>   void print(const T& first, const Args&... rest)
>   {
>      std::cout << first << std::endl; // Print the first argument.
>      print(rest...); // Recursively call with the remaining arguments.
>   }
>}
>
>int main()
>{
>   print(1, 2, 3, 5, 7.2, 12.59, "Hello World!", "E"); // Calls the variadic template.
>
>   return 0;
>}
>```
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <string>
>
>// Base case for tuple
>template<typename... Args>
>class Tuple;
>
>// Specialization for when there are no more types.
>template<>
>class Tuple<> {};
>
>// Recursive definition for Tuple
>template<typename Head, typename... Tail>
>class Tuple<Head, Tail...>
>{
>   public:
>      Head head;
>      Tuple<Tail...> tail;
>
>      Tuple(const Head& h, const Tail&... t) : head(h), tail(t...) {}
>
>      void print() const
>      {
>         std::cout << head << " ";
>         tail.print();
>      }
>};
>
>// Specialization of print() for empty tuple to end recursion
>template<>
>void Tuple<>::print() const
>{
>   std::cout << std::endl;
>}
>
>int main()
>{
>   Tuple<int, double, std::string> myTuple(1, 2.4, "Hello World");
>   myTuple.print();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Generic Functions**: When you need a function that can handle an arbitrary number of arguments, such as logging functions or functions that format strings.
>
> - **Wrapper Functions**: When writing wrapper functions that pass arguments to other functions, variadic templates allow you to pass through any number of arguments.
>
> - **Tuple and Container Types**: Useful for implementing tuples, variant types, and other container types that can hold a variable number of elements of different types.
>
> - **Flexible Interfaces**: When designing libraries or APIs that require flexible interfaces, variadic templates allow you to handle different numbers and types of arguments without overloading functions.
>
> **When Not to Use**
>
> - **Complexity**: Avoid using variadic templates in situations where a fixed number of arguments are sufficient. Overuse can make code harder to understand and maintain.
>
> - **Readability**: When code readability is a priority, consider using alternatives such as overloads or standard containers. Variadic templates can be confusing for developers not familiar with template metaprogramming.
>
> - **Performance Concerns**: Variadic templates involve recursive function calls, which might lead to performance issues in time-critical applications, though modern compilers optimize this well.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility**: Provides a way to write generic functions and classes that can handle an arbitrary number of arguments of different types.
>
> - **Type Safety**: Unlike older C-style variadic functions (using ellipsis ...), variadic templates provide type safety, ensuring the compiler checks types at compile-time.
>
> - **Code Reusability**: Allows the creation of reusable, generic functions and classes, reducing code duplication.
>
> - **Extensibility**: Makes it easier to extend existing code with new features, as new argument types can be added without changing the function signature.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complex Syntax**: The syntax and concepts can be difficult to understand for developers unfamiliar with templates, making the code less readable.
>
> - **Debugging Challenges**: Debugging errors in variadic templates can be more challenging due to the recursive nature of template instantiation.
>
> - **Error Messages**: Error messages generated by variadic templates can be cryptic and hard to interpret, especially when multiple types are involved.
>
> - **Compilation Time**: Excessive use of variadic templates can lead to longer compilation times due to the extensive template instantiation required. 
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Template Metaprogramming(TMP)</font>
> Is a technique where templates are used to perform computations at compile time. TMP leverages the power of templates to create algorithms, evaluate constants or manipulate types during the compilation phase rather than at runtime. This technique can greatly optimize performance and is widely used in generic libraries like the C++ Standard Template Library (STL), Boost and others.
>
> TMP utilizes the compiler as a 'mini-interpreter' to generate highly efficient code through recursive template instantiation. However, TMP is known for its complexity and steep learning curve, making it challenging to write and debug.
>
> **Core Concepts in TMP**
> - **Recursion**:
> TMP uses recursion to perform iterative operations at compile time. This recursion is done through template specialization.
>
> - **SFINAE (Substitution Failure Is Not An Error)**:
> TMP uses SFINAE to choose between different template overloads, allowing programmer to check conditions at compile time.
>
> - **Type Traits**:
> A set of tool that allow checking and manipulating types at compile time.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// A common example for TMP is the computation of the factorial of a number at compile time.
>
>#include <iostream>
>
>// Recursive case: N factorial
>template <int N>
>struct Factorial
>{
>   static const int value = N * Factorial<N - 1>::value;
>};
>
>// Base case: 0 factorial = 1
>template <>
>struct Factorial<0>
>{
>   static const int value = 1;
>};
>
>int main()
>{
>   std::cout << "Factorial of 5: " << Factorial<5>::value << std::endl;
>
>   return 0;
>}
>```
>
> Another useful application of TMP is type manipulation using type traits. For instance, you can define a type trait that checks whether a given type is a pointer.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <type_traits>
>
>// Primary template: General case for non-pointer types.
>template <typename T>
>struct is_pointer
>{
>   static const bool value = false;
>};
>
>// Specialization for pointer types
>template <typename T>
>struct is_pointer<T*>
>{
>   static const bool value = true;
>};
>
>int main()
>{
>   std::cout << "Is a pointer? " << is_pointer<int>::value << std::endl;
>   std::cout << "Is a pointer? " << is_pointer<int*>::value << std::endl;
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Compile-time Computations**: When computations can be performed at compile time (like constant evaluation), TMP can improve runtime performance.
>
> - **Type Checking and Manipulation**: TMP is helpful when working with types at compile time, such as type selection, checking, and transformation (e.g., std::enable_if, std::conditional, std::is_same).
>
> - **Optimizing Performance**: By performing work at compile time, TMP can reduce runtime overhead, especially in performance-critical applications like game engines, numerical simulations, and scientific computing.
>
> - **Generic Libraries**: TMP is commonly used in template libraries such as STL and Boost to make them generic and efficient across a wide variety of types.
>
> **When Not to Use**
>
> - **Complexity**: TMP can introduce significant complexity into code, making it hard to understand, maintain, and debug. Avoid TMP for simple problems where compile-time evaluation isn’t needed.
>
> - **Compilation Overhead**: TMP can lead to longer compile times due to deep recursion and heavy template instantiation. If compilation speed is crucial, avoid TMP.
>
> - **Readability**: TMP-generated error messages can be difficult to decipher, especially when working with complex recursive templates. Use it only when the benefits outweigh the readability cost.
>
> - **Overengineering**: TMP should not be used if simpler runtime mechanisms would suffice. It’s important to balance elegance with maintainability.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Runtime Efficiency**: Performing computations at compile time reduces runtime overhead, leading to more efficient code.
>
> - **Type Safety**: TMP allows the development of highly generic and type-safe libraries that can handle a wide variety of types with minimal runtime cost.
>
> - **Code Reusability**: TMP promotes generic programming, which can reduce code duplication and improve maintainability.
>
> - **Advanced Compile-Time Techniques**: TMP enables compile-time algorithms, optimizations, and type checking, making code more powerful and flexible.
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: TMP requires deep knowledge of C++ templates and recursion. The learning curve is steep, and errors can be hard to diagnose.
>
> - **Compilation Time**: Template-heavy code can significantly slow down the compilation process, leading to longer development cycles.
>
> - **Readability**: TMP code can be hard to understand and maintain, especially for developers unfamiliar with template metaprogramming.
>
> - **Error Messages**: The error messages from template instantiations are often difficult to interpret, making debugging more challenging.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Concepts & 'require' Clauses</font>
> Concepts and 'requires' clauses are powerful features introduced in C++20 to improve template programming by enforcing constraints on template arguments. They help in making template code more readable, safer and easier to debug by specifying what kind of types or values a template can accept. Concepts enable you to define semantic constraints on types, ensuring that the types used in templates conform to expected behaviors or properties.
>
> A 'concept' is a compile-time predicate or constraint that is evaluated againts a template argument. It checks whether a type satisfies certain requirements such as type traits, functions or operators that a template expects from its argument. This allows for more precise and expressive template code, reducing the complexity and length of error messages when templates are used incorrectly. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template <typename T>
>concept Integral = std::is_integral_v<T>; // Concept to check if T is an integral type.
>
>template <Integral T>
>T add(T a, T b)
>{
>   return (a + b);
>}
>
>int main()
>{
>   std::cout << add(5, 10) << std::endl;  // Works, since int is an integral type
>   // std::cout << add(3.14, 2.71) << std::endl;  // Error: double is not an integral type
>}
>```
>
> A 'require' clause is used to impose additional constraints on a template function or class. It specifies a condition that must be satisfied by the template parameters in order for the template instantiation to be valid. The 'requires' keyword is used to express these constraints, either directly in the template declaration or as a trailing condition.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <concepts>
>
>template <typename T>
>requires std::is_integral_v<T>
>T multiply(T a, T b)
>{
>   return (a * b);
>}
>
>int main()
>{
>   std::cout << multiply(4, 5) << std::endl;  // Valid, int is integral
>   // std::cout << multiply(4.2, 5.1) << std::endl;  // Invalid, double is not integral
>}
>```
>
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <type_traits>
>#include <concepts>
>
> // Here, the 'Addable' concept ensures that only types supporting the '+' operator can be passed to the 'add' function.
>template <typename T>
>concept Addable = requires(T a, T b)
>{
>   a + b; // T must support addition.
>};
>
>template <typename T>
>requires Addable<T>
>T add(T a, T b)
>{
>   return (a + b);
>}
>
>int main()
>{
>   std::cout << add(10, 20) << std::endl;    // Valid
>   // std::cout << add("Hello", "World") << std::endl;  // Error: std::string doesn't support addition
>}
>```
>
> **When To Use**
> 
> - **Constraining Templates**: Use concepts to specify valid types for templates, reducing the need for complex SFINAE (Substitution Failure Is Not An Error) code.
>
> - **Improving Readability**: Use requires clauses to explicitly state constraints, making the code more readable and less error-prone.
>
> - **Preventing Invalid Types**: Use concepts to enforce that only valid types are passed to templates, avoiding cryptic compile-time errors.
>
> - **Template Debugging**: Concepts give more meaningful compile-time error messages when constraints are violated, making template debugging easier.
>
> **When Not to Use**
>
> - **Older C++ Standards**: Concepts are a C++20 feature, so they are not available in earlier standards. In such cases, SFINAE or type traits can be used to achieve similar behavior.
>
> - **Simple Templates**: For very simple templates where type constraints are obvious, concepts may be overkill.
>
> - **Overuse of Constraints**: Over-constraining templates can lead to less flexible code, so concepts should be applied judiciously.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Improves Readability**: Concepts make template code easier to read by explicitly stating type requirements.
>
> - **Better Error Messages**: Instead of obscure errors, the compiler will provide meaningful messages when template constraints are violated.
>
> - **Increases Safety**: By enforcing constraints, concepts help catch errors early at compile-time rather than runtime.
>
> - **Reduces Template Complexity**: Simplifies complex SFINAE-based template metaprogramming, leading to more maintainable code.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **C++20 Feature**: Concepts are only available from C++20 onward, so they might not be usable in all projects.
>
> - **Learning Curve**: Concepts and requires clauses introduce additional complexity for developers who are not familiar with advanced template programming.
>
> - **Overuse Can Reduce Flexibility**: Overusing concepts can sometimes make the code too restrictive, preventing valid use cases from compiling.
>
>
>
><hr>




### <font color="#ffc900">Standard Library(STL)</font>
> ### <font color="#a442f5">Containers</font>
>
>C++ containers are fundamental components of the Standard Template Library (STL) that provide a way to store and manage collections of objects. They are divided into three main categories: sequence containers, associative containers, and unordered containers. Each type of container has different characteristics and is suited for different tasks.
>
> ### <font color="#ff009e">Sequence Containers</font>
> Sequence containers maintain elements in a linear sequence and provide various ways to access and manipulate this sequence.
>
> **std::vector**
>
> A std::vector is a dynamic array that can grow and shrink in size. It provides random access to elements and is efficient for appending elements at the end.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> vec = {1, 2, 3, 4, 5};
>```
>
> **When To Use**
> - Ideal for situations where you need fast access by index and the size of the array might change.
>
>
> **std::deque**
>
> A std::deque (double-ended queue) allows insertion and deletion at both the front and the back. It is similar to a std::vector but provides more flexibility with insertion and deletion operations.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::deque<int> deq = {1, 2, 3, 4, 5};
>```
>
> **When To Use**
> - When you need efficient insertion and deletion from both ends of sequence.
>
>
> **std::list**
>
> A std::list is a doubly-linked list that allows efficient insertion and deletion of elements anywhere in the sequence. Unlike std::vector and std::deque, it does not provide random access.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::list<int> lst = {1, 2, 3, 4, 5};
>```
>
> **When To Use**
> - Best for scenarios where frequent insertions and deletions occur in the middle of the sequence.
>
>
> <hr>
>
> ### <font color="#ff009e">Associative Containers</font>
> Associative containers store elements in a sorted order, allowing for efficient retrieval using keys. They automatically handle the organization and sorting of elements:
>
> **std::set**
>
> A std::set is an associative container that stores unique elements in a sorted order. It automatically handles duplicate entries by ignoring them.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::set<int> lst = {1, 2, 3, 4, 5};
>```
>
> **When To Use**
> - When you need a collection of unique items that you want to access in sorted order.
>
>
> **std::map**
>
> A std::map is an associative container that stores elements in key-value pairs. The keys are sorted, and each key is unique.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::map<int, std::string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
> m[4] = "four";
> 
> for(const auto& pair : m)
> {
>      pair.first;
>      pair.second;
> }
>```
>
> **When To Use**
> - When you need a collection of unique items that you want to access in sorted order.
>
> <hr>
>
> ### <font color="#ff009e">Unordered Containers</font>
> Unordered containers store elements in an unordered manner, typically using hash tables. They provide fast average time complexity for retrieval, insertion and deletion.
>
> **std::unordered_set**
>
> Stores unique elements in an unordered manner, allowing for fast retrieval.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::unordered_set<int> us = {3, 1, 4, 1, 5, 9};> 
>```
>
> **When To Use**
> - Ideal for when you need a collection of unique items and do not care about the order but need fast access.
>
>
> **std::unordered_map**
>
> Stores key-value pairs in an unordered manner, allowing for fast retrieval.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::unordered_map<int, std::string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
> m[4] = "four";
> 
> for(const auto& pair : m)
> {
>      pair.first;
>      pair.second;
> }   
>```
>
> **When To Use**
> - Best for maintaining a collection of key-value pairs where order is not important, but fast access by key is needed.




> ### <font color="#a442f5">Iterators</font>
> ### <font color="#ff009e">Input/Output, Forward, Bidirectional, Random Access</font>
> Iterators are an abstraction for pointers that allow traversal of data structures, especially in the Standard Template Library (STL). These iterators come in various categories based on the operations they support and the level of access they provide to the elements in container. The five main categories are:
>
> - **Input Iterator**:
> Provides read-only access to elements in a sequence. They are unidirectional, meaning you can only move forward in the sequence.
>
>     - Can read the data pointed to.
>     - Can be incremented to point to the next element.
>     - Supports single-pass algorithms (you cannot re-read elements once passed).
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <iterator>
>#include <vector>
>
>int main()
>{
>   std::vector<int> vec = {1, 2, 3, 4};
>   std::vector<int>::iterator it = vec.begin();
>
>   while(it != vec.end())
>   {
>      std::cout << *it << " ";
>      ++it; // Move to the next element.
>   }
>}
>```
>
>
> - **Output Iterator**:
> Provides write-only access to elements in a sequence. Like input iterators, they are also unidirectional but can only write values.
>
>     - Can write data to the pointer-to element.
>     - Can be incremented to point to the next element.
>     - Typically used with output streams or algorithms that modify containers.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <vector>
>#include <algorithm>
>
>int main()
>{
>   std::vector<int> vec = {1, 2, 3, 4};
>   std::ostream_iterator<int> out_it(std::cout, " ");
>
>   std::copy(vec.begin(), vec.end(), out_it); // Writing to the output stream.
>}
>```
>
>
> - **Forward Iterator**:
> Provides both read and write access and can move forward in the sequence, but not backward. They support multiple passes over the sequence.
>
>     - Can read and write data.
>     - Supports equality and inequality comparisions (**==**, **!=**).
>     - Can be incremented (**++**).
>     - Supports multiple passes over the container.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <forward_list>
>
>int main()
>{
>   std::forward_list<int> flist = {1, 2, 3, 4};
>
>   for(auto itr = flist.begin(); itr != flist:end(); ++itr)
>   {
>      std::cout << *itr << " "; // Read access.
>   }
>}
>```
>
>
> - **Bidirectional Iterator**:
> Extends forward iterators by also allowing backward traversal. This means you can move both forward and backwards in the container.
>
>     - Can be incremented (**++**) and decremented (**--**).
>     - Supports reading and writing.
>     - Useful for containers like **std::list** or **std::set**
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <list>
>
>int main()
>{
>   std::list<int> mylist = {1, 2, 3, 4};
>
>   for(auto itr = mylist.rbegin(); itr != mylist.rend(); ++itr) // rbegin: r(everse)begin, rend: r(everse)end
>   {
>      std::cout << *itr << " "; // Accessing elements in reverse order.
>   }
>}
>```
>
>
> - **Random Access Iterator**:
> Most powerful type, allowing direct access to any element in constant time. They support a wide range of operations, including pointer arithmetic.
>
>     - Can access elements at any position (**itr + n, itr - n**).
>     - Can compare positions (**<, >, <=, >=**).
>     - Supports all bidirectional iterator operations.
>     - Used by containers like **std::vector** and **std::deque**.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <vector>
>
>int main()
>{
>   std::vector<int> vec = {10, 20, 30, 40, 50};
>   std::cout << "Element at index 2: " << vec[2] << std::endl;
>
>   // Random access iterator example
>   auto itr = vec.begin();
>   std::advance(itr, 3); // Jump to 4th element.
>   std::cout << "Advanced to: " << *itr << std::endl;
>}
>```
>
>
>
>
><hr>




> ### <font color="#a442f5">Algorithms</font>
> ### <font color="#ff009e">Sorting, Searching, Modifying</font>
>
> The Standard Template Library (STL) in C++ includes a comprehensive set of algorithms that work on containers via iterators. These algorithms provide a wide range of functionalities, from searching and sorting to modifying and inspecting elements. Here’s an overview of some key STL algorithms.
>
> ### Non-Modifying Algorithms
>
> These algorithms do not alter the contents of the container.
>
> **std::for_each**
> 
> Applies a function to each element in a range. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::for_each(vec.begin(), vec.end(), [](int &n) {n += 2;})
>```
>
> **std::find**
> 
> Searches for the first occurence of a value in a range. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> auto it = std::find(vec.begin(), vec.end(), 3)
>```
>
> **std::find_if**
>
> Searches for the first element satisfying a predicate. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> auto it = std::find_if(vec.begin(), vec.end(), [](int n){return n % 2 == 0;});
>```
>
> **std::count**
> 
> Counts the number of elements equal to a value. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int count = std::count(vec.begin(), vec.end(), 3);
>```
>
> **std::count_if**
>
> Counts elements satisfying a predicate.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int count = std::count_if(vec.begin(), vec.end(), [](int n){return n % 2 == 0;});
>```
>
> **std::accumulate**
>
> Computes the sum of a range of elements.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int sum = std::accumulate(vec.begin(), vec.end(), 0);
>```
>
> <hr>
>
> ### Modifying Algorithms
>
> These algorithms change the contents of the container.
>
> **std::copy**
>
> Copies elements from one range to another.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> vec2(vec.size());
> std::copy(vec.begin(), vec.end(), vec2.begin());
>```
>
> **std::transform**
>
> Applies a function to a range of elements and stores the result in another range.
>
> **<font color="#428df5">Example</font>**
>
> ```cpp
> std::transform(vec.begin(), vec.end(), vec2.begin(), [](int n) {return n *  2;});
>```
>
> **std::replace**
>
> Replaces all occurences of a value in a range with another value.
>
> **<font color="#428df5">Example</font>**
>
> ```cpp
> std::replace(vec.begin(), vec.end(), 3, 7);
> ```
>
> **std::remove**
>
> Removes all occurences of a value in a range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());
>```
>
> **std::fill**
>
> Fills a range with a specified value.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::fill(vec.begin(), vec.end(), 0);
>```
>
><hr>
>
> ### Sorting Algorithms
> These algorithms sort elements in a container
>
> **std::sort**
>
> Sorts elements in a range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::sort(vec.begin(), vec.end());
>```
>
> **std::partial_sort**
>
> Sorts the first N elements of a range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::partial_sort(vec.begin(), vec.begin() + 3, vec.end());
>```
>
> **std::stable_sort**
>
> Sorts elements in a range while maintaining the relative order of equivalent elements.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::stable_sort(vec.begin(), vec.end());
>```
>
><hr>
>
> ### Searching Algorithms
>
> **std::binary_search**
>
> Checks if a value exists in a sorted range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> bool found = std::binary_search(vec.begin(), vec.end(), 3);
>```
>
> **std::lower_bound**
>
> Finds the first position where a value could be inserted without violating order.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> auto it = std::lower_bound(vec.begin(), vec.end(), 3);
>```
>
> **std::upper_bound**
>
> Finds the last position where a value could be inserted without violating order.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> auto it = std::upper_bound(vec.begin(), vec.end(), 3);
>```
>
> <hr>
>
> ### Set Algorithms
> These algorithms operate on sorted ranges to perform set operations.
>
> **std::union**
>
> Computes the union of two sets.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> result;
> std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
>```
>
> **std::set_intersection**
>
> Computes the intersection of two sets.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> result;
> std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
>```
>
> **std::set_difference**
>
> Computes the difference between two sets.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> result;
> std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
>```




> ### <font color="#ff009e">Utilities</font>
> 
> The Standard Template Library (STL) includes a variety of utility components that assist with common programming tasks, enhancing the functionality and convenience of C++ development. These utilities provide basic services like pair management, tuple handling, and type traits. They help with tasks such as element swapping, moving objects, and type manipulations, making the STL more powerful and flexible.
>
> **std::pair**
>
> A simple container to store two heterogeneous objects as a single unit. It is often used to return two values from a function or to store key-value pairs.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::pair<int, std::string> p = {1, "example"};
> 
>```
>
> **std::tuple**
>
> Similar to std::pair, but can hold any number of elements of different types. Useful for returning multiple values from functions and for making heterogeneous collections.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::tuple<int, std::string, double> t = {1, "example", 3.14};
>```
>
> **std::move**
>
> Enables efficient transfer of resources from one object to another, using move semantics to avoid deep copying. Essential for performance optimization, especially in resource-intensive applications.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::string source = "hello";
> std::string target = std::move(source); // source is now empty.
>```
>
> **std::swap**
>
> Exchanges the values of two objects. This utility function is essential for many algorithms, such as sorting.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int a = 1, b = 2;
> std::swap(a, b);
>```
>
> **std::forward**
>
> Perfect forwarding utility that preserves the value category (lvalue or rvalue) of the arguments passed to a function. Often used in template programming to implement forwarding functions.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> template <typename T>
> void wrapper(T&& arg)
> {
>     function(std::forward<T>(arg));
> }
>```
>
> **std::tie**
>
> Unpacks tuples into individual variables. Often used in conjunction with functions that return std::tuple.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int a, b;
> std::tie(a, b) = std::make_tuple(1, 2);
>```
>
>
> **std::any**
>
> A type-safe container for single values of any type. It can hold values of anyx type and provides type erasure.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::any a = 42;
> a = std::string("hello");
>```
>
> **std::optional**
>
> A container that may or may not hold a value, providing a way to represent optional or nullable values without using pointers.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::optional<int> maybeValue;
> maybeValue = 42;
> if (maybeValue)
> {
>     std::cout << "Value is " << *maybeValue << std::endl;  
> }
>```
>
> **std::variant**
>
> A type-safe union that can hold a value of one of several types, providing a way to work with union-like structures safely.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::variant<int, std::string> v = "hello";
> v = 42;
>```



### <font color="#ffc900">Modern C++ Features</font>
> ### <font color="#a442f5">Function Objects</font>
> ### <font color="#ff009e">Functors</font>
> Function objects, also known as functors, are objects that can be invoked or called as if they were functions.In C++, functors are primarily used as conjuction with STL algorithms to provide custom behavior for sorting, comparison, transformations and other operations on element in containers. Functors can encapsulate state and provide more flexibility than regular functions in certain scenarios.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> class GreaterThan
> {
>     private:
>        int m_threshold;
>
>     public:
>        GreaterThan(int p_threshold) : m_threshold(p_threshold) {}
>        bool operator()(int value) const 
>        {
>           return value > threshold;
>        }  
> }
> GreaterThan gt5(5);  // Functor object with threshold 5
> int count = std::count_if(numbers, numbers + 7, gt5);
>```
>
> **When To Use**
> 
> - **Custom Sorting and Comparision**:
> Use functors to define custom sorting criteria pr comparisons in sorting algorithms like 'std::sort' or 'std::priority_queue'.
>
> - **Conditional Transformations**:
> Use functors in algorithms like 'std::transform' to conditionally transform elements based on specific criteria.
>
> - **Filtering**:
> Use functors with algorithms like 'std::remove_if' or 'std::copy_if' to filter elements based on custom conditions.
>
> - **Callbacks**:
> Use functors as callback mechanisms where behavior needs to be customized at runtime, such as in event handling or callback-based APIs.
>
> - **Stateful Operations**:
> Use functors when operations require maintaining state across multiple invocations, such as parsers or state machines.
>   
> **When Not to Use**
>
> - **Simple Operations**:
> For straightforward operations that do not require customization or state management, using regular functions or lambda functions may be simpler and more concise.
>
> - **Performance-Sensitive Code**:
> In cases where performance is critical and the overhead of object creation and function call is a concern, using inline functions or function pointers might be more appropriate.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility**:
> Functors can encapsulate complex behaviors and conditions that are not easily expressed with regular functions. This allows for more customized and flexible operations.
>
> - **State Management**:
> Functors can maintain state across multiple class, which can be useful when performing operations that require context or history.
>
> - **Customization**: 
> Functors allow algorithms to be customized with different behaviors without modifying the algorithm itself. This promotes code reuse and separation of concerns.
>
> - **Performance**: 
Functors can be inlined by the compiler, resulting in potentially more efficient code execution compared to using function pointers.
>
> - **Integration with STL**: 
> Functors seamlessly integrate with STL algorithms, which are designed to work with function objects, This makes them an integral part of STL-based programming.
>
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Verbosity**
>
> - **Object-Oriented Overhead**: 
> Functors are objects, so they incur the overhead of object-oriented programming, such as memory allocation and potential performance implications in some scenarios.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Lambdas</font>
> Lambda expressions, introduced in C++11, provide a concise way to define anonymous functions or function objects directly in-line within the code. They are particularly useful for writing quick functions that are used only once or for passing functions as arguments to other functions.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // [capture](parameters) -> return_types { body } 
> auto square = [](int x) -> int
> { 
>     return x * x;
> };
>
> int val = 5;
> int result = square(val);
> std::cout << "Square of " << val << "is: " << result << std::endl;
>```
>
> **When To Use**
> 
> - **Inline Functionality**: Use lambda expressions when you need a small function that is used only once and it would be inconvenient to define a separate named function.
>
> - **Function Objects**: Use lambdas when passing a function as an argument to another function(e.g., in algorithms like 'std::transform', 'std::sort' etc.)
>
> - **Conciseness**: Use lambdas to write concise and readable code, especially for operations that are straightforward and do not require a separate names function.
>
> **When Not to Use**
>
> - **Complex Logic**: Avoid lambdas for complex logic that spans multiple lines or requires extensive error handling, as lambdas are meant to be compact and focused.
>
> - **Reuse**: If the same functionality is needed in multiple places, consider defining a named function instead for better code organization and reuse.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Conciseness**: Allows writing functions directly where they are needed, reducing boilerplate code.
>
> - **Capture**: Can capture variables from the enclosing scope, providing flexibility in accessing and modifying data.
>
> - **Integration**: Integrates seamlessly with standard library algorithms and other functions that accept callable objects.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Readability**: Overuse of complex lambdas can reduce code readability, especially for developers unfamiliar with lambda syntax.
>
> - **Debugging**: Debugging can be more challenging with anonymous functions compared to named functions.
>
> - **Capture Issues**: Care must be taken with capture lists to avoid unintended side effects or dangling references.
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Function Composition</font>
> Refers to the process of combining multiple functions into a single function, where the output of one becomes the input to the next. This concept is common in functional programming but can also be effectively used in C++ through the use of function objects, lambdas and 'std::function'
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <functional>
>
>// Define two simple functions
>int multiplyByTwo(int x)
>{
>   return (x * 2);
>}
>
>int addFive(int x)
>{
>   return (x + 5);
>}
>
>// A utility function to compose two functions
>std::function<int(int)> compose(std::function<int>(int)> f, std::function<int(int)> g)
>{
>   return [f, g](int x)
>   {
>      return g(f(x));
>   };
>}
>
>int main()
>{
>   // Compose multipleByTwo and AddFive
>   auto composedFunction = compose(multiplyByTwo, addFive);
>
>   // Use the composed function
>   int result = composedFunction(4); // Equivalent to addFive(multiplyByTwo(3))
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Complex Transformations**:
> When you need to apply multiple transformations to data and want to encapsulate the sequence of operations in a single callable entity.
>
> - **Readable and Maintainable Code**:
> Function composition can make your code more readable and maintainable by clearly expressing a sequence of operations.
>
> - **Reusable Code**:
> If you have a set of reusable operations that can be combined in different ways, function composition allows you to easily create new behaviors from existing functions.
>
> **When Not to Use**
>
> - **Performance Critical Code**:
> Composing functions, especially using 'std::function', may introduce overhead due to additional function calls and potential heap allocations.
>
> - **Simple Operations**:
> For very simple operations, composing functions might overcomplicate the code compared to just writing the operations inline.
>
> - **Immediate Execution**:
> If functions are only used once and the composition does not add clarity or reusability, it is better to execute them directly without composition.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Modularity**
>
> - **Clarity**
>
> - **Flexibility** 
> 
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance Overhead**
>
> - **Complexity**
>
> - **Debugging Difficulty** 
><hr>
>
>
>




> ### <font color="#a442f5">Function Patterns & Event Management</font>
> ### <font color="#ff009e">Event Handling</font>
> Event handling refers to the mechanism in which a system responds to or manages specific actions or events. Event handling can be designed using various programming techniques, including function pointers, callbacks or more modern approaches like **std::function** or **observer patterns**. C++ doesn't have built-in event handling as found in frameworks like JavaSc****, but you can create custom event-driven models.
>
> **Approaches to Event Handling in C++**:
>
> -   Function Pointers
> -   Callbacks (std::function)
> -   Observer Pattern
> -   Signal & Slot Mechanisms (Qt Framework)
>
><br>
>
> **Function Pointers**
>
> Allow you to pass a function to another function, enabling basic event handling.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>
>void onEvent()
>{
>   std::cout << "Event triggered!" << std::endl;
>}
>
>void triggerEvent(void (*callback)())
>{
>   callback(); // Call the event handler function
>}
>
>int main()
>{
>   triggerEvent(onEvent); // Pass the function to triggerEvent
>   
>   return 0;
>}
>```
>
>
><hr>
>
>
>
> **Callbacks (std::function)**
>
> Callback functions are functions passed as arguments to other functions or methods. They are often used to customize or extend the behavior of libraries and frameworks by allowing the caller to specify a function to be called at a particular event or moment. The **std::function** type from the Standard Library is powerful tool for implementing callback functions because it can store, copy and invoke any callable target functions, lambda expressions, bind expressions or other function objects.
>
> **std::function** is a type-safe, general-purpose polymorphic function wrapper. It can encapsulate any callable target that is compatible with the signature specified when declaring the 'std::function' object. This includes:
>
> - Regular functions (free functions),
> - Member functions,
> - Lambda expressions,
> - Bind expressions (created using 'std::bind'),
> - Functors (objects of a class that overloads the 'operator()').
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <functional>
>
>// A simple free function
>void freeFunction(int value)
>{
>   std::cout << "Free function: " << value << std::endl;
>}
>
>// A functor (function object)
>struct Functor
>{
>   void operator()(int value) const
>   {
>      std::cout << "Functor: " << value << std::endl;
>   }
>}
>
>int main()
>{
>   // Using 'std::function' to wrap a free function
>   std::function<void(int)> callback = freeFunction;
>   callback(10);
>
>   // Using 'std::function' to wrap a lambda expression
>   callback = [](int value)
>   {
>      std::cout << "Lambda: " << value << std::endl;
>   };
>   callback(20);
>
>   // Using 'std::function' to wrap a functor
>   callback = Functor()
>   callback(30);
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Customizing Library Behavior**:
> Use 'std::function' when you need to pass a callback function to a library or framework that requires custom behavior.
>
> - **Event Handling**:
> When implementing event-driven systems, 'std::function' is ideal for storing and invoking event handlers.
>
> - **Deferred Execution**:
> When you need to store a function to be executed later, such as in asynchronous operations.
>
> **When Not to Use**
>
> - **Performance Critical Code**:
> 'std::function' incurs some overhead due to type erasure and heap allocations. If performance is critical, prefer using template-based solutions or function pointers directly.
>
> - **Simple Use Cases**:
> If you need to pass a simple function pointer, and do not require the flexibility of 'std::function', a regular function pointer might be more efficient.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility**: 
> 'std::function' can store any callable target, providing a high level of flexibility in designing APIs.
>
> - **Type Safety**:
> Ensures that the stores callable matches the specified function signature, reducing the risk of runtime errors.
>
> - **Ease of Use**:
> Simplifies the process of passing and storing functions, especially in complex, callback-driven designs.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance Overhead**:
> Has some overhead compared to raw function pointers due to type erasure and potential heap allocations.
>
> - **Memory Usage**:
> The underlying implementation may allocate memory dynamically, which can be a concern in low-level or performance-critical applications.
>
> - **Potential for Undefined Behavior**:
> If the callabke target is a member function, care must be taken to ensure that the object outlives the 'std::function' instance or else it could lead to undefined behavior. 
>
>
>
><hr>
>
>
> **Observer Pattern**
>
> It is used to notify multiple objects when an event occurs, making it useful for event handling in applications with multiple listeners or observers.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <vector>
>#include <functional>
>
>// Subject that generates events
>class EventSource
>{
>   private:
>      std::vector<std::function<void()>> listeners;
>
>   public:
>      void addListener(std::function<void()> listener)
>      {
>         listeners.push_back(listener);
>      }
>
>      void notify()
>      {
>         for(const auto& listener : listeners)
>         {
>            listener(); // Notify all listeners.
>         }
>      }
>};
>
>// Observer that handles events
>class EventListener
>{
>   public:
>      void handleEvent()
>      {
>         std::cout << "Event handled by listener" << std::endl;
>      }
>};
>
>int main()
>{
>   EventSource eventSource;
>   EventListener listener_1, listener_2;
>
>   // Register the Listeners
>   eventSource.addListener([&]() { listener_1.handleEvent(); });
>   eventSource.addListener([&]() { listener_2.handleEvent(); });
>
>   // Trigger the event
>   eventSource.notify();
>}
>```
>
>
>
> **Signal & Slot (Qt Framework)**
> 
> The signal and slot mechanism is used for event handling. Signals are emitted when an event occurs and slots are functions that respond to these signals.
>
> **<font color="#428df5">Example</font>**
>```cpp
>#include <QObject>
>#include <QCoreApplication>
>#include <iostream>
>
>class MyObject : public QObject
>{
>   private:
>      Q_OBJECT
>
>   public slots:
>      void onEvent()
>      {
>         std::cout << "Qt Event handled!" << std::endl;
>      }
>};
>
>int main(int argc, char* argv[])
>{
>   QCoreApplication app(argc, argv);
>   MyObject obj;
>   QObject::connect(&app, &QCoreApplication::aboutToQuit, &obj, &MyObject::onEvent);
>
>   return app.exec();
>}
>```
>
>
>
> **When To Use**
> 
> - Use function pointers or std::function for simple, direct event handling when the structure is simple and performance is a priority.
>
> - Use observer patterns when multiple listeners need to respond to a single event, as it's more scalable.
>
> - Use signal and slot mechanisms in frameworks like Qt for robust, built-in event handling, especially in GUI applications.
>
> **When Not to Use**
>
> - Avoid function pointers for complex event handling, as it doesn't support lambdas or capturing state.
>
> - Avoid manually implementing the observer pattern in simple scenarios, as it can be overkill for small projects.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Function Pointers**: Lightweight and fast.
>
> - **std::function**: More flexible, supports lambdas and member functions.
>
> - **Observer Pattern**: Scales well to complex systems with multiple event listeners.
>
> - **Qt Signal/Slot**: Simplifies event handling in GUI applications.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Function Pointers**: Limited to free functions, no state capture.
>
> - **std::function**: Slightly more overhead compared to raw function pointers.
>
> - **Observer Pattern**: Manual implementation can get complex and verbose.
>
> - **Qt Signal/Slot**: Requires using the Qt framework, adding complexity to smaller projects.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Command Pattern</font>
> It is a behavioral design pattern used to encapsulate a request as an object, thereby allowing for parameterization of clients with queues, request and operations. This pattern helps in decoupling the sender (which sends the request) from the receiver (which handles the request). Each command is represented as a class with an **execute()** method, which allows the operations to be carried out at a later time or even stored for undo/redo functionality.
>
> **Key Components**:
>
> - **Command**: An interface or abstract class declaring the **execute()** order(66).
>
> - **Concrete Command**: Implements the **execute()** order by binding the receiver with a specific action.
>
> - **Invoker**: Triggers the command's execution.
>
> - **Receiver**: The object that knows how to perform the action.
>
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <memory>
>
>// Command Interface
>class Command
>{
>   public:
>      virtual ~Command() = default;
>      virtual void execute() const = 0;
>};
>
>// Receiver Class
>class Light
>{
>   public:
>      void turnOn() const
>      {
>         std::cout << "The light in on!" << std::endl;
>      }
>
>      void turnOff() const
>      {
>         std::cout << "The light in off!" << std::endl;
>      }
>};
>
>// Concrete Command to turn on the light
>class LightOnCommand: public Command
>{
>   private:
>      const Light& light;
>
>   public:
>      explicit LightOnCommand(const Light& 1) : light(1) {}
>      void execute() const override
>      {
>         light.turnOn();
>      }
>}
>
>// Concrete Command to turn off the light
>class LightOffCommand : public Command
>{
>   private:
>      const Light& light;
>
>   public:
>      explicit LightOffCommand(const Light& 1) : light(1) {}
>      void execute() const override
>      {
>         light.turnOff();
>      }
>};
>
>// Invoker class
>class RemoteControl
>{
>   private:
>      std::unique_ptr<Command> command;
>
>   public:
>      void setCommand(std::unique_ptr<Command> c)
>      {
>         command = std::move(c);
>      }
>
>      void pressButton() const
>      {
>         if(command)
>         {
>            command -> execute();
>         }
>      }
>};
>
>int main()
>{
>   Light light;
>   RemoteControl remoteControl;
>
>   // Turn the light on
>   remoteControl.setCommand(std::make_unique<LightOnCommand>(light));
>   remoteControl.pressButton();
>
>   // Turn the light off
>   remoteControl.setCommand(std::make_unique<LightOffCommand>(light));
>   remoteControl.pressButton();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Undo/Redo functionality**: Commands can be queued and stored, allowing for undo/redo operations.
>
> - **Parameterizing objects**: Allows you to pass commands as parameters to different objects.
>
> - **Decoupling sender and receiver**: When you need to separate the sender of a request from the logic that processes it.
>
> **When Not to Use**
>
> - **Simple operations**: If you don't need the complexity of undo/redo or queueing, the command pattern might add unnecessary overhead.
>
> - **Tight coupling isn't a concern**: If you don’t require decoupling between sender and receiver, simpler solutions can work.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility**: Commands are encapsulated as objects, allowing for easy addition of new commands.
>
> - **Decoupling**: Reduces the coupling between sender and receiver, improving flexibility.
>
> - **Extensibility**: New commands can be added without changing existing code.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Adds extra layers of abstraction and might be overkill for simple tasks.
>
> - **Memory overhead**: Storing commands in a queue or stack can increase memory usage, particularly for undo/redo scenarios.
>
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Ranges</font>
> ### <font color="#ff009e">std::ranges, Views, Actions</font>
> In C++20, the Ranges library was introduced to provide a more flexible and expressive way to work with collections (or ranges) of data. It offers several new components, including std::ranges, std::views, and std::actions. These allow for operations on containers (like vectors) in a lazy, more readable, and efficient manner.
>
> **std::ranges**
>
>std::ranges provides an alternative way to interact with collections using range-based algorithms. It unifies the operations we perform on ranges (like std::vector, std::list, etc.) and can be used to work seamlessly with containers without needing to extract iterators.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <ranges>
>#include <vector>
>
>int main()
>{
>   std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
>
>   // std::ranges::for_each to print each element.
>   std::ranges::for_each(numbers, [](int n) {std::cout << n << " "; });
>
>   return 0;
>}
>```
>
> **When To Use**
>
> - When working with collections and you need to perform range-based algorithms (e.g., sorting, filtering, transforming).
> - When you want cleaner and more expressive code compared to traditional STL iterator-based algorithms.
>
> **When Not to Use**
>
> - If the project is constrained to older C++ standards or libraries that don't support C++20 features.
> - For very simple operations where traditional STL algorithms are more intuitive and don't introduce unnecessary complexity.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Cleaner Code**: Provides a more readable way to work with containers and ranges.
> - **Lazy Evaluation**: Allows for efficient, on-demand processing without unnecessary copying.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Compatibility**: Older compilers may not support `std::ranges`.
> - **Learning Curve**: Can add complexity if the team is unfamiliar with modern C++ features.
>
><hr>
>
> **Views**
>
> It provides a way to create non-owning, read-only views of data. These views allow for the efficient transformation and filtering of sequences without creating new containers or modifying the underlying data.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <vector>
>#include <ranges>
>
>int main() 
>{
>    std::vector<int> numbers = {1, 2, 3, 4, 5};
>
>    // Creating a view that filters out even numbers
>    auto even_numbers = numbers | std::views::filter([](int n) { return n % 2 == 0; });
>
>    for (int n : even_numbers) 
>    {
>        std::cout << n << " ";
>    }
>
>    return 0;
>}
>```
>
> **When To Use**
>
> - When you need to create views of existing data to apply transformations or filters without creating new containers.
>
> - When you want to avoid unnecessary copies and memory allocations.
>
> **When Not to Use**
>
> - If you need to modify the underlying data structure, as `std::views` are read-only.
>
> - When working with compilers or libraries that do not support C++20 features.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Efficiency**: Views do not require additional memory allocations since they work on existing data structures.
>
> - **Lazy Evaluation**: Operations are only performed when the view is actually accessed.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Limited Mutability**: Views are typically read-only and cannot modify the underlying data.
>
> - **Compatibility**: Requires C++20 support, which may not be available in older compilers or libraries.
>
><hr>
>
> **Actions**
>
> std::actions is a feature introduced in C++20 that provides a way to modify data in a range through a series of actions. Unlike std::views, which offer a read-only view of data, std::actions are designed for performing operations that change the data in a container. This can include tasks such as transforming, filtering, or performing other modifications directly on the elements.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <vector>
>#include <ranges>
>#include <algorithm>
>
>int main()
>{
>   std::vector<int> numbers = {1, 2, 3, 4, 5};
>
>   // Define an action to double each element
>   auto action = std::views::transform([](int& n) {n *= 2;});
>
>   // Apply the action to the vector
>   numbers |= action;
>
>   // Print the modified elements
>   for(int n : numbers)
>   {
>      std::cout << n << " ";
>   }
>
>   return 0;
>}
>```
>
>
>**When To Use**
>
> - When you need to apply a series of modifications or transformations to data in a container.
>
> - When you want to perform actions in a sequence that directly affects the data.
>
> **When Not to Use**
>
> - If you only need to view data without modifying it, as `std::actions` are intended for mutating operations.
>
> - When working with compilers or libraries that do not support C++20 features.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Mutability**: Allows for in-place modifications of data within containers.
>
> - **Flexibility**: Provides a powerful way to chain and compose actions to be applied to ranges.
>
>**<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Can add complexity to code when chaining multiple actions, especially if not used carefully.
>
> - **Compatibility**: Requires C++20 support, which may not be available in older compilers or libraries.
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Modules</font>
> ### <font color="#ff009e">Basics of Modular Programming</font>
> It is a software design technique that emphasizes breaking down a program into smaller, manageable and reusable pieces called **modules**. Each modules typically contains everything needed to execute one aspect of the program's funtionality. By organizing code this way, it becomes easier to manage, debug, maintain and scale.
>
> In C++, modular programming is primarily implemented using **functions**, **classes** and **namespaces**. Starting from C++20, the language also introduced **modules** as a first-class language feature, providing a more formal structure for modularizing code.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>
>// Module 1: Function to get user input
>int getUserInput()
>{
>   int value;
>   std::cout << "Enter a number: " << std::endl;
>   std::cin >> value;
>
>   return value;
>}
>
>// Module 2: Function to compute the square of a number
>int square(int x)
>{
>   return (x * x);
>} 
>
>// Module 3: Function to display the result
>void displayResult(int result)
>{
>   std::cout << "The square of the number is: " << result << std::endl;
>}
>
>int main()
>{
>   int number = getUserInput(); // Call module 1
>   int result = square(number); // Call module 2
>   displayResult(result);  // Call module 3
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When developing large-scale projects that require maintainable and reusable code.
>
> - When collaborating with multiple developers, as it allows each developer to work on separate modules.
>
> - When there's a need for separation of concerns, where each module handles a specific functionality.
>
> **When Not to Use**
>
> - For small, simple programs where the overhead of modularization might add unnecessary complexity.
>
> - In systems with extremely tight memory or performance constraints, as modularizing could slightly increase overhead in certain cases.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Maintainability**: Easier to maintain and update individual modules without affecting the entire system.
>
> - **Reusability**: Modules can be reused in different parts of the project or even in other projects.
>
> - **Testability**: Each module can be tested independently, making debugging easier.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**: Organizing a program into modules might introduce some extra overhead, both in terms of structure and execution.
>
> - **Complexity**: Poor modularization can lead to unnecessary complexity, especially if dependencies between modules are not well-defined.
>
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Spaceship Operator</font>
> The spaceship operator (<=>), introduced in C++20, simplifies the implementation of comparison operators by providing a unified syntax for all three-way comparisons. It can be used for both std::weak_ordering and std::strong_ordering.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Example 1
> auto smallest = (a <=> b) ? b : a;
>
> // Example 2
> auto result = (a <=> b) == 0 ? "equal" : (a <=> b) < 0 ? "less than" : "greater than";
>
> // Example 3
> struct Point 
> {
>     int x, y:
>
>     auto operator<=>(const Point& other) const
>     {
>        if(auto cmp = x <=> other.x; cmp != 0)
>        {
>           return cmp;
>        }
>        return y <=> other.y;
>     }   
> };
> 
> Point p1 {1, 2};
> Point p2 {2, 3};
> if (auto cmp = (p1 <=> p2); cmp < 0) 
> {
>     std::cout << "p1 is less than p2" << std::endl;
> } else if (cmp > 0) {
>     std::cout << "p1 is greater than p2" << std::endl;
> } else {
>     std::cout << "p1 is equal to p2" << std::endl;
> }
>```
>
> **When To Use**
> 
> - **Simplifying Comparisons**
>
> **When Not to Use**
>
> - **Complex Comparisions**
>
> - **Non-Comparable Data**: Do not use if the data inherently lacks a meaningful ordering.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Unified Syntax**
>
> - **Reduced Boilerplate**
>
> - **Consistency** 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**
>
> - **Compatibility**
>





### <font color="#ffc900">Memory Management</font>
> ### <font color="#a442f5">Automatic vs Dynamic Memory</font>
> ### <font color="#ff009e">Stack vs Heap</font>
> In C++, **stack** and **heap** are two types of memory used for storing variables and dynamically allocated memory. The distinction between them is important for understanding memory management, performance and application design in C++.
>
> **Stack**
> 
> The **stack** is a region of memory used for static memory allocation, where variables allocated and deallocated in a last-in, first-out (LIFO) manner. The stack is primarily used for local variables and function calls. It has a fixes size and is automatically managed by compiler.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Stack Allocation
>
>#include <iostream>
>
>void stackFunction()
>{
>   int x = 10; // Allocated on the stack
>   std::cout << "x = " << x << std::endl;
>} // 'x' is automatically deallocated at the end of this function.
>
>int main()
>{
>   stackFunction(); // Stack variable 'x' is created and destroyed within the function call.
>}
>```
>
> **Heap**
>
> The **heap** is a region of memory used for dynamic memory allocation. Unlike the stack, the heap is managed manually by the programmer through the used of **new** and **delete** in C++. Memory allocated on the heap persist until it is explicitly freed and it is suitable for large objects or when the memory needs to be shared across different parts of the program.
>
>```cpp
> // Heap Allocation
>
>#include <iostream>
>
>void heapFunction()
>{
>   int* ptr = new int(20); // Allocated on the heap
>   std::cout << "Value: " << *ptr << std::endl;
>
>   delete ptr; // Manually deallocated
>}
>
>int main()
>{
>   heapFunction(); // Memory allocated on the heap persist until *delete* is called.
>}
>```
>
> **When To Use**
> 
> - Stack: When you need fast, temporary storage that is automatically managed and freed when out of scope, such as local variables or small, short-lived objects.
>
> - Heap: When you need dynamic memory that persists beyond the scope of a function, for large objects, or when you don’t know the exact memory requirements at compile-time.
>
> **When Not to Use**
>
> - Stack: Avoid for large data structures (e.g., large arrays) or when the memory needs to persist beyond the function's scope.
>
> - Heap: Avoid for short-lived variables, as heap allocation and deallocation are slower and can lead to memory fragmentation over time.
>
> **<font color="#b3f542">Advantages</font>**
>
> - Stack: Fast allocation and deallocation; no need for manual memory management.
>
> - Heap: Flexibility in memory size and lifetime, suitable for large and dynamic memory needs.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - Stack: Limited in size; may lead to stack overflow if too much memory is allocated.
>
> - Heap: Slower access due to manual management, and improper use can cause memory leaks and fragmentation.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Smart Pointers</font>
>
> _**Smart Pointers has been already explained in [Passing Values by Smart Pointers](#by-smart-pointers)**._
>
> Smart pointers are a feature in C++ that manage the lifetime of dynamically allocated objects, helping to prevent memory leaks and dangling pointers by automatically deallocating memory when it is no longer needed. The Standard Library provides several types of smart pointers, each designed for different use cases.
>
> **std::unique_ptr**
>
> A smart pointer that owns and manages another object through a pointer and disposes of that object when the 'std::unique_ptr' goes out of scope. Unique ownership, non-copyable, movable.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::unique_ptr<int> ptr1(new int(10));
> // std::unique_ptr<int> ptr2 = ptr1; // Error: cannot copy
> std::unique_ptr<int> ptr2 = std::move(ptr1);
>```
>
> **When To Use**
> 
> - When you need exclusive ownership of a resource.
> - For managing the lifetime of resources that are not shared.
> - For implementing RAII (Resource Acquisition Is Initialization) patters.
>
> **When Not to Use**
>
> - When you need shared ownership or the ability to copy the smart pointer.
> - When passing ownership to function that do not accept 'std::unique_ptr'.
>
> <hr>
>
> **std::shared_ptr**
>
> A smart pointer that retains shared ownership of an object through a pointer. Multiple 'std::shared_ptr' instances can manage the same object. Shared ownership, reference counting.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::shared_ptr<int> ptr1 = std::make_shared<int>(20);
> std::shared_ptr<int> ptr2 = ptr2; // Okay: shared ownership.
>```
>
> **When To Use**
> - When multiple parts of your program need to share ownership of a resource.
> - When object need to be shared across multiple scopes or threads.
>
> **When Not to Use**
> - When exclusive ownership is sufficient or required.
> - In performace-critical code where reference counting overhead is unacceptable.
>
> <hr>
>
> **std::weak_ptr**
>
> A smart pointer that holds a non-owning (weak) reference to an object that is managed by 'std::shared_ptr'. It is used to break circular references. Non-owning, does not affect reference count.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::shared_ptr<int> sp = std::make_shared<int>(30);
> std::weak_ptr<int> wp = sp; // wp does not affect reference count.
> if(auto sp2 = wp.lock()) // Check if the object still exist. 
> { 
>     // use sp2. 
> } else{
>     // sp2 has been destroyed.
> }
>```
>
> **When To Use**
> - When you need to reference an object managed by 'std::shared_ptr' without affecting its lifetime.
> - For breaking circular references between 'std::shared_ptr' instances.
>
> **When Not to Use**
> - As a primary owning reference, since it does not manage the object's lifetime.
> - When you do not need to break cycles between 'std::shared_ptr' instances.
>
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Automatic Memory Management**: 
> Smart pointers automatically manage the lifetime of dynamically allocated objects, reducing the risk of memory leaks.
>
> - **Exception Safety**:
> They ensure that resources are properly relased even in the presence of exceptions.
>
> - **Clear Ownership Semantics**:
> Different types of smart pointers provide clear semantics for ownership and resource management.
>
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**: 'std::shared_ptr' has some overhead due to reference counting and atomic operations, which can impact performance.
>
> - **Complexity**:
> Using smart pointers can add complexity, especially when dealing with circular dependencies and weak references.
>
> - **Incorrect Usage**:
> Misuse of smart pointers(e.g., creating cycles with 'std::shared_ptr') can still lead to resource management issues.
>
>
>
> <hr>
>
>
>
> ### <font color="#ff009e">Manual Memory</font>
> In C++, **manual memory management** refers to the process where the programmer explicitly allocates and deallocates memory. Unlike languages with garbage collection (such as Java or Python), C++ relies on the programmer to manage dynamic memory usage. This involves using operators like _**new**_ and _**delete**_ to manage memory on the heap.
>
> When dynamic memory is required, the **heap** is required. Memory is allocated using the _**new**_ keyword and deallocated using _**delete**_ or _**delete[]**_ for arrays. Failing to deallocate memory can result in **memory leaks**, where memory is allocated but never freed, causing the application to use increasing amounts of memory over time which eventually end up crashing.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Manual Memory Management
>
>#include <iostream>
>
>int main()
>{
>   // Allocating memory for a single integer.
>   int* ptr = new int(54);
>   std::cout << "Value: " << *ptr << std::endl;
>
>   // Deallocate the memory.
>   delete ptr;
>
>   // Allocating memory for an array.
>   int* arr = new int[5]{1, 23, 34, 244, 5};
>   for(int i = 0; i < 5; i++)
>   {
>      std::cout << "Array value: " << arr[i] << std::endl;
>   }
>
>   // Deallocate the array.
>   delete[] arr;
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need dynamic memory allocation, particularly for objects whose size or lifetime cannot be determined at compile-time.
>
> - When you are handling large data structures that exceed the stack's memory limitations.
>
> - In systems programming or embedded systems where memory management needs to be tightly controlled.
>
> **When Not to Use**
>
> - For short-lived objects or small, temporary data where stack allocation is more efficient.
>
> - If RAII (Resource Acquisition Is Initialization) can be used, as it automates memory management.
>
> - In high-level application code where using smart pointers (like std::shared_ptr or std::unique_ptr) is preferred.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Control**: Provides full control over memory allocation and deallocation, allowing for efficient use of resources.
>
> - **Flexibility**: Useful for allocating memory dynamically when the size or number of objects isn’t known until runtime.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Memory Leaks**: If memory is allocated but not deallocated, it can lead to memory leaks.
>
> - **Manual Management**: Requires the programmer to manually manage memory, increasing the complexity and the potential for bugs like double deletion or dangling pointers.
>
> - **Fragmentation**: Can lead to memory fragmentation over time, especially in long-running programs.
>
> **<font color="#ff9a00">Best Practises</font>**
>
> - Always **delete** what you **new**, and **delete[]** what you **new[]**.
>
> - Use **RAII** or **smart pointers** when possible to avoid manual memory management pitfalls.
>
> - Consider **custom memory management** techniques (such as **memory pools**) for performance-critical applications.
>
><hr>
>
>
>




> ### <font color="#a442f5">Advanced Memory Techniques</font>
> ### <font color="#ff009e">Custom Allocators</font>
> Allocators are a fundamental part of the Standard Template Library (STL) in C++. They define memory management policies for containers, specifying how memory is allocated, deallocated, and managed. While the default allocator (std::allocator) is sufficient for most use cases, custom allocators can be created to optimize performance, improve memory usage, or adapt to specific requirements.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> template <typename T>
> class MyAllocator
> {
>    public:
>        using value_type = T;
>
>         MyAllocator() = default;
>         
>         template <typename U>
>         MyAllocator(const MyAllocator<U>&) {}
>  
>         T* allocate(std::size_t n) // 'allocate' as a key component.
>         {
>              return static_cast<T*>(::operator new(n * sizeof(T)));
>         }
>
>         void deallocate(T* p, std::size_t n) // 'deallocate' as a key component.
>         {
>              ::operator delete(p);
>         }
>
>         template <typename U, typename... Args>
>         void construct(U* p, Args&&... args) // 'construct' as a key component.
>         {
>              new(p) U(std::forward<Args>(args)...);  
>         }
>
>         void destroy(T* p) // 'destroy' as a key component.
>         {
>              p -> ~T();
>         }
>};
>```
>
> **When To Use**
> 
> - **Performance Optimization**:
> Use custom allocators to optimize performance by reducing allocation overhead, improving cache locality, or minimizing fragmentation.
>
> - **Memory Management**:
> Implement custom memory management strategies, such as pooling to control and optimize memory usage.
>
> - **Embedded Systems**:
> In enviroments with limited resources, custom allocators can help manage memory more efficiently and predictably.
>
> **When Not to Use**
>
> - **General-Purpose Code**:
> Avoid using custom allocators for general-purpose code where the default allocator provides sufficient performance and simplicity.
>
> - **Complexity**
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Performance**: 
> Custom allocators can improve performance by tailoring memory management to specific needs and usage patterns.
>
> - **Control**:
> Provides fine-grained control over memory allocation and deallocation, enabling optimization that are not possible with the default allocator.
>
> - **Flexibility**:
> Allows for implementation of specialized memory management strategies, such as pooling, slab allocation or garbage collection.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**
>
> - **Portability**:
> Custom allocators may rely on platform-specific features or behaviors, potentially reducing portability.
>
> - **Debugging**:
> Memory management bugs can be difficult to debug and custom allocators may introduce new sources of errors. 
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Memory Pools</font>
> A custom memory management technique that allocated a large block of memory upfront and then divides this block into smaller chunks or **pools**. These pools are used to satisfy memory requests, providing a more efficient and faster way to allocate and deallocate memory, particularly when you know you'll be allocating many small objects of the same size.
>
> In typical dynamic memory allocation (**new** and **delete**), the system must search for available memory and track memory allocations, which can be inefficient with many small allocations. A memory pool pre-allocates memory, allowing quick reuse of previously allocated memory without the overhed of calling system's allocator each time.
>
> Memory pools are useful in systems where performance is critical and where there is a predictable pattern of memory allocation and deallocation.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <vector>
>
>class MemoryPool
>{
>   private:
>      size_t blockSize;
>      size_t poolSize;
>      std::vector<char> pool;
>      std::vector<void*> freeBlocks;
>  
>   public:
>      MemoryPool(
>         size_t blockSize,
>         size_t poolSize
>      ):
>      blockSize(blockSize),
>      poolSize(poolSize)
>      {
>         pool.resize(blockSize * poolSize);
>         for(size_t i = 0; i < poolSize; ++i)
>         {
>            freeBlocks.push_back(&pool[i * blockSize]);
>         }
>      }
>
>   void* allocate()
>   {
>      if(freeBlocks.empty())
>      {
>         throw std::bad_alloc();
>      }
>
>      void* block = freeBlocks.back();
>      freeBlocks.pop_back();
>
>      return block;
>   }
>
>   void deallocate(void* block)
>   {
>      freeBlocks.push_back(static_cast<char*>(block));
>   }
>}
>
>int main()
>{
>   MemoryPool memoryPool(32, 10); // Pool of 10 blocks of 32 bytes each.
>
>   // Allocate memory
>   void* p1 = pool.allocate(); 
>   void* p2 = pool.allocate();
>
>   // Use memory
>   std::cout << "Memory allocated at: " << p1 << " and " << p2 << std::endl;
>
>   // Deallocate memory
>   pool.deallocate(p1);   
>   pool.deallocate(p2);
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When performance is critical and you need to reduce the overhead of frequent memory allocations and deallocations.
>
> - When you frequently allocate many small objects of the same size.
>
> - In real-time systems where deterministic memory allocation times are required.
>
> **When Not to Use**
>
> - When the program has unpredictable memory usage patterns or when object sizes vary significantly.
>
> - In systems where dynamic memory allocation/deallocation is infrequent and performance isn't a bottleneck.
>
> - If memory fragmentation isn't an issue and standard dynamic allocation is sufficient.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Performance**: Reduces the overhead of frequent memory allocations and deallocations.
>
> - **Predictability**: Provides deterministic memory allocation, which is crucial in real-time systems.
>
> - **Reduced Fragmentation**: Helps prevent memory fragmentation by reusing fixed-size blocks.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Requires custom memory management code, increasing the complexity of your program.
>
> - **Fixed Size**: If objects are larger than expected, the memory pool may not be flexible enough to handle them.
>
> - **Wasted Memory**: If the pool is over-allocated, it can lead to wasted memory that is never used.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Garbage Collection Concepts</font>
> Garbage collection (GC) is a memory management concept where the system automatically identifies and reclaims memory that is no longer in use, freeing the programmer from manually deallocating memory. In languages likes Java or C#, garbage collection is built-in. However, C++ does not have built-in garbage collection; instead, memory is manually managed using **new**, **delete** or **_smart pointers_**.
>
> While C++ does not traditionally rely on garbage collection, there are various concepts and strategies to manage memory efficiently and reduce memory leaks.
>
> - **Reference Counting (Smart Pointers)**:
> Smart pointers, like **std::shared_ptr**, use reference counting to automatically manage the lifetime of dynamically allocated objects. When the reference counts drop to zero, the object is automatically deleted.
>
> - **Manual Memory Management**:
> In C++, programmer manually manages memory. Using **new** to allocate memory and **delete** to free. It is necessary to avoid memory leaks.
>
> - **RAII (Resource Acquisition Is Initialization)**:
> RAII is a C++ idiom where resource management is tied to the lifespan ob objects. Memory or resources are acquired when an object is created and automatically released when it goes out of scope, thanks to destructors.
>
> - **Conservative Garbage Collection Libraries** _(Not Recommended_):
> While C++ doesn't have native garbage collection, external libraries like the Boehm-Demers-Weiser garbage collector can be used to add garbage collection to C++ applications.
>
> - **Automatic Storage Duration**:
> Objects with automatic storage duration (like local variables) are automatically deallocated when they go out of scope. This mimics the behavior of garbage collection to some extent.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Smart Pointer with Reference Counting
>
>#include <iostream>
>#include <memory>
>
>class Example
>{
>   public:
>      Example()
>      {
>         std::cout << "Object created." << std::endl;
>      }
>
>      ~Example()
>      {
>         std::cout << "Object destroyed." << std::endl;
>      }
>};
>
>int main()
>{
>   std::shared_ptr<Example> ptr1 = std::make_shared<Example>();
>   {
>      std::shared_ptr<Example> ptr2 = ptr1; // Reference count increases.
>      std::cout << "Reference count: " << ptr1.use_count() << std::endl;
>   }
>
>   // ptr2 goes out of scope, reference count decreases.
>   std::cout << "Reference count: " << ptr1.use_count() << std::endl;
>   // Object is destroyed when reference count reached 0
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When managing the lifetime of dynamically allocated objects using std::shared_ptr and std::unique_ptr to avoid memory leaks.
>
> - In large-scale C++ projects where manual memory management is prone to errors or inefficiencies.
>
> - When working with external libraries that provide garbage collection or when integrating languages with built-in garbage collectors.
>
> **When Not to Use**
>
> - In small programs where manual memory management is sufficient and adding complexity with smart pointers or external garbage collection isn't needed.
>
> - For real-time systems where deterministic performance is critical, as garbage collection may introduce unpredictable pauses.
>
> - When using objects with complex ownership semantics that don't fit well into reference-counted models.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Reduced Memory Leaks**: Smart pointers and external garbage collection help reduce memory leaks by automatically managing memory.
>
> - **Cleaner Code**: Smart pointers simplify memory management, reducing the need for explicit delete calls and manual tracking of object lifetimes.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**: Reference counting in smart pointers adds overhead, which may affect performance.
>
> - **Non-deterministic Destruction**: In garbage-collected environments, objects may not be destroyed immediately, leading to unpredictable behavior in time-sensitive applications.
>
> - **Complexity**: Adding external garbage collection libraries can complicate the project and increase its complexity.
>
>
>
><hr>
>
>
>




### <font color="#ffc900">Advanced C++ Features</font>
> ### <font color="#a442f5">Error Handling</font>
> ### <font color="#ff009e">Exceptions</font>
> C++ provides a mechanism called **exceptions** to handle runtime errors. This mechanism allows for throwing exceptions when an error occurs and catching them at a suitable location in the program to handle it gracefully. Exceptions provide a way to manage errors and other exceptional conditions without resorting to complex return value check.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <stdexcept>
>
>void divide(int a, int b)
>{
>   if(b == 0)
>   {
>      throw std::runtime_error("Division by zero error!");
>   }
>   std::cout << "Result: " << a / b << std::endl;
>}
>
>int main()
>{
>   try
>   {
>      divide(10, 0) // Throws an exception
>   }catch(const std::runtime_error& error){
>      std::cerr << "Caught an exception: " << e.what() << std::endl;
>   }
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When dealing with errors that cannot be handled locally or require unwinding multiple layers of function calls.
>
> - When you need to handle resource allocation and deallocation in response to runtime errors (e.g., file I/O, memory allocation).
>
> - For dealing with runtime exceptions in libraries, such as file handling, network operations, or memory-related issues.
>
> **When Not to Use**
>
> - For handling normal, expected control flow (e.g., breaking out of a loop), as exceptions should be used only for error handling.
>
> - In performance-critical sections where exception handling may introduce overhead.
>
> - In situations where resource management via RAII can automatically handle errors without needing explicit exception handling.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Clear Separation of Error Handling**: By separating normal logic and error handling code, exceptions make the code cleaner and more maintainable.
>
> - **Automatic Stack Unwinding**: When an exception is thrown, C++ automatically unwinds the stack, releasing resources and calling destructors, preventing memory leaks.
>
> - **Standardized Error Handling**: Using exceptions enforces a standard method for managing errors across a codebase.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance Overhead**: Exceptions can introduce runtime overhead due to stack unwinding and context switching when an error is thrown.
>
> - **Non-Local Error Handling**: Handling errors far from where they occur can make debugging difficult, as control flow is less obvious.
>
> - **Complexity**: Excessive use of exceptions, especially for non-exceptional control flow, can complicate code and make it harder to follow.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Custom Exception Classes</font>
> While the standard library provides a rich set of exceptions, such as **std::runtime_error** and **std::logic_error**, sometimes you need more specific exceptions tailored to your application. In such cases, creating custom exception classes allows you to handle errors in a more precise and meaningful way.
>
> A custom exception class is derived from **std::exception** or one of its derived classes. You can add additional members to store more information about the error, like error codes, messages or context.
>
> At a minimum, you should override the **what()** method, which returns a description of the error. The class can be expanded to contain more detailed information about the error condition.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <exception>
>#include <string>
>
>// Custom exception class derived from std::exception
>class MyException : public std::exception
>{
>   private:
>      std::string message;
>
>   public:
>      MyException(
>         const std::string& p_message
>      )
>      :
>      message(p_message) {}
>
>      // Override the what() method from std::exception
>      const char* what() const noexcept override
>      {
>         return message.c_str();
>      }
>};
>
>// Function that throws the custom exception
>void riskyOperation(int value)
>{
>   if(value < 0)
>   {
>      throw MyException("Negative value error: " + std::to_string(value));
>   }
>   std::cout << "Operation successful with value: " << value << std::endl;
>}
>
>int main()
>{
>   try
>   {
>      riskyOperation(-5);
>   }catch(const MyException& error)
>   {
>      std::cerr << "Caught MyException: " << e.what() << std::endl;
>   }
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When the standard library exceptions do not provide enough context or specificity for your application's needs.
>
> - When you need to encapsulate additional information (like error codes, context, or logs) in the exception.
>
> - In large applications where different modules or components may need different types of error reporting.
>
> **When Not to Use**
>
> - For simple errors where a standard exception like std::runtime_error or std::logic_error suffices.
>
> - In very small or performance-sensitive sections where the cost of creating and throwing exceptions is too high.
>
> - When exceptions are used for non-exceptional control flow, which can lead to unnecessary complexity.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Enhanced Error Reporting**: Custom exceptions allow you to provide more specific and detailed error information relevant to your application.
>
> - **Consistency**: A custom hierarchy of exceptions can make error handling more consistent across different parts of a large application.
>
> - **Modular Error Handling**: You can categorize exceptions based on modules or functionality (e.g., I/O errors, network errors), improving maintainability.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**: Custom exceptions, especially when misused, can introduce overhead and unnecessary complexity.
>
> - **Maintenance**: Over time, a large hierarchy of custom exceptions can be difficult to manage and may require additional effort to maintain.
>
> - **Over-Specialization**: In some cases, creating too many specialized exceptions can make error handling more cumbersome instead of more streamlined.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">std::expected</font>
> A class that intended to manage and represent expected and unexpected values in type-safe manner. It aims to provide an alternative to exceptions for error handling by explicitly returning an expected result or an error, enchancing clarity and reducing overhead.
>
> The **std::expected** class template holds either a value (expected) or an error (unexpected). It is similiar to **std::optional**, but with the added feature of carrying an error type. Instead of throwing exceptions, you return an **expected<T, E>** where **T** is the type of the excepted value, and **E** is the error type. This allows you to handle errors explicitly without using exceptions.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <string>
>#include <variant>
>
>// A simple implementation of 'excepted' for demonstration
>template<typename T, typename E>
>class Excepted
>{
>   private:
>      std::variant<T, E> value;
>
>   public:
>      Expected(
>         const T& p_value
>      )
>      :
>      value(p_value) {}
>
>      Expected(
>         const E& p_error
>      )
>      :
>      value(p_error) {}
>
>      bool has_value() const
>      {
>         return std::holds_alternative<T>(value);
>      }
>
>      T value_or(const T& default_value) const
>      {
>         return has_value() ? std::get<T>(value) : default_value;
>      }
>
>      T value() const
>      {
>         if(!has_value() throw std::runtime_error("Unexpected error!"));
>
>         return std::get<T>(value);
>      }
>
>      E error() const 
>      {
>         return std::get<E>(value);
>      }
>}
>
>// Function that uses Expected instead of exceptions
>Expected<int, std::string> safe_divide(int numerator, int denominator)
>{
>   if(denominator == 0)
>   {
>      return "Error: Division by zero";
>   }
>   return (numerator / denominator);
>}
>
>int main()
>{
>   auto result = safe_divide(10, 0);
>
>   if(result.has_value())
>   {
>      std::cout << "Result: " << result.value() << std::endl;
>   }else{
>      std::cerr << "Error: " << result.error() << std::endl;
>   }
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you prefer explicit error handling without exceptions, particularly in environments where exceptions are discouraged (e.g., embedded systems).
>
> - When you want to represent operations that can fail, and both success and error cases need to be managed in the type system.
>
> - When returning a valid value or an error is more intuitive than throwing exceptions, especially in performance-critical applications.
>
> **When Not to Use**
>
> - In codebases that rely heavily on exceptions, as introducing std::expected can lead to inconsistent error handling approaches.
>
> - When simplicity is preferred, and using exceptions (or even std::optional) suffices for error handling.
>
> - In systems where return values are not well suited for representing both success and failure (e.g., APIs where exceptions are required).
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Type-Safe Error Handling**: Errors and valid values are handled explicitly, improving code readability and safety.
>
> - **No Overhead of Exceptions**: Removes the potential performance overhead that comes with exception handling.
>
> - **Clarity**: Makes error handling more straightforward by avoiding the need for try/catch blocks.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Boilerplate Code**: Error handling can introduce boilerplate code, especially if overused.
>
> - **Limited Debugging Information**: Compared to exceptions, you may lose stack traces and other debugging aids that exceptions provide.
>
>
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Type Casting</font>
> C++ provides several casting operators to convert between different types of pointers, references or objects. Each type of cast serves a specific purporse and has different impilcations for safety, performance and use cases. 
>
> ### <font color="#ff009e">static_cast</font>
> It is the most common and safest type of cast in C++. It is used for well-defined conversions between types, such as converting a pointer to a base class to a pointer to a derived class or converting between numeric types.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int num = 10;
> double d = static_cast<double>(num);
>```
>
> **When To Use**
> 
> - When you need to perform a conversion that is well-defined and non-polymorphic such as numeric conversions or pointer upcasts (from derived to base).
>
> **When Not to Use**
>
> - When dealing with polymorphic types where you might need a runtime check (use 'dynamic_cast' instead).
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Safety**:
> Provides a compile-time type checking, making it safer than C-style casts. 
> 
> - **Clarity**:
> It clearly indicates the intent to perform a specific type of conversion.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **No Runtime Check**:
> There is no runtime type checking, so incorrect downcasting (from base to derived) can lead to undefined behavior. 
>
>
><hr>
>
>
>
> ### <font color="#ff009e">dynamic_cast</font>
> Used for safe downcasting in polymorphic hieracrhies. It checks at runtime whether the conversion is valid and returns 'nullptr' if it is not.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Base
>{
>   public:
>      virtual ~Base() = default;
>};
>
>class Derived : public Base {};
>
>Base* basePtr = new Derived();
>Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
>```
>
> **When To Use**
> 
> - When you need to safely downcast pointers or references in a polymorphic class hierarchy.
>
> **When Not to Use**
>
> - When you do not require runtime type checking of when performance is critical (as 'dynamic_cast' can be slower due to runtime checks).
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Safety**: 
> It provides runtime type safety by checking if the cast is valid.
>
> - **Polymorphism**:
> It is essential for safely downcasting in polymorphic class hierarchies.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance**:
> It incurs a runtime overhead due to type checking.
>
> - **Limited to Polymorphism**:
> It can only be used with polymorphic types (classes with virtual functions). 
>
>
>
><hr>
>
>
> ### <font color="#ff009e">const_cast</font>
> It is used to add or remove the 'const' qualifer from a variable. It is the only cast that change the 'const' or 'volatile' qualifier.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>void foo(const int* p)
>{
>   int* q = const_cast<int*>(p);
>   *q = 20;
>}
>```
>
> **When To Use**
> 
> - When you need to remove 'const' or 'volatile' qualifiers in a controlled environment where you know the cast is safe.
>
> **When Not to Use**
>
> - When the original object was declared as 'const' and modifying it would lead to undefined behavior.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Controlled Usage**:
> It allows modification of otherwise immutable data in a controlled and intentional way. 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Undefined Behavior**:
> Modifying a 'const' object after using 'const_cast' leads to undefined behavior.
>
> - **Dangerous**:
> Misusing 'const_cast' can easily lead to bugs and unstable code. 
>
>
>
>
><hr>
>
>
> ### <font color="#ff009e">reinterpret_cast</font>
> It is used for low-level casts that can reinterpret the bits of a variable in a different way, typically used for converting between unrelated pointer types or casting a pointer to an integer type.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>int num = 42;
>int* p = &num;
>long addr = reinterpret_cast<long>(p);
>```
>
> **When To Use**
> 
> - When you need to perform bitwise conversions between types, such as between pointers and integers or between unrelated pointer types.
>
> **When Not to Use**
>
> - When safety and portability are important, as 'reinterpret_cast' is prone to producing non-portable, unsafe code.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility**:
> It allows for conversions that are otherwise not possible with other casts. 
>
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Unsafe**:
> There are no checks or guarantees and the cast might produce undefined behavior if misused.
>
> - **Portability Issues**:
> The results of 'reinterpret_cast' may not be portable across different platforms or compilers.
>
>
>
><hr>
>
>
> ### <font color="#ff009e">C-Style Cast (Type Casting)</font>
> C++ also supports the old C-style cast, which is less safe because it combines the functionality of 'static_cast', 'const_cast' and 'reinterpret_cast' without distinguishing between them. It is considered best practice to avoid C-style casts in C++.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int num = 43;
> double d = (double)num;
>```
>
> **<font color="#ff0000">Warning !</font>**
> 
> - It is better to avoid C-style casts in C++.





> ### <font color="#a442f5">Metaprogramming</font>
> ### <font color="#ff009e">SFINAE(Substitution Failure Is Not An Error)</font>
> SFINAE is a powerful feature of C++ that allows the compiler to choose the appropriate function template or specialization by rejecting invalid overloads during the template substitution process. Essentialyl, if an valid substitution occurs while deducing template parameters, the compiler does not produce an error. Instead, it continues searching for other viable candidates.
>
> This feature is often used in template metaprogramming to enable or disable certain function or class templates based on template parameters.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <type_traits>
>
>// Function template enabled only if T is an integral type.
>template<typename T>
>typename std::enable_if<std::is_integral<T>::value, void>::type
>print(T value)
>{
>   std::cout << "Integral: " << value << std::endl;
>}
>
>// Function template enabled only if T is not an integral type
>template<typename T>
>typename std::enable_if<!std::is_integral<T>::value, void>::type
>print(T value)
>{
>   std::cout << "Non-Integral: " << value << std::endl;
>}
>
>int main()
>{
>   print(10); // Calls the integral version.
>   print(3.14); // Calls the non-integral version.
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need to provide different behavior for templates depending on the properties of the template arguments.
>
> - When you want to enable or disable certain functions or methods based on compile-time conditions.
>
> - For advanced template metaprogramming and type checking, such as checking for the existence of methods or types in template parameters.
>
> **When Not to Use**
>
> - If simpler solutions like function overloading or inheritance are sufficient, as SFINAE can introduce complexity.
>
> - In cases where performance is critical, as complex SFINAE-based solutions can slow down compilation.
>
> - If code readability is a top priority and template metaprogramming may confuse future maintainers.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Selective Template Instantiation**: SFINAE allows for fine-grained control over which templates are instantiated, enabling more flexible and reusable code.
>
> - **Type-Safe Code**: Ensures that only valid template specializations are instantiated based on the type traits of the template arguments.
>
> - **No Runtime Overhead**: All checks and decisions are made at compile time, with no impact on runtime performance.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: SFINAE can make code harder to read and maintain, especially for developers unfamiliar with template metaprogramming.
>
> - **Debugging**: Errors involving SFINAE can be difficult to understand and debug, as template error messages can be cryptic.
>
> - **Compile-Time Overhead**: Excessive use of SFINAE can lead to longer compilation times, especially in large codebases.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">constexpr if</font>
> It is a compile-time desicion-making feature introduced in C++17 that allows you to evaluate conditions at compile-time. It enables more flexible and efficient template programming by allowing parts of the code to be included or excluded during compilation based on a condition.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template<typename T>
>void printTypeInfo(T t)
>{
>   if constexpr(std::is_integral<T>::value)
>   {
>      std::cout << "Integral type\n";
>   }else
>   {
>      std::cout << "Non-integral type\n";
>   }
>}
>
>int main()
>{
>   printTypeInfo(10); // Integral Type
>   printTypeInfo(3.14); // Non-integra Type
>}
>```
>
> **When To Use**
> 
> - Use constexpr if when you need to write template code that should behave differently based on certain compile-time conditions.
>
> - Useful when you want to prevent certain code paths from being instantiated if they aren't needed.
>
> **When Not to Use**
>
> - Avoid using it when runtime decisions are needed, as constexpr if is purely for compile-time decisions.
>
> - When the logic does not benefit from compile-time evaluation.
>
> **<font color="#b3f542">Advantages</font>**
>
> - Efficiency: Only compiles the branches needed, reducing code bloat.
>
> - Clarity: Avoids complex enable_if constructs, making the code more readable.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Overuse may lead to overly complex template code that is hard to maintain.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Fold Expressions</font>
> Fold expressions in C++17 provide a way to apply binary operators to a parameter pack, simplifying the process of combining arguments.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template<typename... Args>
>auto sum(Args... args)
>{
>   return(args + ...); // Unary right fold.
>}
>
>int main()
>{
>   std::cout << sum(1, 2, 3, 4);  // Output: 10
>}
>```
>
> **When To Use**
> 
> - When you need to perform an operation (like sum, product, or logical operations) over a parameter pack in a concise way.
>
> - Particularly useful in variadic templates to avoid manual recursion over template parameters.
>
> **When Not to Use**
>
> - Avoid when you don't need to operate over parameter packs or when the operation doesn't logically fit a fold expression.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Simplifies Variadic Templates**: Removes the need for recursive template code.
>
> - **Compact Syntax**: Makes code more concise and readable when performing operations on variadic parameters.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Limited Use Case**: Only applicable to operations that can be folded.
>
>
>
><hr>
>
>
>





> ### <font color="#a442f5">PIMPL Idiom</font>
> The PIMPL idiom (Pointer to IMPLementation) is a technique in C++ used to hide implementation details from a class's public interface. It decouples the interface from its implementation, reducing compile-time dependencies and improving encapsulation. This pattern separates the interface (visible to users) from the implementation (which can change without affecting the interface).
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>// Header File (Class.h)
>class Example
>{
>   private:
>      struct Impl; // Forward declaration of the implementation class.
>      Impl* pImpl; // Pointer to implementation.
>};
>
>// Source File (Class.cpp)
>#include "Class.h"
>#include <iostream>
>
>struct Example::Impl
>{
>   void doSomething()
>   {
>      std::cout << "Doing something in the implementation!" << std::endl;
>   }
>};
>
>Example::Example() : pImpl(new Impl) {}
>
>Example::~Example()
>{
>   delete pImpl;
>}
>
>void Example::doSomething()
>{
>   pImpl -> doSomething();
>}
>```
>
> **When To Use**
> 
> - When you want to hide implementation details of a class, reducing header dependencies.
>
> - Use when you want to improve compile-time by minimizing rebuilds when implementation details change.
>
> **When Not to Use**
>
> - Avoid when performance is critical and the overhead of an extra indirection (due to pointer dereferencing) is unacceptable.
>
> - Not needed if the implementation details are minimal or unlikely to change.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Encapsulation**: Completely hides implementation details, enabling changes without affecting client code.
>
> - **Reduced Compile-Time Dependencies**: Changing the implementation doesn’t require recompiling code that depends on the interface.
>
> - **Stable ABI**: Useful for library developers who want to provide a stable ABI while allowing changes in implementation.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance Overhead**: Indirection caused by the pointer adds a small performance cost.
>
> - **Memory Management**: You must manually manage dynamic memory (e.g., via new and delete or smart pointers), which adds complexity.
>
>
>
><hr>
>
>
>




### <font color="#ffc900">Concurrency & Multithreading</font>
> ### <font color="#a442f5">Basics</font>
> ### <font color="#ff009e">Memory Model</font>
>
> The **C++ memory model** defines the interaction between threads, memory and synchronization primitives like mutexes and atomics. It provides a framework for understanding how variables are shared between threads, ensuring that multithreaded programs behave predictably across different hardware and compiler architectures.
>
> At the core, the memory model explains how reads and writes to shared memory are ordered and how synchronization between threads can be achieved to prevent race conditions.
>
> - **Sequential Consistency**
>     - The memory model guarantees that all operations appear to occur in a fixed global order, which ensures predictability across multiple threads.
>     - Howeever, actual hardware architectures may reorder memory operations for optimization, and thus, compiler and CPUs apply these optimizations while still adhering to the memory rules.
>
> - **Data Races**
>     - A data race occurs when two or more threads access shared memory concurrently, and at least one access is a write.
>     - Data races result in undefined behavior in C++. The memory model ensures that correctly synchronized programs, using primitec like **mutexes** or **atomics** to avoid data races.
>
> - **Atomic Operations**
>     - Atomic types **std::atomic** ensure that operations on variables are indivisible and thread-safe.
>     - They prevent data races by ensuring that all threads see consistent values, even on hardware where non-atomic operations may be reordered or split.
>
> - **Memory Ordering**
>     - **Relaxed Ordering**:
>        The program is only concerned with atomicity, not the order of operations across-threads.
>     - **Acquire-Release Semantics**:
>        Used with synchronization operations to ensure visibility of memory operations between threads.
>        - **Acquire**:
>           Prevents memory reordering of read operations before the acquire operations.
>        - **Release**:
>           Prevents memory reordering of write operations after the release operations.
>     - **Sequentially Consistent**:
>        A stricter ordering that ensures all operations appear to happen in a global, sequential order.
>
> - **Locks and Synchronization Primitives**
>     - C++ provides synchronization tools like **std::mutex**, **std::lock_guard** and **std::unique_lock** to prevent race conditions.
>     - **Locks** ensure that only one thread can access a critical section at a time, providing mutual exclusion.
>
>
>
><hr>
>
>
>
>
> ### <font color="#ff009e">std::thread</font>
> Multithreading in C++ allows programs to perform multiple tasks simultaneously, leveraging modern multi-core processors to improve performance and responsiveness. C++ provides several standard library components to manage threads and synchronize access to shared resources, such as std::thread, std::mutex, and std::atomic.
>
> **std::thread**
>
> It is the basic building block for creating and managing threads in C++. It represents an independent thread of execution and allows you to run a function or callable object concurrently with other threads.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <thread>
>
>void printMessage(const std::string& message)
>{
>   std::cout << message << std::endl;
>}
>
>int main()
>{
>   std::thread t1(printMessage, "Thread 1");
>   std::thread t2(printMessage, "Thread 2");
>
>   t1.join(); // Wait for t1 to finish.
>   t2.join(); // Wait for t2 to finish.
>   
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need to perform tasks concurrently, expecially in CPU-bound operations that can benefit from parallel execution.
>
> - When you want to run a function or callable object independently of the main program flow.
>
> **When Not to Use**
>
> - Avoid using 'std::thread' when tasks are I/O-bound, as this may not lead to significant performance improvements.
>
> - Do not use 'std::thread' for trivial tasks where the overhead of the thread management outweighs the benefits.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Concurrency** 
> 
> - **Control**
>
> - **Simpilicty**
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**
>
> - **Complexity**
>
> - **Potential for Bugs** 
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">std::mutex</font>
> It is a synchronization primitive used to protect shared resources from being accessed simultaneously by multiple threads. It ensures that only one thread can access the resource at a time, preventing race conditions.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <thread>
>#include <mutex>
>
>std::muxet mtx;
>
>void printSafeMessage(const std::string& message)
>{
>   std::lock_guard<std::mutex> lock(mtx); // Lock the mutex.
>   std::cout << message << std::endl; // Mutex is automatically released when lock goes out of scope.
>}
>
>int main()
>{
>   std::thread t1(printSafeMessage, "Thread 1");
>   std::thread t2(printSafeMessage, "Thread 2");
>
>   t1.join();
>   t2.join();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When multiple threads need to access and modify shared resources concurrently.
>
> - Use it to prevent race conditions where the outcome of operations depends on the order of thread execution.
>
> **When Not to Use**
>
> - If you can design you program to avoid shared state or if you can use higher-level synchronization primitives like 'std::atomic'.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Protection**:
> Provides threads-safe access to shared resources, preventing race conditions.
>
> - **Flexibility**
>
> - **Automatic Management**:
> Can be easily managed using RAII, with classes like 'std::lock_guard' or 'std::unique_lock'. 
>
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance**:
> Locking and unlocking a mutex introduces overhead and can lead to contention, reducing performance.
>
> - **Deadlocks**:
> Incorrect use of mutexes can lead to deadlocks, where two or more threads are stuck waiting for each other to release locks. 
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">std::lock_guard</font>
> It is a mutex wrapper that provides a convenient way to manage locks in C++ multithreaded code. It ensures that a mutex is locked when the **lock_guard** object is created and automatically unlocked when the **lock_guard** goes out of scope. This RAII (Resource Acquisition Is Initialization) pattern prevents deadlocks and guarantees exception-safe locking.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <thread>
>#include <mutex>
>
>std::mutex mtx;
>
>void shared_print(const std::string& msg, int id)
>{
>   std::lock_guard<std::mutex> lock(mtx); // Lock mutex on entry, unlock on exit.
>   std::cout << msg << ": " << id << std::endl;
>}
>
>void thread_function()
>{
>   for(int i = 0; i < 10; ++i)
>   {
>      shared_print("From thread", i);
>   }
>}
>
>int main()
>{
>   std::thread t1(thread_function);
>   std::thread t2(thread_function);
>
>   t1.join();
>   t2.join();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - Use when you need simple, automatic, and exception-safe locking and unlocking of a mutex.
>
> - Ideal for short critical sections where you need to synchronize access to shared resources between multiple threads.
>
> **When Not to Use**
>
> - Avoid when you need to lock and unlock a mutex at different points in the code (use std::unique_lock for more complex locking scenarios).
>
> - Not useful if your code doesn't involve multithreading or doesn't require mutex synchronization.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **RAII**: Ensures mutex is always unlocked when the lock_guard goes out of scope, even in case of exceptions.
>        
> - **Simplicity**: Simple and easy to use for basic mutex locking scenarios.
>
> - **Performance**: No additional overhead since it only locks and unlocks the mutex.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Limited Flexibility**: Cannot be unlocked before the lock_guard goes out of scope, unlike std::unique_lock.
>
> - **No Try-Locking**: Doesn’t provide features like try_lock for non-blocking attempts to acquire a lock.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">std::unique_lock</font>
>
> It is a versatile locking mechanism in C++ that provides more flexibility than **std::lock_guard**. It is used to manage the ownership of a mutex, providing explicit control over when to acquire and release the lock. Unlike **std::lock_guard**, which locks the mutex upon creation and unlocks it upon destruction, **std::unique_lock** allows for deferred locking, unlocking, and manual control over lock ownership.
>
> **Features**
>
> - **Deferred Locking**:
> You can create a **std::unique_lock** without immediately locking the mutex, then lock it later when necessary.
>
> - **Manual Unlocking**:
> You can unlock the mutex before the destructor is called, giving more fine-grained control over lock ownership.
>
> - **Timed Locking**:
> It supports time-bound locking operations like **try_lock_for** and **try_lock_until**.
>
> - **Movable**:
> Unlike **std::lock_guard**, **std::unique_lock** is movable, meaning it can be transferred between different scopes or objects.
>
>
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <thread>
>#include <mutex>
>
>std::mutex mtx;
>
>void sharedFunction(int threadID)
>{
>   std::unique_lock<std::mutex> lock(mtx); // Lock the mutex.
>   std::cout << "Thread " << threadID << " is in the critical section." << std::endl;
>   lock.unlock(); // Manually unlock before leaving the scope.
>
>   // Do other work without holding the lock.
>
>   lock.lock(); // Lock again before accessing the critical section.
>   std::cout << "Thread " << threadID << " is re-entering the critical section.\n";
>}
>
>int main()
>{
>   std::thread t1(sharedFunction, 1);
>   std::thread t2(sharedFunction, 2);
>
>   t1.join();
>   t2.join();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need more control over locking and unlocking behavior.
>
> - In cases where deferred or time-bound locking is required.
>
> - When you need to transfer lock ownership between functions or threads.
>
> **When Not to Use**
>
> - If you only need a simple lock/unlock mechanism, std::lock_guard is preferable due to its simplicity.
>
> - If there's no need for deferred locking or timed locking operations.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility**: Offers more control over lock acquisition and release.
>
> - **Deferred Locking**: Can defer locking to a later time, allowing greater flexibility in resource management.
>
>- **Timed Locking**: Supports timed locking functions, which can help prevent deadlocks in some cases.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Slightly more complex than std::lock_guard due to the additional options for lock management.
>
> - **Overhead**: Slightly more overhead than std::lock_guard because of the additional functionality.
>
>
>
>
><hr>
>
>
>
>
> ### <font color="#ff009e">std::atomic</font>
> Provides a way to perform operations on variables automatically, meaning the operations are completed as a single, indivisible step. This is essential for lock-free programming, where you want to avoid the overhead of mutexes but still need to ensure data consistency.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <thread>
>#include <atomic>
>
>std::atomic<int> counter(0);
>
>void incrementCounter()
>{
>   for(int i = 0; i < 1000 ; ++i)
>   {
>      ++counter;
>   }
>}
>
>int main()
>{
>   std::thread t1(incrementCounter);
>   std::thread t1(incrementCounter);
>
>   t1.join();
>   t2.join();
>
>   std::cout << "Final counter value: " << counter.load() << std::endl;
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need to perform simple operations on shared data without the overhead of mutexes.
>
> - Use it for performance-critical code where minimal synchronization overhead is required-
>
> **When Not to Use**
>
> - Avoid for complex data structures where multiple variables need to be synchronized together.
>
> - Do not use it when the atomic operations provided are insufficient for you synchronization needs and a mutex woulf be safer or more appropriate. 
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Low Overhead**
>
> - **Simplicity**
>
> - **Lock-Free Programming** 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Limited Scope**:
> It is not suitable for all synchronization tasks, particularly when complex operations need to be performed atomically.
>
> - **Complexity**
>
> - **Portability** 
>
>
>
><hr>




> ### <font color="#a442f5">Synchronization</font>
> ### <font color="#ff009e">Condition Variables</font>
> 
> Synchronization in multithreaded programming ensures that multiple threads do not interfere with each other when accessing shared resources. A common synchronization technique is using **condition variables**, which allow threads to wait for certain conditions to be met before proceeding.
>
> A **condition variable** is used with mutex to block one or more threads until another thread notifes them that a condition has been met. It allows for efficient waiting without busy-waiting, and it can synchronize the access to shared resources between threads.
>
> **How Condition Variables Work**
>
> **Wait**:
> A thread that calls **wait** on a condition variable will be blocked until another thread notifies it that the condition it is waiting for has been met.
>
> **Notify**:
> Another thread can call **notify_one()** or **notify_all()** to wake up one or all of the threads waiting on the condition variable.
>
> **Mutex**:
> Condition variables always need to be used with a mutex to ensure that the condition check and wait operation are atomic.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Threads t1 and t2 wait for the ready flag to become true before printing a message.
> // The setReady() function sets the flag after simulating some work and notifies all waiting threads using cv.notify_all().
>
>#include <iostream>
>#include <thread>
>#include <mutex>
>#include <condition_variable>
>
>std::mutex mtx;
>std::condition_variable cv;
>bool ready = false;
>
>void printThread(int id)
>{
>   std::unique_lock<std::mutex> lock(mtx);
>   cv.wait(lock, [] {
>      return ready; // Wait until 'ready' become true.
>   });
>   std::cout << "Thread " << id << " is running" << std::endl;
>}
>
>void setReady()
>{
>   std::this_thread::sleep_for(std::chrono::seconds(1)); // Simulate work.
>   {
>      std::lock_guard<std::mutex> lock(mtx);
>      ready = true;
>   }
>   cv.notify_all(); // Notify all waiting threads.
>}
>
>int main()
>{
>   std::thread t1(printThread, 1);
>   std::thread t2(printThread, 2);
>
>   std::thread setter(setReady);
>
>   t1.join();
>   t2.join();
>   setter.join();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need to synchronize threads based on certain conditions.
>
> - When one or more threads need to wait for a shared resource to reach a specific state before proceeding.
>
> - When using mutexes and locks for thread-safe shared resource access.
>
> **When Not to Use**
>
> - If the application is not multithreaded or does not require thread synchronization.
>
> - For simple tasks where busy-waiting or atomic operations can be used without much overhead.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Efficient Waiting**: Avoids busy-waiting by putting threads to sleep until the condition is met.
>
> - **Scalability**: Allows multiple threads to wait and be notified efficiently.
>
> - **Control**: Provides fine-grained control over thread execution order and conditions.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: More complex to implement and manage compared to simple locks or atomic variables.
>
> - **Potential for Deadlock**: Misuse of locks or condition variables can lead to deadlocks if not carefully handled.
>
> - **Spurious Wakeups**: Threads may wake up even if the condition is not met, so the condition should always be checked inside the wait loop.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Barriers, Latches</font>
>
> In multithreading and parallel programming, barriers and latches are synchronization primitives used to control the execution of multiple threads, ensuring that they reach a certain point in the code before continuing. Both are useful when managing dependencies between threads.
>
> **Barriers**
>
> A barrier ensures that all participating threads reach a certain point in the code before any of them proceed. Once all threads have hit the barrier, they are relased and allowed to continue execution. This mechanism is particulary useful when threads must complete a specific task before moving to the next stage of computation.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <thread>
>#include <barrier>
>#include <vector>
>
>std::barrier sync_point(4); // Barrier for 4 threads.
>
>void task(int id)
>{
>   std::cout << "Thread " << id << " at phase 1" << std::endl;
>   sync_point.arrive_and_wait(); // Synchronize threads here.
>   std::cout << "Thread " << id << " at phase 2" << std::endl;
>}
>
>int main()
>{
>   std::vector<std::thread> threads;
>
>   for(int i = 0; i < 4; ++i)
>   {
>      threads.emplace_back(task, i);
>   }
>
>   for(auto& t :threads)
>   {
>      t.join();
>   }
>
>   return 0;
>}
>```
>
>
> **Latches**
>
> A latch is another synchronization mechanism that works similarly to a barrier but is used for one-time synchronization. It allows threads to wait until a specified number of other threads have completed their tasks. Once the latch is triggered (i.e: reaches zero), it cannot be reset, and waiting threads are allowed to proceed.
>
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <thread>
>#include <latch>
>#include <vector>
>
>std::latch latch_point(3); // Latch for 3 threads.
>
>void task(int id)
>{
>   std::cout << "Thread " << id << " is done with its work" << std::endl;
>   latch.point.count_down(); // Decrease latch count.
>}
>
>void final_task()
>{
>   latch_point.wait(); // Wait until latch reaches 0
>   std::cout << "All tasks are done. Executing final task." << std::endl;
>}
>
>int main()
>{
>   std::vector<std::thread> threads;
>
>   for(int i = 0; i < 3; ++i)
>   {
>      threads.emplace_back(task, i);
>   }
>
>   std::thread final(final_task);
>
>   for(auto& t : threads)
>   {
>      t.join();
>   }
>
>   final.join();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - Use barriers when you need to synchronize multiple threads repeatedly at specific points in the code.
>
> - Use latches when you need to synchronize multiple threads only once before proceeding.
>
> **When Not to Use**
>
> - Avoid using barriers if the synchronization points between threads are unnecessary or too frequent, as they can introduce performance bottlenecks.
>
> - Avoid latches if you need repeated synchronization, as they cannot be reset once they are released.
>
> **<font color="#b3f542">Advantages</font>**
>
> - Barriers: Ensure synchronization at multiple points in the execution, allowing coordinated progress between threads.
>
> - Latches: Simple and efficient for one-time synchronization.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - Barriers: Can lead to performance issues if used excessively or incorrectly.
>
> - Latches: Limited to one-time synchronization, lacking flexibility for repeated usage.
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">High-Level Concurrency</font>
> ### <font color="#ff009e">std::async, std::future, std::promise</font>
>
> In modern C++, handling tasks concurrently is often crucial for optimizing performance and responsiveness. The Standard Library provides tools like std::async, std::future, and std::promise that help manage asynchronous operations, allowing tasks to be executed concurrently without the need for manual thread management.
>
> - **std::async:**
> Launches a function asynchronously, potentially in a separate thread and returns as 'std::future' object representing the eventual result of the function.
>
> - **std::future**:
> An object that holds the result of an asynchronous operation, allowing you to retrieve the result once it becomes available. It provides synchronization between the calling thread and the asnychronous task.
>
> - **std::promise**:
> A mechanism to set a value or exception that 'std::future' object will eventually hold. It decouples the producer(who sets the value) from the consumer (who retrieves the value via the future).
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <future>
>#include <thread>
>
>// Function to computer square using std::async
>int computerSquareAsync(int x)
>{
>   std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulates a time-consuming operation.
>
>   return x * x;
>} 
>
>// Function to compute square using std::promise and std::future
>int computeSquareWithPromise(std::promise<int>&& promiseObj, int x)
>{
>   promiseObj.set_value(x * x); // Set the result for the associated future.
>}
>
>int main()
>{
>   // Using std::async
>   std::future<int> futureResultAsync = std::async(std::launch::async, computeSquareAsync, 10);
>
>   // Using std::promise and std::future
>   std::promise<int> promiseObj;
>   std::future<int> futureResultPromise = promiseObj.get_future();
>   std::thread t(computeSquareWithPromise, std::move(promiseObj), 5);
>
>   // Do other work in the main thread
>   std::cout << "Doing other work in main thread..." << std::endl;
>
>   // Retrieve results
>   int resultAsync = futureResultAsync.get(); // Blocks until the result is ready.
>   int resultPromise = futureResultAsync.get(); // Blocks until the promise is fulfilled.
>
>   // Print results
>   std::cout << "Result from std::async: " << resultAsync << std::endl;
>   std::cout << "Result from std::promise and std::future: " << resultPromise << std::endl;
>
>   // Join the thread
>   t.join();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - Use 'std::async' when you want to offload a task to run concurrently without managing threads manually. It is perfect for scenarios where you need the result eventually but do not want to block the main thread.
>
> - Use 'std::promise' and 'std::future' combination when you need fine-grained control over the production and consumption of a result. It is useful in more complex concurrent workflows where tasks are not immediately tied to a function call but might depend on other factors.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Concurrency**:
> All three tools enable concurrent execution of tasks, which can significantly improve program efficiency and responsiveness.
>
> - **Ease of Use**:
> 'std::async' simplifies the creation of asynchronous tasks, while 'std::promise' and 'std::future' provide a powerful mechanism for decoupling task execution and result retrieval.
>
> - **Exception Handling**:
> If an asynchronous task throws an exception, it is captured by the 'std::future' and can be handled later when 'get()' is called. 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**
>
> - **Blocking**:
> If you call 'get()' on a 'std::future', it will block the current thread until the result is available, which could cause issues if not managed carefully. 
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Async Programming</font>
> ### <font color="#a442f5">Coroutines</font>
> ### <font color="#ff009e">Awaiting, Reusable Functions (Generators)</font>
> 
> Coroutines are special functions C++ that can be paused and resumed at specific points. They are especially useful in **asynchronous programming** and situations where lazy evaluation is beneficial. In C++, coroutines were introduced in C++20, providing a powerful tool for writing asynchronous, non-blocking code without the need for traditional threading.
>
> **Awaiting**
>
> Awaiting is a feature of coroutines that allows you to suspend the execution of a function until a certain condition is met (such as the completion of an asynchronous task). The suspended coroutine can later be resumed from where it was left off, making coroutines very useful in event-driven or async programming models.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <coroutine>
>#include <chrono>
>#include <thread>
>
>struct awaitable
>{
>   bool await_ready() const noexcept { return false; }
>   void await_suspend(std::coroutine_handle<>) const noexcept
>   {
>      std::this_thread::sleep_for(std::chrono::seconds(1));
>   }
>   void await_resume() const noexcept {}
>};
>
>struct Task
>{
>   struct promise_type
>   {
>      task get_return_object() { return {}; }
>      std::suspend_never initial_suspend() { return {}; }
>      std::suspend_never final_suspend() noexcept { return {};}
>      void return_void() {}
>      void unhandled_exception() {}
>   };
>};
>
>task myCoroutine()
>{
>   std::cout << "Coroutine started..." << std::endl;
>   co_await awaitable{};
>   std::cout << "Coroutine resumed after await..." << std::endl;   
>}
>
>int main()
>{
>   myCoroutine();
>   std::cout << "Main function completed." << std::endl;
>
>   return 0 ;
>}
>```
>
>
>
> **Reusable Functions (Generators)**
>
> Coroutines are also highly reusable, allowing you to write efficient, non-blocking and stateful functions that can be paused and resumed multiple times throughout their lifetime. This makes them perfect for generator-like functions, where a series of values can be lazily produced over time.
>
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <coroutine>
>
>struct generator
>{
>   struct promise_type
>   {
>      int current_value;
>
>      generator get_return_object() { return generator { std:.coroutine_handle<promise_type>::from_promise(*this)}; }
>      std::suspend_always initial_suspend() { return {}; }
>      std::suspend_always final_suspend() noexcept { return {}; }
>      std::suspend_always yield_value( int value )
>      {
>         current_value = value;
>         return {};
>      }
>      void return_void() {}
>      void unhandled_exception() {std::exit(1); }
>   };
>
>      std::coroutine_handle<promise_type> handle;
>
>      generator(std::coroutine_handle<promise_type> h) : handle(h) {}
>      ~generator() { handle.destroy(); }
>
>      bool next()
>      {
>         if(handle.done()) return false;
>         handle.resume();
>         
>         return true;
>      }
>
>      int value() const { return handle.promise().current_value; }
>};
>
>generator counter(int max)
>{
>   for(int i = 1; i <= max; ++i)
>   {
>      co_yield i;
>   }
>}
>
>int main()
>{
>   auto gen = counter(5);
>   while(gen.next())
>   {
>      std::cout << "Value: " << gen.value() << std::endl;
>   }
>}
>```
>
>
> **When To Use**
> 
> - When writing asynchronous or event-driven code, such as network programming, where non-blocking behavior is essential.
>
> - When implementing reusable generators or lazy-evaluation mechanisms to efficiently produce sequences of data.
>
> - When you need to handle a series of tasks asynchronously but want to avoid callback-based code complexity.
>
> **When Not to Use**
>
> - In performance-critical sections where coroutines could add overhead compared to simpler, non-pausing functions.
>
> - In code that must run on compilers or environments without full support for C++20 or coroutines.
>
> - If the application logic doesn't require asynchronous execution or suspension, coroutines might add unnecessary complexity.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Asynchronous Execution**: Coroutines allow for non-blocking, asynchronous programming in a clear and intuitive way.
>
> - **Lazy Evaluation**: Coroutines can produce values on demand, improving efficiency in certain scenarios (like generators).
>
> - **Modular Code**: Coroutines simplify complex asynchronous workflows by removing the need for explicit state management.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance Overhead**: Coroutines introduce some overhead, particularly in context switching.
>
> - **Complexity**: Understanding and debugging coroutines can be more complex than traditional synchronous code, especially for developers unfamiliar with the concept.
>
> - **Limited Compiler Support**: Not all compilers or platforms fully support coroutines, as they were introduced in C++20.
>
>
>
><hr>





### <font color="#ffc900">Performance Optimization</font>
> ### <font color="#a442f5">Move Semantics</font>
> ### <font color="#ff009e">Move Constructors, Move Assignment</font>
> 
> A move constructor allows an object to 'steal' the resources from another object (the 'moved-from' object). The moved-from object is typically left in a valid but unspecified state, often with its resources set to nullptr or other equivalent safe values.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Syntax Example
>class Example
>{
>   public:
>      int* data;
>
>      // Move constructor
>      Example(Example&& other) noexcept : data(other.data)
>      {
>         other.data = nullptr; // Leace the moved-from object in a safe state.
>      }
>
>      ~Example()
>      {
>         delete data; // Clean up resources in the destructor.
>      }
>};
>```
>
> **Move Assignment Operator**:
> The move assignment operator is similiar to the move constructor but is used when an already initialized object is assigned a new value by transferring the resources from a source object. It releases any existing resources of the target object before taking over the resources of the source object.
>
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Syntax Example
>class Example
>{
>   public:
>      int* data;
>
>      // Move assignment operator
>      Example& operator = (Example&& other) noexcept
>      {
>         if(this != &other) // Avoid self-assignment.
>         {
>            delete data; // Clean up existing resources.
>            data = other.data // Transfer resources.
>            other.data = nullptr; // Leave the moved-from object in a safe state.
>         }
>         return *this;
>      }
>
>      ~Example()
>      {
>         delete data;
>      }
>};
>```
>
>
>> **<font color="#428df5">Example</font>**
>
>```cpp
>// Example with Move Constructor and Move Assignment Operator
>#include <iostream>
>
>class Example
>{
>   public:
>      int* data;
>
>      // Constructor
>      Example(
>         int value
>      ) :
>      data(new int(value))
>      {
>         std::cout << "Constructing: " << *data << std::endl;
>      }
>
>      // Move Constructor
>      Example(
>         Example&& other
>      ) noexcept :
>      data(other.data)
>      {
>         other.data = nullptr; // Move the resource
>         std::cout << "Move constructing" << std::endl;
>      }
>
>      // Move assignment operator
>      Example& operator = (Example&& other) noexcept
>      {
>         if(this != &other)
>         {
>            delete data; // Release existing resource.
>            data = other.data // Move the resource.
>            other.data = nullptr;
>            std::cout << "Move assigning" << std::endl;
>         }
>         return *this;
>      }
>
>      ~Example()
>      {
>         if(data)
>         {
>            std::cout << "Destroying: " << *data << std::endl;
>            delete data;
>         }
>      }
>};
>
>int main()
>{
>   Example example_1(42); // Normal construction.
>   Example example_2 = std::move(example_1); // Move construction
>
>   Example example_3(100);
>   example_3 = std::move(example_2); // Move assignment.
>
>   return 0;
>}
>```
>
>
> **When To Use**
> 
> - When managing resources such as dynamic memory, file handles, or network sockets that can be transferred between objects efficiently.
>
> - To optimize performance by avoiding unnecessary deep copies, especially when working with temporary objects or large data structures.
>
> - When working with containers (e.g., std::vector, std::map) that need to reallocate and transfer ownership of elements.
>
> **When Not to Use**
>
> - If the class does not manage any resources that benefit from move semantics (e.g., classes containing only built-in types like int or double).
>
> - In situations where shallow copies are unsafe, or where sharing ownership of resources is required (e.g., shared memory).
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Performance**: Move semantics allow for faster operations by eliminating deep copies of data.
>
> - **Efficient Resource Management**: Move constructors and move assignment operators facilitate the transfer of ownership, which can reduce memory and computational overhead.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Increased Code Complexity**: Implementing move semantics requires careful handling of resources and ensuring that the moved-from object remains in a valid state.
>
> - **Potential Bugs**: Incorrectly implemented move semantics can lead to dangling pointers or resource leaks if resources are not properly transferred or released.
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Copy Elision</font>
> Copy elision is an optimization technique in C++ that allows the compiler to avoid unnecessary copying of objects. Instead of creating temporary objects and then copying or moving them, the compiler directly constructs the objects in its final location. This reduces overhead and improves performance, especially for objects that are expensive to copy.
>
> In certain cases, C++ mandates copy elision, while in others, it is up to the compiler to apply the optimization.
>
> Without it, when a function returns an object or when temporary objects are used, a copy or more operation would usually occur. With copy elision, the compiler can skip these operations and directly construct the object in the desired location.
>
> Starting with C++17, the language guarantees that copy elision must happen in specific scenarios, such as:
>
> - When returning a local object from a function.
> - When initializing an object from a temporary object (e.g: return value of a function).
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>
>class Example
>{
>   public:
>      Example() { std::cout << "Default Constructor" << std::endl; }
>      Example(const Example&) { std::cout << "Copy Constructor" << std::endl; }
>      Example(Example&&) { std::cout << "Move Constructor" << std::endl; }
>      ~Examyple() { std::cout << "Destructor" << std::endl; }
>};
>
>Example createExample()
>{
>   Example example;
>
>   return example; // With copy elision, this will not call the copy or move constructor
>}
>
>int main()
>{
>   Example example = createExample(); // Object is directly created without copy/move.
>}
>
>/* 
>Output without C++17 or without copy elision:
>
>Default Constructor
>Copy Constructor (or Move Constructor)
>Destructor
>Destructor
>*/
>
>/*
>Output with C++17 copy elision:
>
>Default Constructor
>Destructor
>*/
>```
>
> **When To Use**
> 
> - Whenever returning local objects from a function or creating temporary objects, as the compiler will handle copy elision automatically.
>
> - In performance-sensitive code where avoiding unnecessary object copies can improve efficiency.
>
> - When constructing complex objects in return statements where the overhead of copying/moving can be significant.
>
> **When Not to Use**
>
> - You don't have to worry about explicitly "using" copy elision since it's an optimization that the compiler handles. However, understanding it can help avoid unnecessary performance concerns with copying.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Performance Optimization**: Reduces the overhead of creating, copying, and moving objects.
>
> - **Simplifies Code**: Reduces the need for manually implementing complex copy/move constructors just to optimize performance.
>
> - **Guaranteed in C++17**: Certain copy elisions are now guaranteed by the C++17 standard, making optimizations more predictable.
>
> **<font color="#f56942">Disadvantages</font>**
>
> **Non-obvious Behavior**: Relying on copy elision can make debugging harder because the compiler optimizations hide intermediate steps (such as copying or moving).
>
> - **Compiler-Dependent in Pre-C++17**: Before C++17, copy elision was not mandatory, so different compilers may behave differently.
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Inlining</font>
> It is a compiler optimization technique where the function code is expanded at the point where the function is called, rather than performing a regular function call. The **inline** keyword in C++ is a suggestion to the compiler that the function should be inlined, though the compiler can choose whether or not to inline the function based on its own criteria.
>
> Inlining is generally used to reduce the overhead of function calls, especially for small, frequently called functions.
>
> In normal function calls, control is transferred to the function, and after the function finishes, control is transferred back to the caller. This involves overhed such as pushing and popping function parameters to/from the stack. Inlining avoids its overhead by replacing the function call with the function code at compile time.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>inline int square(int x)
>{
>   return (x * x);
>}
>
>int main()
>{
>   int result = square(5); // Instead a function call, this becomes 'int result = 5 * 5;'
>}
>```
>
> **When To Use**
> 
> - **Small, Simple Functions**: Inlining is most effective for small functions where the function call overhead is significant relative to the function body.
>
> - **Performance-Critical Code**: When function call overhead needs to be minimized, such as in time-sensitive or high-performance code.
>
> - **Frequently Called Functions**: Functions that are called many times, especially inside loops, may benefit from inlining to reduce repeated call overhead.
>
> **When Not to Use**
>
> - **Large Functions**: Inlining large functions can increase code size and potentially lead to performance degradation due to cache misses.
>
> - **Recursion**: Recursive functions should not be inlined, as it would lead to infinite inlining, which is not practical.
>
> - **Debugging**: Inlining can make debugging harder, as the function's code is expanded in multiple places, making it harder to trace
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Performance**: Inlining small functions can significantly reduce the overhead of function calls, especially in tight loops.
>
> - **Eliminates Call Overhead**: For small functions, inlining can eliminate the overhead of calling a function (stack operations, jumps).
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Code Bloat**: Inlining increases the size of the compiled code, especially if the function is inlined in multiple places, which can lead to increased binary size.
>
> - **Cache Efficiency**: Large inlined functions can negatively affect the CPU instruction cache, reducing performance.
>
> - **Compiler Control**: The inline keyword is only a suggestion, and the compiler might ignore it if it decides inlining isn't beneficial.
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Profile-Guided Optimization(PGO)</font>
> In traditional optimization, compiler try to optimize code based on static information, such as the structure of the code. With PGO, the compiler gains additional insights from runtime behavior, allowing it to make more informed optimization decisions. For example, the compiler can optimize the most frequently executed paths, rearrange code to improve cache utilization, or reduce branch mispredictions.
>
> The PGO process usually involves:
>
> - **Instrumented Build**: The compiler insters instrumentation code into the program to collect data.
>
> - **Profiling Run**: The program is executed with representative input data to generate profiling information.
>
> - **Optimized Build**: The profiling data is fed back to the compiler for a second compilation, which uses this data to generate an optimized version of the program.
>
> **<font color="#428df5">Example</font>**
>
>```text
> gcc -fprofile-generate program.cpp -o program
>     // This generates the instrumented version of the program.
>
> ./program
>     // The program generates profiling data (typically in .gcda files).
>
> gcc -fprofile-use program.cpp -o program_optimized
>     // The compiler uses the collected profiling data to optimize the program.
>```
>
> **When To Use**
> 
> - **Performance-Critical Applications**: Use PGO in applications where maximum performance is required, such as video games, high-frequency trading systems, and large-scale enterprise software.
>
> - **Complex Programs with Varying Workloads**: For applications with many branches or code paths, PGO helps optimize the most frequently used paths.
>
> - **Optimization of Hot Code**: When you need to focus optimization on the most frequently executed parts of the program (hot paths) to improve overall efficiency.
>
> **When Not to Use**
>
> - **Small Programs**: PGO is less beneficial for small programs where the overhead of profiling and optimization may not result in significant performance improvements.
>
> - **Non-Representative Workloads**: If it's difficult to get a representative workload for profiling, PGO might not be effective and could even degrade performance.
>
> - **Development or Debug Builds**: The additional instrumentation from profiling may slow down the development process and make debugging more difficult.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Better Performance**: By focusing optimization on hot paths, PGO can result in significant performance improvements in critical areas of the code.
>
> - **Cache Optimization**: The compiler can better optimize code layout, improving cache utilization and reducing cache misses.
>
> - **Reduced Branch Misprediction**: PGO helps the compiler reorder branches based on runtime behavior, reducing costly branch mispredictions.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Increased Build Complexity**: PGO adds complexity to the build process, requiring multiple compilation steps and workload-based profiling.
>
> - **Longer Build Times**: The profiling and recompilation process can increase build times, which can be a drawback in fast development cycles.
>
> - **Dependence on Workload**: If the profiling run doesn't accurately reflect real-world usage, the optimizations may not be effective or could degrade performance for actual use cases.
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Compiler Optimizations</font>
> ### <font color="#ff009e">Link Time Optimization(LTO)</font>
> Link Time Optimization (LTO) is a compiler optimization technique that allows the compiler to perform optimizations across translation units during the linking phase of program. This approach gives the compiler a global view of the program, enabling optimizations that are no possible when each source file is compiled in isolation.
>
> With LTO, the intermediate representation (IR) of the program's code is passed from the compilation stage to the linking stage, allowing the linker to perform optimizations across all translation units. This can lead to performance improvements, reducing binary size and improved inlining opportunities.
>
> **<font color="#428df5">Example</font>**
>
>```text
> gcc -flto -c file_1.cpp -o file_1.o
> gcc -flto -c file_2.cpp -o file_2.o
>     // This generates object files (.o) with LTO information included.
>
> gcc -flto file_1.o file_2.o -o program
>     // The linker will now use the LTO information to perform optimizations across translation units, generating a more optimized binary.
>```
>
> **When To Use**
> 
> - **Large Programs with Many Translation Units**: LTO is particularly effective for large projects with multiple source files, where cross-file optimizations can result in better performance.
>
> - **Performance-Critical Applications**: Use LTO when you need to squeeze out every bit of performance by allowing optimizations across the entire program.
>
> - **Reducing Code Size**: LTO can help reduce the final binary size by eliminating redundant code across translation units.
>
> **When Not to Use**
>
> - **Small Projects**: For small projects with only a few translation units, LTO may not provide significant benefits and can add unnecessary complexity.
>
> - **Frequent Build Cycles**: LTO can increase link times, so it might not be ideal in development cycles where quick iterations are necessary.
>
> - **Non-Supported Toolchains**: Not all toolchains and compilers support LTO, and using it in such cases can cause build issues.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Global Optimization**: LTO enables the compiler to optimize across translation units, improving performance and efficiency.
>
> - **Better Inlining**: Functions defined in one translation unit can be inlined into other translation units, leading to faster execution.
>
> - **Dead Code Elimination**: Unused functions and variables across translation units can be identified and removed, reducing the binary size.
>
> - **Improved Optimizations**: Other optimizations like constant propagation and loop optimizations can also be performed across translation units.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Longer Build Times**: LTO introduces additional overhead during the linking stage, which can slow down build times, especially for large projects.
>
> - **Increased Memory Usage**: LTO requires more memory during the linking stage, which can be problematic for very large projects or limited build environments.
>
> - **Complex Debugging**: Debugging a program optimized with LTO can be more difficult due to aggressive inlining and other cross-unit optimizations.
>
>
>
><hr>
>
>
>




### <font color="#ffc900">Design Patters in C++</font>
> ### <font color="#a442f5">Creational Patterns</font>
> ### <font color="#ff009e">Singleton Pattern</font>
> The Singleton Pattern ensures that a class has only one instance and provides a global point of access to that instance. It restricts object creating and manages its own instantiation.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Singleton
>{
>   private:
>      static Singleton* instance;
>
>      // Private constructor to prevent instantiation
>      Singleton() {}
>
>   public:
>      // Static method to control access to the singleton instance
>      static Singleton* getInstance()
>      {
>         if(!instance)
>         {
>            instance = new Singleton();
>         }
>         return instance;
>      }
>};
>
>// Initialize pointer to zero at start
>Singleton* Singleton::instance == nullptr;
>```
>
> **When To Use**
> 
> - When you need to ensure that only one instance of a class exists throughout the system.
>
> - When you need global access to the same object, such as for managing configurations, logging, or database connections.
>
> **When Not to Use**
>
> - When you need more than one instance of the class (e.g., for scalability or parallel processing).
>
> - When the global state is not desirable, as it can make testing and debugging more difficult.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Controlled access**: Ensures a single, controlled instance.
>
> - **Global access**: Easy access to the object from anywhere in the program.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Global state**: Can introduce hidden dependencies between classes.
>
> - **Thread safety**: Requires special handling in multi-threaded applications to avoid race conditions.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Factory Pattern</font>
> The Factory Pattern provides an interface for creating object but allows subclasses to alter the type of objects that will be created. It defines a method for creating an object, but subclasses decide which class to instantiate.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Product
>{
>   public:
>      virtual void use() = 0;
>}
>
>class ConcreteProductA : public Product
>{
>   public:
>      void use() override { std::cout << "Using Product A" << std::endl; }
>};
>
>class ConcreteProductB : public Product 
>{
>   public:
>      void use() override { std::cout << "Using Product B" << std::endl; }
>};
>
>class Factory
>{
>   public:
>      static Product* createProduct(const std::string& type)
>      {
>         if(type == "A") return new ConcreteProductA();
>         if(type == "B") return new ConcreteProductB();
>
>         return nullptr;
>      }
>};
>```
>
> **When To Use**
> 
> - When a class cannot anticipate the type of objects it needs to create.
>
> - When you want to encapsulate the creation logic of an object and delegate this responsibility to subclasses.
>
> **When Not to Use**
>
> - If the object creation logic is trivial or the creation of objects is not dynamic.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Flexibility**: The code is decoupled from the specific types of products being created.
>
> - **Single Responsibility Principle**: Object creation logic is isolated from the rest of the program
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Introduces an additional level of abstraction, which may not be needed for simple applications.
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Builder Pattern</font>
> The Builder Pattern separates the construction of a complex object from its representation. It allows for step-by-step object creation and can vary the internal representation of the product.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Product
>{
>   public:
>      std::string part_A;
>      std::string part_B;
>      
>      void show()
>      {
>         std::cout << "Part_A: " << part_A << ", Part_B: " << part_B << std::endl;
>      }
>};
>
>class Builder
>{
>   public:
>      virtual void buildPart_A() = 0;
>      virtual void buildPart_B() = 0;
>      virtual Product* getProduct() = 0;
>};
>
>class ConcreteBuilder : public Builder
>{
>   Product* product;
>
>
>public:
>    ConcreteBuilder() { product = new Product(); }
>
>    void buildPart_A() override { product -> part_A = "Built Part A"; }
>    void buildPart_B() override { product -> part_B = "Built Part B"; }
>    Product* getProduct() override { return product; }
>};
>
>class Director 
>{
>public:
>    void construct(Builder* builder) 
>    {
>        builder -> buildPart_A();
>        builder -> buildPart_B();
>    }
>};
>```
>
> **When To Use**
> 
> - When creating complex objects with multiple configurations.
>
> - When you want to control the construction process of an object more granularly.
>
> **When Not to Use**
>
> - For simple objects where step-by-step construction is not necessary.
>
> - When the complexity of the object doesn't justify the overhead of using a builder.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Separation of concerns**: The process of building an object is separated from the object itself.
>
> - **Flexibility**: Allows different representations or configurations of the same object.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Increased complexity**: Requires additional code for the builder and director classes.
>
> - **Not suitable for all scenarios**: Can be overkill for simple object creation.
>
>
>
><hr>
>
>
>

>
>
> ### [Nadir Suhan ILTER](https://suhanilter.com)
