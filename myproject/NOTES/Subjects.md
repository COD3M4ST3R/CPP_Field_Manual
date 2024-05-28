<font color="#ffc900">GOLD</font>
<font color="#ff0000">RED</font>
<font color="#2aff00">GREEN</font>
<font color="#b3f542">LIGHT GREEN</font>
<font color="#f56942">LIGHT RED</font>
<font color="#a442f5">PURPLE</font>
<font color="#428df5">BLUE</font>









> ### <font color="#a442f5">. . . </font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>     class Example
>     {
>        // code goes here...
>     }
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
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation










# CPP

### KEYWORDS
- Trivial variables(string_view, float, double, fixed, short int etc.)
- inline
- static
- constexpr
- typename
- typedef
- auto
- initializer list

### STL(STANDARD TEMPLATE LIBRARY)
- Components

### SLF(STANDARD LIBRARY FEATURES)
- Smart Pointers
- Streams
- Strings
- Date and Time

### SLA(STANDARD ALGORITHM FEATURES)
- Sorting
- Searching
- Numeric Algorithms
- Permutations

### SPACESHIP COMPARISION

### FUNCTION OVERLOADING

### LAMBDA EXPRESSIONS

### STACK AND HEAP CLASSES
- Constructors
- Deconstructurs
- Polymorphism
- Encapsulation
- Inheritance
- Abstract
- Virtual
- Override
- Interface

### STRUCT, ENUM CLASS, TEMPLATES

### PASSING VALUE
- By Value 
- By Reference
- By Raw Pointers
- By Smart Pointers
    

### REFERENCE WRAPPERS

### STD::FUNCTION
- Callbacks
- Function Composition
- Command Pattern
- Dependency Injection
- Generic Algorithms

### CASTING
- Static Cast
- Dynamic Cast
- Const Cast
- Reinterpret Cast

### ERROR / EXCEPTION HANDLING

### MEMORY MANAGEMENT
- RAII
- Custom Memory Management

### MULTITHREADING
- std::thread
- std::mutex
- std::atomic

### CONCURRENCY
- std::async
- std::future
- std::promise

### DESIGN PATTERNS
- Creational Patterns
- Structural Patterns
- Behavioral Patterns

### PERFORMANCE OPTIMIZING
- Move Semantics
- Copy Elision
- Inlining

<hr>



### <font color="#ffc900">KEYWORDS</font>
> ### <font color="#a442f5">Trivial Variables</font>
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



> ### <font color="#a442f5">inline</font>
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



> ### <font color="#a442f5">static</font>
> Has several distinct usages and meanings.
>
> ### Static Variable Inside Functions
>
> A static variable inside a function retains its value between function calls.
>
> **<font color="#428df5">Example</font>**
>
>     void counter()
>     {
>        static int count = 0;
>        count++;
>        std::cout << count << std::endl;
>     }
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
> ### Static Variable in Classes
>
> A static member variable in a class is shared by all instances of class.
>
> **<font color="#428df5">Example</font>**
>
>     class MyClass()
>     {
>        public:
>           static int sharedValue;
>     }:
>     int MyClass::sharedValue;
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
> ### Static Member Functions
>
> A static member function in a class can be called without an instance of the class.
>
> **<font color="#428df5">Example</font>**
>
>     class MyClass
>     {
>        public:
>           static void printHello()
>           {
>              std::cout << "Hello, world! << std::endl;"
>           }
>     };
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
> ### Static Variables at Global / Namespace Scope
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
> ### Static Local Classes
>
> A static local class is a class defined inside a function and has a static variable scope.
>
> **<font color="#428df5">Example</font>**
>
>     void function() 
>     {
>         static class LocalClass 
>         {
>             // Class definition
>         } instance;
>     }
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



> ### <font color="#a442f5">constexpr</font>
> Indicate that the value of a variable or the return value of a function can be evaluated at compile-time. This can lead to performance improvements by enabling constant expressions to be computed at compile time, reducing runtime overhead.
>
> **<font color="#428df5">Example</font>**
>
>     // Variables
>     constexpr short int size = 10;
>     
>     // Functions
>     constexpr int square(int x)
>     {
>        return (x * x);
>     }
>
>     // Constructors
>     struct Point 
>     {
>        int x, y;
>        constexpr Point(int x, int y) : x(x), y(y) {}
>     };
>     constexpr Point p(1, 2);
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



> ### <font color="#a442f5">. . . </font>
> ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#428df5">Example</font>**
>
>     class Example
>     {
>        // code goes here...
>     }
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
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExp anationExplanationExplanationExplanationExplanationExplanation
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Explanation**: ExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanationExplanation
