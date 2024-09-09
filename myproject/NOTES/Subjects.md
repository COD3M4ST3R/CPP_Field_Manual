<font color="#ffc900">GOLD</font>
<font color="#ff0000">RED</font>
<font color="#2aff00">GREEN</font>
<font color="#b3f542">LIGHT GREEN</font>
<font color="#f56942">LIGHT RED</font>
<font color="#a442f5">PURPLE</font>
<font color="#428df5">BLUE</font>







### <font color="#ffc900">MAIN</font>
> ### <font color="#a442f5">SUB</font>
> ### <font color="#ff009e">ELEMENT</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation










# CPP

1. [Basic Concepts](#1-basic-concepts)

   - [Keywords & Core Syntax](#keywords--core-syntax)
      - [auto](#auto)
      - [inline](#inline)
      - [static](#static)
      - [constexpr](#constexpr)
      - [typename](#typename)
      - [using](#using)
      - [extern](#extern)
      - [volatile](#volatile)
      - [mutable](#mutable)

   - [Data Types](#data-types)
      - [Trivial types (e.g., int, float, double, short int)](#trival-types)
      - [Compound types (std::pair, std::tuple) (New)](#compound-types)
      - [Standard library types (std::string, std::string_view)](#standard-library)
      - [Modern types (std::optional, std::variant, std::any) (New)](#modern-types)

   <br>
   <br>


2. [Passing Values](#2-passing-values)

   - [By Value](#by-value)
   - [By Reference](#by-reference)
   - [Raw Pointers](#by-raw-pointers)
   - [Smart Pointers](#smart-pointers)
   - [Reference Wrappers](#by-reference-wrapper)

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
      - [Abstraction (Abstract Classes & Interfaces) (New)](#abstraction-abstract-classes--interfaces)
    
    - [Advanced OOP](#advanced-oop)
      - [Virtual destructors (New)](#virtual-destructors)
      - [Pure virtual functions (New)](#pure-virtual-functions)
      - [RAII (Resource Acquisition Is Initialization)](#raiiresource-acquisition-is-initialization)

   <br>
   <br>


4. [Templates & Generic Programming](#4-templates--generic-programming)

   - [Basic Templates](#basic-templates)
      - [Function Templates](#function-templates)
      - [Class Templates](#class-templates)
   
   - [Advanced Templates](#advanced-templates)
      - [Template Specialization](#template-specialization)
      - [Variadic Templates](#variadic-templates)
      - [Template Metaprogramming (TMP) (New)](#template-metaprogrammingtmp)
      - [Concepts and requires clauses (C++20) (New)](#concepts--require-clauses)
   
   <br>
   <br>


5. [Standard Library (STL)](#standard-librarystl)

   - [Containers](#containers)
      - [Sequence Containers (std::vector, std::list, std::deque)](#sequence-containers)
      - [Associative Containers (std::set, std::map)](#associative-containers)
      - [Unordered Containers (std::unordered_set, std::unordered_map)](#unordered-containers)
   
   - [Iterators](#iterators)
      - [Input/Output, Forward, Bidirectional, Random Access (New)](#inputoutput-forward-bidirectional-random-access)
   
   - [Algorithms](#algorithms)
      - [Sorting, Searching, Modifying](#sorting-searching-modifying)
      - [Utilities](#utilities)

   <br>
   <br>


6. [Modern C++ Features](#modern-c-features)

   - [Function Objects](#function-objects)
      - [Functors](#functors)
      - [Lambdas](#lambdas) 
      - [std::function](#stdfunction)
      
   - [Function Composition](#function-composition)

   - [Function Patterns & Event Management](#function-patterns--event-management)
      - [Event Handling](#event-handling)
      - [Command Pattern](#command-pattern)

   - [Ranges (C++20) (New)](#ranges)
      - [std::ranges, Views, Actions (New)](#stdranges-views-actions)
      
   - [Modules (C++20) (New)](#modules)
      - [Basics of Modular Programming in C++ (New)](#basics-of-modular-programming)
      
   - [Spaceship Operator (C++20)](#spaceship-operator)

   <br>
   <br>


7. Memory Management

- Automatic vs. Dynamic Memory (New)
   - Stack vs. Heap
   - Smart Pointers (std::unique_ptr, std::shared_ptr, std::weak_ptr)
   - Manual Memory Management (New/Delete) (New)
   
- Advanced Memory Techniques
   - Custom Allocators (New)
   - Memory Pools (New)
   - Garbage Collection Concepts (Beyond C++) (New)

   <br>
   <br>


8. Advanced C++ Features

   - Move Semantics
      - Move Constructors, Move Assignment

   - Error Handling
      - Exceptions (try, catch, throw)
      - Custom Exception Classes (New)
      - std::expected (C++23 and beyond) (New)
   
   - Type Casting
      - Static, Dynamic, Reinterpret, Const Cast
      - C-Style Cast vs. Modern C++ Casts
   
   - Metaprogramming
      - SFINAE (Substitution Failure Is Not An Error) (New)
      - constexpr if, Fold Expressions (New)
   
   - PIMPL Idiom
      -  Pointer to Implementation Pattern

   <br>
   <br>


9. Concurrency & Multithreading

   - Basics
      - std::thread, std::mutex, std::lock_guard
      - std::atomic, Memory Model
   
   - Synchronization
      - Condition Variables (std::condition_variable) (New)
      - Barriers, Latches (C++20) (New)
   
   - High-Level Concurrency
      - std::async, std::future, std::promise
   
   - Async Programming
      - Coroutines (C++20)
         - Awaiting, Resumable Functions (New)
      - Generators (New)

   <br>
   <br>


10. Performance Optimization
    
   - Copy Elision
    
   - Inlining
    
   - Profile-Guided Optimization (PGO) (New)
    
   - Compiler Optimizations
      - Link Time Optimization (LTO) (New)
      - Understanding Compiler Flags (New)

   <br>
   <br>


11. Design Patterns in C++

   - Creational Patterns
      - Singleton, Factory, Builder
      
   - Structural Patterns
      - Adapter, Composite, Proxy
      
   - Behavioral Patterns
      - Observer, Command, Strategy

   <br>
   <br>


12. Standard Library Extensions & Miscellaneous

   - Filesystem (std::filesystem) (New)
   
   - Regular Expressions (std::regex) (New)
   
   - Networking Library (Boost.Asio, potential C++ extensions) (New)
   
   - Date and Time (<chrono>)

   - Unicode and Text Processing (New)
   
   - Modern C++ Best Practices
      - C++ Core Guidelines (New)
    
   - Tooling and Ecosystem
      - Linters, Static Analyzers, Testing Frameworks (New)
    
   - External Libraries
      - Boost, Eigen, Qt (New)

   <br>
   <br>


13. Additional Topics to Consider (Advanced Level)

   - Reflection (Future C++ Standards) (New)
   
   - Interfacing with C and Other Languages (New)
   
   - Cross-Platform Development Considerations (New)
   
   - Compiler and Linker Fundamentals (New)

   <br>
   <br>


### ADD C++23

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
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Overloading(Function & Operator)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Struct vs Class</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
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
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Smart Pointers</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Manual Memory</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Advanced Memory Techniques</font>
> ### <font color="#ff009e">Custom Allocators</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Memory Pools</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Garbage Collection Concepts</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
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
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Custom Exception Classes</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">std::expected</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Type Casting</font>
> ### <font color="#ff009e">Static, Dynamic, Reinterpret & Const Cast</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">C-Style Cast vs Modern C++ Casts</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>





> ### <font color="#a442f5">Metaprogramming</font>
> ### <font color="#ff009e">SFINAE(Substitution Failure Is Not An Error)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">constexpr if, Fold Expressions</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>


> ### <font color="#a442f5">PIMPL Idiom</font>
> ### <font color="#ff009e">Pointer to Implementation Idiom</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>




### <font color="#ffc900">Concurrency & Multithreading</font>
> ### <font color="#a442f5">Basics</font>
> ### <font color="#ff009e">std::thread, std::mutex, std::lock_guard</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">std::atomic, Memory Model</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Synchronization</font>
> ### <font color="#ff009e">Condition Variables</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Barriers, Latches</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">High-Level Concurrency</font>
> ### <font color="#ff009e">std::async, std::future, std::promise</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Coroutines</font>
> ### <font color="#ff009e">Awaiting, Resumable Functions</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>





### <font color="#ffc900">Performance Optimization</font>
> ### <font color="#a442f5">Move Semantics</font>
> ### <font color="#ff009e">Move Constructors, Move Assignment</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Copy Elision</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Inlining</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Profile-Guided Optimization(PGO)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Compiler Optimizations</font>
> ### <font color="#ff009e">Link Time Optimization(LTO)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>
> ### <font color="#ff009e">Understanding Compiler Flags</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>




### <font color="#ffc900">Design Patters in C++</font>
> ### <font color="#a442f5">Creational Patterns</font>
> ### <font color="#ff009e">Singleton, Factory, Builder</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>


> ### <font color="#a442f5">Structural Patterns</font>
> ### <font color="#ff009e">Adapter, Composite, Proxy</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Behavioral Patterns</font>
> ### <font color="#ff009e">Observer, Command, Strategy</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



### <font color="#ffc900">Standard Library Extensions & Miscellaneous</font>
> ### <font color="#a442f5">Filesystem(std::filesystem)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>


> ### <font color="#a442f5">Regular Expressions(std::regex)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Networking Library(Boost.Asio, potential C** extensions)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>




> ### <font color="#a442f5">Date & Time(<chrono>)</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Unicode & Text Processing</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Modern C++ Best Practices</font>
> ### <font color="#ff009e">C++ Core Guidelines</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">Tooling & Ecosystem</font>
> ### <font color="#ff009e">Linters, Static Analyzers, Testing Frameworks</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>



> ### <font color="#a442f5">External Libraries</font>
> ### <font color="#ff009e">Boost, Eigen, QT</font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // code goes here...
>```
>
> **When To Use**
> 
> - ExplanationExplanationExplanation.
>
> **When Not to Use**
>
> - ExplanationExplanationExplanation
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Explanation**: 
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
>
>
><hr>
>
>
>




### <font color="#ffc900">Additional Topics to Consider(Advanced Level)</font>
> ### <font color="#a442f5">Reflection</font>



> ### <font color="#a442f5">Interfacing with C & Other Languages</font>



> ### <font color="#a442f5">Cross-Platform Development Considerations</font>



> ### <font color="#a442f5">Compiler & Linker Fundamentals</font>


























> ### <font color="#a442f5">templates</font>
> A powerful feature that enables writing generic code, allowing functions, classes and even variables to operate with any data type. They provide a mechanism for code reuse and enable the creatin of flexible and efficient algorithms and data structures.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Function Templates
> template <typename T>
> T add(const T val1, const T val2){
>    return (val1 + val2);
> }
>
> // Class Templates
> template <typename T>
> class Container {
>    T element;
>    public:
>       Container(T elem) : element(elem){}
>       T getElement() {return element;}
> }
>
> // Template Specialization
> template <typename T>
> class Traits;
> 
> template <>
> class Traits<int>{
>    public:
>       static const char* name() {return "int";}
> }
>
> // Template Parameters
> template <typename T, int N>
> class Array{
>    T arr[N];
> }
>```
>
> **When To Use**
> 
> - **Generic Code**:
When you want to write code that can work with multiple data types.
>
> - **Containers**:
When creating data structures such as vectors, list or maps that should be able to store any type of data.
>
> - **Algorithms**:
When implementing algorithms like sorting, searching or mathematical operations that should be applicable to different data types.
>
> **When Not to Use**
>
> - **Performance Critical Code**: 
In performance-critical code where template instantiation may lead to code bloat.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Code Reusability**:
Write once and use with any data type.
>
> - **Type Safety**:
Compile-time type checking ensures type safety.
>
> - **Flexibility**:
Templates provide a flexible way to write generic code without sacrificing performance.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Code Bloat**:
Excessive use of templates can lead to code bloat, as each instantiation of template generates a new version of the code.
>
> - **Complexity**:
Template-related errors can be hard to understand and debug, especially in more complex scenarios.
>
> - **Compilation Time**:
Templates can significantly increase compilation time, especially for larger projects.






>
>
>

>
>
>






> ### <font color="#a442f5">Allocators (Custom)</font>
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









### <font color="#ffc900">SLF (Standard Library Features)</font>
> ### <font color="#a442f5">Initializer List</font>
> The primary reason for std::initializer_list is to provide a convenient way to pass a fixed list of values to functions or constructors. It allows for easy initialization of containers and other objects with a list of values.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> void printList(std::initializer_list<int> list)
> {
>    for(const auto& element : list )
>    {
>        std::cout << element << std::endl;
>    }
> }
>```
>
> **When To Use**
> 
> - **Initialization**:
> when you need to initialize objects or containers with a fixed list of values directly.
>
> - **Function Paramaters**:
> When you want to write function that accept a variable number of arguments in a concise and convenient manner.
>
> - **Constructor Overloading**:
> When designing class constructors to accept a list of values.
>
> **When Not to Use**
>
> - **Mutable Containers**:
> When you need to modify the list of values after passing it it to a function might be significant.
>
> - **Dynamic Data**:
> When the size of the collection may change dynamically during runtime.
>
> - **Large Data**:
> When dealing with large collections of data where the overhead of copying might be significant.
>
> - **Advanced Container Features**:
> When you need advances functionalities like sorting, searching or other operations provided by containers like 'std::vector'.
>
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Simplicity**: 
> Provides a simple and concise syntax for initializing objects with a list of values.
>
> - **Readability**:
> Enhances code readability by allowing direct initialization within function calls and constructors.
>
> - **Immutable**:
> Ensures that the list of values cannot be modified, which can help prevent certain types of bugs.
>
> - **Performance**:
> For small, fixed-size lists, it avoids the overhead associated with dynamic memory allocation and management.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Fixed Size**:
> The size of an 'initializer_list' is fixed and cannot be changed after initialization.
>
> - **Read-Only**:
> The elements of an 'initializer_list' cannot be modified.
>
> - **Limited Use**:
> Not suitable for scenarios requiring dynamic resizing, advanced container operations or modifications.
>
> - **Temporary Object**:
> Often involves temporary objects, which might lead to unnecessary copying or memory overhead in some cases.






> ### <font color="#a442f5">Streams</font>
> Streams in C++ provide a powerful and flexible way to perform input and output (I/O) operations. They are part of the Standard Library and offer a consistent interface for reading from and writing to various sources, such as files, standard input/output, and strings.
>
> **<font color="#428df5">Example</font>**
>
> ### std::cin
> Standard input stream. Used for reading input from the console.
>
> ### std::cout
> Standard output stream. Used for writing output to the console.
>
> ### std::ifstream
> Input file stream. Used for reading data from files.
>
> ### std::ofstream
> Output file stream. Used for writing data to files.
>
> ### std::stringstream
> String stream. Used for reading from and writing to strings.





> ### <font color="#a442f5">Date & Time</font>
> Handling dates and times in C++ is facilitated by the <chrono> library, introduced in C++11, which provides a set of types and functions for working with time points, durations, and clocks.
>
> **<font color="#428df5">Example</font>**
>
> ### std::chrono::system_clock:
> Represents the system-wide real-time clock. Can be used to get the current time and convert it to a time_t object for human-readable time.
>
>```cpp
> auto now = std::chrono::system_clock::now();
> std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
>```
>
> ### std::chrono::steady_clock:
> Represents a clock that cannot be adjusted and is steady (monotonically increasing). Useful for measuring time intervals.
>
>```cpp
> auto start = std::chrono::steady_clock::now();
> auto end = std::chrono::steady_clock::now();
> auto duration = end - start;
>```
>
> ### std::chrono::high_resolution_clock:
> Provides the smallest possible tick period, useful for high-precision timing.
>
>```cpp
> auto start = std::chrono::high_resolution_clock::now();
> auto end = std::chrono::high_resolution_clock::now();
> auto duration = end - start;
>```





### <font color="#ffc900">Function Overloading</font>
> Function overloading in C++ allows multiple functions with the same name but different parameter lists to be defined within the same scope. This enables functions to perform similar operations on different types or numbers of arguments. Function overloading is a form of polymorphism where the compiler selects the appropriate function to call based on the arguments' types, number, and order. The functions must differ in at least one of these aspects:
>
> - Number of parameters
> - Type of parameters
> - Order of parameters
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int square(int x)
> {
>     return x * x;  
> }
>
> double square(double x)
> {
>     return x * x;  
> }
>```
>
> **When To Use**
> 
> - **Same Operation, Different Types**: Use function overloading when you want to perform the same operation on different types of data.
>
> - **Default Arguments**: Overload functions with default arguments to provide flexibility in function call without repeating code.
>
> - **Cleaner Code**: Use overloading to write cleaner and more readable code by grouping related under the same name.
>
> **When Not to Use**
>
> - **Ambiguity**: Avoid overloading id it leads to ambiguous function calls where the compiler cannot determine the correct function to call based on the arguments.
>
> - **Overuse**: Overloading can make code harder to understand if used excessively or unnecessarily.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Code Reusability**
>
> - **Readability**
>
> - **Flexibility** 
> 
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**: Overloading can lead to code complexity if not used judiciously, expecially when multiple overloaded functions exist.
>
> - **Ambiguity**: May result in ambiguous function calls if the overloaded functions are not distinct enough.









### <font color="#ffc900">Stack vs Heap </font>
> In C++, memory allocation can occur in two primary areas: the stack and the heap. Understanding their differences is crucial for efficient memory management and avoiding common pitfalls in programming.
>
> ### Stack:
> 
> - **Allocation**: Stack memory is automatically allocated and deallocated as functions are enteres and exited. It operates in a Last In First Out (LIFO) manner.
>
> - **Size**: The stack size is generally limited and fixed (determined at compile-time or by system limits).
>
> - **Access Speed**: Accessing variables on the stack is faster than on the heap due to its simple allocation and deallocation mechanism.
>
> - **Lifetime**: Variables allocated on the stack exist only within the scope of the block they are defined in. They are automatically deallocated when they go out of scope.
>
> - **Usage**: Typically used for local variables, function parameters, return addresses and function call management.
>
> **<font color="#428df5">Example</font>**
>```cpp
> void functionOnStack() 
> {
>     int x = 10; // Variable 'x' is allocated on the stack.
>     // . . . 
> } // 'x' is automatically deallocated here.
>```
>
> ### Heap:
>
> - **Allocation**: Heap memory is allocated manually by the programmer using functions like 'new' or 'malloc'. Deallocation is also manual using 'delete' or 'free' respectively.
>
> - **Size**: The heap size is larger than the stack and can grow dynamically during program execution, limited only by the available system memory.
>
> - **Lifetime**: Variables allocated on the heap persist beyond the scope of the block they are defined in, until explicitly deallocated.
>
> - **Usage**: Used for objects that need dynamic allocation, objects whose size is not known at compile-time or object that need to persist beyond the scope where they were created.
>
> **<font color="#428df5">Example</font>**
>```cpp
> void functionOnHeap() 
> {
>     int* ptr = new int(5); // Allocates an integer on the heap.
>     // . . . 
>     delete ptr; // Manually deallocate memory when no longer needed.
> } 
>```
> ### Key Differences:
>
> - **Automatic vs Manual Management**: Stack memory is managed automatically by the compiler, while heap memory requires manual management by the programmer.
>
> - **Speed**: Stack access is faster due to its LIFO (Last in Firts Out) nature and simpler management. Heap access is slower due to dynamic allocation and deallocation.
>
> - **Size**: Stack size is limited and fixes, whereas heap size can grow dynamically (up to system limits).
>
> - **Scope**: Stack-allocated variables are local to block they are defines in and are automatically deallocated. Heap-allocated variables persist until explicitly deallocated.






















> ### <font color="#a442f5">Inheritance</font>
> Inheritance is a fundamental concept in object-oriented programming that allows a class(called a derived class or subclass) to inherit attributes and methods from another class(called a base class or superclass). This mechanism promotes code reuse, improves organization and facilities the creation of hierarchical relationships between classes.
>
> ### Access Specifiers
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





> ### <font color="#a442f5">Interface with Abstract & Virtual</font>





### <font color="#ffc900">STRCUT & ENUM CLASS</font>
> ### <font color="#a442f5">Struct</font>
> User-defined data type that groups together variables of different types under a single name. By default, all members of a 'struct' are public, unlike in a class where they are private. Structs are commonly used for simple data structures.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>struct Point
>{
>   int x;
>   int y;
>};
>
>int main()
>{
>   Point p1 = {10, 20};
>   
>   return 0;
>}
>```
>
> **When To Use**
> 
> - Use structs when you need to group related data together without requiring complex functionality.
>
> **When Not to Use**
>
> - Avoid structs if you need encapsulation, inheritance or polymorphism; use classes instead.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Simple Syntax** 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Lack of Encapsulation**
>

> ### <font color="#a442f5">Enum Class</font>
> Provides a way to define type-safe and scoped enumeration. Unlike traditional enums, 'enum class' values do not implicitly convert to integers and their scope is restricted to the enum class itself.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>enum class Direction { North, East, South, West };
>
>int main()
>{
>   Direction dir = Direction::North;
>   if( dir == Direction::North )
>   {
>      std::cout << "Heading North" << std::endl;
>   }
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - When you need a scoped and type-safe enumeration, especially when working in larger codebases where name collisions might occur.
>
> **When Not to Use**
>
> - If you need the underlying integer values of if you prefer implicit conversions to integers.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Scope & Type-Safety**




### <font color="#ffc900">TEMPLATES</font>
> Allows you to write generic and reusable code that can work with any data type. They enable the creation of functions, classes and other entities that can operate on different type without duplication of code. Templates are a powerful feature in C++, often used to implement data structures, algorithms and generic libraries.
>
> ### <font color="#a442f5">Function Templates</font>
> Allow you to create a function that can work with any data type. The specific type is determined when the function is called.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>template<typename T>
>T add(T a, T b)
>{
>   return a + b;
>}
>
>int main()
>{
>   int intResult = add(5, 4);
>   double doubleResult = add(4.3, 6,2);
>
>   return 0;
>}
>```

> ### <font color="#a442f5">Class Templates</font>
> Allow you to create a class that can handle any data type. The type is specified when an instance of the class is created.
>
> **<font color="#428df5">Example</font>**
>```cpp
>template<typename T>
>class Box
>{
>   private:
>      T p_value;
>
>   public:
>      Box(T value) : p_value(value) {}
>      T get_p_value() { return p_value; }
>};
>
>int main()
>{
>   Box<int> intBox(123);
>   Box<double> doubleBox(3423.56);
>
>   return 0;
>}
>```
>

> ### <font color="#a442f5">Template Specialization</font>
> Allow you to define specific implementations of a template for particular data types.
>
> **<font color="#428df5">Example</font>**
>```cpp
>template<typename T>
>class Printer
>{
>   public:
>      void print(T value)
>      {
>         std::cout << value << std::endl;
>      }
>};
>
>// Specialization for char*
>template<>
>class Printer<char*>
>{
>   public:
>      void print(char* value)
>      {
>         std::cout << value << std::endl;
>      }
>};
>
>int main()
>{
>   Printer<int> intPrinter;
>   Printer<char*> stringPrinter;
>
>   intPrinter.print(69);
>   stringPrinter.print("Hello");
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Generic Code**:
> When you need to write functions or classes that should work with any data type.
>
> - **Reusable Libraries**:
> Templates are ideal for creating reuable libraries, such as the Standard Template Library(STL), where data structures and algorithms work with any various types.
>
> - **Compile-Time Polymorphism**:
> When you need polymorphism but want to avoid the runtime overhead of virtual functions.
>
> **When Not to Use**
>
> - **Complex Logic**:
> If the logic inside the template varies greatly depending on the type, templates may add unneccassary complexity.
>
> - **Code Bloat**:
> Templates can cause code bloat because each instantiation of a template with a new type generates new codem which can increase binary size.
>
> - **Compilation Time**:
> Templates can significantly increase compilation time, especially with complex template metaprogramming.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Type Safety**
>
> - **Code Reusability**
>
> - **Flexibility** 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity** 
>
> - **Code Bloat**
>
> - **Long Compilation Time**




### <font color="#ffc900">PASSING VALUES</font>















### <font color="#ffc900">COMMAND PATTERN</font>
> Is a behavioral design pattern that turns a request into a stand-alone object that contains all the information about the request. This transformation allows you to parameterize methods with different requests, delay or queue a request's execution and support undoable operations. This pattern is particulary useful for implementing actions that can be executed, undone or queue dynamically at runtime.
>
> In the Command Pattern, you encapsulate a request as an object, thereby allowing you to pass the request as a parameter, queue the request, log it and support undoable operations. The pattern typically involves four main components.
>
> - **Command Interface**:
> An abstract interface that declares the method for executing a command.
>
> - **Concrete Commands**:
> Classes that implement the command interface and define the relationship between the receiver and an action.
>
> - **Receiver**:
> The component that performs the actual work when the command is executed.
>
> - **Invoker**:
> The component that triggers the command to be executed. It can also manage the command history to support undo operations.
>
> - **Client**:
> The component that creates and configures commands, receivers and invokers.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <vector>
>#include <memory>
>
>// Command Interface
>class Command
>{
>   public:
>      virtual ~Command() {}
>      virtual void execute() = 0;
>};
>
>// Receiver Class
>class Light
>{
>   public:
>      void on()
>      {
>         std::cout << "Light is ON" << std::endl;
>      }
>
>      void off()
>      {
>         std::cout << "Light is OFF" << std::endl;
>      }
>};
>
>// Concrete command for turning the light on
>class LightOnCommand : public Command
>{
>   private:
>      Light& m_light;
>
>   public:
>      LightOnCommand(Light& light) : m_light(light) {}
>
>      void execute() override
>      {
>         m_light.on();
>      }
>}
>
>// Concrete command for turning the light off
>class LightOffCommand : public Command
>{
>   private:
>      Light& m_light;
>
>   public:
>      LightOffCommand(Light& light) : m_light(light) {}
>
>      void execute() override
>      {
>         m_light.off();
>      }
>}
>
>// Invoker Class
>class RemoteControl
>{
>   private:
>      std::unique_ptr<Command> m_command;
>
>   public:
>      void setCommand(std::unique_ptr<Command> command)
>      {
>         m_command = std::move(command);
>      }
>
>      void pressButton()
>      {
>         if(m_command)
>         {
>            m_command -> execute();
>         }
>      }
>}
>
>// Client Code
>int main()
>{
>   Light light;
>
>   // Create command objects
>   auto lightOn = std::make_unique<LightOnCommand>(light);
>   auto lightOff = std::make_unique<LightOffCommand>(ligth);
>
>   // Create the invoker
>   RemoteControl remote;
>
>   // Turn the light on
>   remote.setCommand(std::move(lightOn));
>   remote.pressButton();
>
>   // Turn the light off
>   remote.setCommand(std::move(lightOff));
>   remote.pressButton();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Decoupling Invoker and Receiver**:
> Use it when you need to decouple the object that invokes the operation from the one that knows how to perform it.
>
> - **Queuing and Logging Requests**:
> When you need to queue, log or undo/redo operations, the 'Command Pattern' provides a structure to handle these needs.
>
> - **Parametrizing Objects with Operations**:
> It is useful when you need to parameterize objects with operations (commands).
>
> **When Not to Use**
>
> - **Simple Operations**:
> If the actions are simple and there is no need for undo functionality or complex command management, the pattern may add unnecsary complexity.
>
> - **Performance Critical Code**:
> The additional layers introduces by the 'Command Pattern' can introduce overhead, which might be undesirable in performance-critical applications.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Decoupling**
>
> - **Undo/Redo Operations**
>
> - **Command Queuing** 
> 
> **<font color="#f56942">Disadvantages</font>**
>
> - **Increased Complexity**
>
> - **Potential Overhead** 





### <font color="#ffc900">DEPENDENCY INJECTION</font>
> Dependency Injection(DI) is a design pattern used to achive Inversion of Control(IoC) between classes and their dependencies. In simplier terms, it allows you to inject dependencies (services, objects, etc.) into a class rather than the class creating them itself. This pattern is crucial for building loosely coupled, easily testable and maintainable code. There are three common ways to implement DI:
>
> - **Constructor Injection**:
> Dependencies are provided through a class constructor.
>
> - **Setter Injection**:
> Dependencies are provided through setter methods.
>
> - **Interface Injection**:
> The dependency provided an injection method that will inject the dependency into any client passed to it.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <memory>
>
>// Service Interface
>class Logger
>{
>   public:
>      virtual void log(const std::string& message) = 0;
>      virtual ~Logger() = default;
>};
>
>// Concrete Service
>class ConsoleLogger : public Logger
>{
>   public:
>      void log(const std::string& message) override
>      {
>         std::cout << "Log:" << message << std::endl;
>      }
>};
>
>// Client Class
>class Application
>{
>   private:
>      std::shared_ptr<Logger> m_logger;
>
>   public:
>      Application(std::shared_ptr<Logger> logger) : m_logger(logger) {}
>
>      void run()
>      {
>         m_logger -> log("Application is running . . .");
>      }
>}
>
>// Main function (Client code)
>int main()
>{
>   // Injection dependency (ConsoleLogger) into Application
>   std::shared_ptr<Logger> logger = std::make_shared<ConsoleLogger>();
>   Application app(logger);
>   app.run();
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Loose Coupling**:
> Use DI when you want to decouple your classes from their dependencies, making the code more modular and flexible.
>
> - **Unit Testing**:
> DI is essential for unit testing because it allows you to inject mock dependencies, making it easier to isolate and test individual components.
>
> **Extensibility**:
> When your application needs to be easily extendable with new features, DI allows you to inject new services without modifying existing classes.
>
> **When Not to Use**
>
> - **Simple Application**
>
> - **Performance Critical Code**
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Decoupling**:
> DI promotes loose coupling between components, making your codebase more modular and easier to maintain.
>
> - **Testability**:
> DI enables easier unit testing by allowing dependencies to be mocked or stubbed.
>
> - **Flexibility**:
> You can easily swap out different implementations of a dependency without modifying the dependent class.
>
> - **Maintainability**:
> DI makes is easier to manage changes in dependencies, as you do not need to modify the dependent classes. 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Increased Complexity**:
> Implementing DI, especially using DI frameworks, can add complexity to the codebase.
>
> - **Learning Curve**
>
> - **Overhead** 





### <font color="#ffc900">CASTS</font>
> C++ provides several casting operators to convert between different types of pointers, references or objects. Each type of cast serves a specific purporse and has different impilcations for safety, performance and use cases. 
>
> ### <font color="#a442f5">static_cast</font>
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





> ### <font color="#a442f5">dynamic_cast</font>
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





> ### <font color="#a442f5">const_cast</font>
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






> ### <font color="#a442f5">reinterpret_cast</font>
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





> ### <font color="#a442f5">C-Style Cast(Type Casting)</font>
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





### <font color="#ffc900">ERROR & EXCEPTION HANDLING</font>

> Is a crucial for writing robust and reliable code. The language provides several mechanism to handle errors, ranging from simple return codes to more complex exception handling via the 'try', 'catch' and 'throw' keywords.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <stdexcept>
>
>void divide(int a, int b)
>{
>   if (b == 0)
>   {
>      throw std::invalid_argument("Division by zero");
>   }
>   std::cout << "Result: " << a / b << std::endl;
>}
>
>int main()
>{
>   try
>   {
>      divide(10, 0);
>   } catch(const std::invalid_argument& error)
>   {
>      std::cerr << "Caught exception: " << error.what() << std::endl;
>   }
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Error Handling**:
> Use exceptions to handle error conditions that your code cannot resolve on its own, especially when those errors are exceptional and not expected to occur under normal circumstances.
>
> - **Resource Management**:
> Exceptions can be useful in resource management situations where an error may require the relase of resource (file, memory, etc.).
>
> **When Not to Use**
>
> - **Performance-Critical Code**:
> Avoid using exceptions in performance-critical code where the overhead of throwing and catching exceptions may be too costly.
>
> - **Simple Error Conditions**:
> For simple error conditions, such as returning an error code or using optional types (e.g.: 'std::optional'), exceptions may be overkill.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Separation of Concerns**:
> Exception handling separates error-handling code from regular code, leading to cleaner and more readable code.
>
> - **Comprehensive Handling**:
> Exceptions can be propagated up the call stack, allowing for centralized error handling.
>
> - **Automatic Cleanup**:
> When an exception is thrown, C++ automatically unwinds the stack, calling destructors for objects, which helps manage resource like memory and file handles. 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Performance Overhead**:
> Throwing and catching exceptions can introduce performance ovearhead, making it less suitable for performance-sensitive code.
>
> - **Resource Management**:
> If not managed properly, exceptions can lead to resource leaks, expecially in cases where dynamic memory or file handles are involces and not properly relased. 






### <font color="#ffc900">MEMORY MANAGEMENT</font>

> Memory managemenet is critical aspect of C++ programming. C++ gives programmers direct control over memory allocation and deallocation, which offers flexibility but also come with responsibilities. To manage memory safely and efficiently, C++ provides mechanisms like RAII (Resource Acquisition Is Itinialization) and allows for custom memory management strategies.
>
> ### <font color="#a442f5">RAII</font>
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






> ### <font color="#a442f5">Custom Memory Management</font>
> Custom memory management refers to the practise of overriding the default memory allocation and deallocation mechanism in C++. This can be done for performance reasons, to handle specific alignment requirements, or to track memory usage.
>
> Custom memory management often involves overriding 'operator new' and 'operator delete' or implementing custom allocators that control how and where memory is allocated.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>#include <iostream>
>#include <cstdlib>
>
>class CustomAllocator
>{
>   public:
>      static void* operator new(std::size_t size)
>      {
>         std::cout << "Custom new for size: " << size << std::endl;
>         void* ptr = std::malloc(size);
>         if(!ptr) throw std::bad_alloc();
>         
>         return ptr;
>      }
>
>      static void operator delete(void* ptr) noexcept
>      {
>         std::cout << "Custom delete" << std::endl;
>         std::free(ptr);
>      }
>};
>
>int main()
>{
>   CustomAllocator* obj = new CustomAllocator();
>   delete obj;
>   
>   return 0;
>}
>```
>
> **When To Use**
> 
> - Use custom memory management when the default allocator does not meet the performance or alignment needs of your application.
>
> - Use custom memory management for applications requiring precise control over memory usage, such as real-time systems or embedded systems.
>
> **When Not to Use**
>
> - Do not use custom memory management if it adds unnecessary complexity without significant performance benefits.
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Performance**
>
> - **Control**
>
> - **Tracking** 
> 
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Complexity**
>
> - **Portability**
>
> - **Debugging Difficulty** 






### <font color="#ffc900">MULTITHREADING</font>
> Multithreading in C++ allows programs to perform multiple tasks simultaneously, leveraging modern multi-core processors to improve performance and responsiveness. C++ provides several standard library components to manage threads and synchronize access to shared resources, such as std::thread, std::mutex, and std::atomic.
> ### <font color="#a442f5">std::thread</font>
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





> ### <font color="#a442f5">std::mutex</font>
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






> ### <font color="#a442f5">std::atomic</font>
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






### <font color="#ffc900">CONCURRENCY</font>

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


