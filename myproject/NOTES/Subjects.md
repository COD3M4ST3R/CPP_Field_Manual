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
>```cpp
> class Example
> {
>    // code goes here...
> }
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

### KEYWORDS
- Trivial variables(string_view, float, double, fixed, short int etc.)
- inline
- static
- constexpr
- typename
- using
- templates
- auto

### STL(STANDARD TEMPLATE LIBRARY)
- Containers
   - Sequence Containers
   - Associative Containers
   - Unordered Containers
- Iterators
- Algorithms
- Function Objects (Functors)
- Allocators (Custom)
- Utilities

### SLF(STANDARD LIBRARY FEATURES)
- Initializer List
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
> ### Static Variable in Classes
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
> ### Static Member Functions
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





> ### <font color="#a442f5">constexpr</font>
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





> ### <font color="#a442f5">typename</font>
> Used in template programming to specify that a dependent name(a name dependent on a template parameter) is a type. It resolves ambiguity, allowing the compiler to correctly interpret the name as a type rather than something else, like a member or a variable.
>
> In templates, the compiler may not know if a dependent name refers to a type or non-type member. The 'typename' keyword clarifies this by explicitly stating that the name is a type. Without 'typename', the compiler might misinterpret the name, resulting in errors.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> template <typename T>
> class Example{
>    typename T::value_type val;
>    public:
>       Example(typename T::value_type v) : val(v){}
> };
>
> struct Container{
>    using value_type = int;
> }
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





> ### <font color="#a442f5">using</font>
> Serves multiple purposes. It can be used to create type aliases, bring names from a namespace into the current scope and more. Introduced in C++11, 'using' often offers a clearer and more powerful alternative to 'typedef'.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Type Aliases
> using ulong = unsigned long;
> usint IntPtr = int*;
> using FunctionPointer = void (*)(int, double);
>
> // Template Aliases
> template <typename T>
> using Vec = std::vector<T>;
> Vec<int> myVec;
>
> // Namespace Aliases
> namespace MyNamespace{
>    class MyClass {};
> }
> using MN = MyNamespace;
> MN::MyClass obj;
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





> ### <font color="#a442f5">auto</font>
> Is a type inference feature introduces in C++11. It allows the compiler to automatically deduce the type of a variable based on its initializer, reducing the need for explicit type declaratations. This feature enhances code readability and maintainability by reducing verbosity and enabling more concise code.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> // Type Inference
> auto val = 42;    
>    
> // Conciseness
> auto it = myVector.begin()
>
> // Template Programming
> template<typename T, typename U>
> auto add(T val1, U val2){
>    return (val1 + val2);
> }
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



### <font color="#ffc900">STL (Standard Template Library)</font>
> ### <font color="#a442f5">Containers</font>
>
>C++ containers are fundamental components of the Standard Template Library (STL) that provide a way to store and manage collections of objects. They are divided into three main categories: sequence containers, associative containers, and unordered containers. Each type of container has different characteristics and is suited for different tasks.
>
> ### Sequence Containers
> Sequence containers maintain elements in a linear sequence and provide various ways to access and manipulate this sequence.
>
> ### std::vector
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
> ### std::deque
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
> ### std::list
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
> ### std::list
>
> A std::list is a doubly-linked list that allows efficient insertion and deletion of elements anywhere in the sequence. Unlike std::vector and std::deque, it does not provide random access.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::list<int> lst = {1, 2, 3, 4, 5};
>```
>
> <hr>
>
> ### Associative Containers
> Associative containers store elements in a sorted order, allowing for efficient retrieval using keys. They automatically handle the organization and sorting of elements:
>
> ### std::set
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
> ### std::map
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
> ### Unordered Containers
> Unordered containers store elements in an unordered manner, typically using hash tables. They provide fast average time complexity for retrieval, insertion and deletion.
>
> ### std::unordered_set
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
> ### std::unordered_map
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



>
>
>
> ### <font color="#a442f5">Algorithms</font>
>
> The Standard Template Library (STL) in C++ includes a comprehensive set of algorithms that work on containers via iterators. These algorithms provide a wide range of functionalities, from searching and sorting to modifying and inspecting elements. Here’s an overview of some key STL algorithms.
>
> ### Non-Modifying Algorithms
>
> These algorithms do not alter the contents of the container.
>
> ### std::for_each 
> Applies a function to each element in a range. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::for_each(vec.begin(), vec.end(), [](int &n) {n += 2;})
>```
>
> ### std::find 
> Searches for the first occurence of a value in a range. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> auto it = std::find(vec.begin(), vec.end(), 3)
>```
>
> ### std::find_if
> Searches for the first element satisfying a predicate. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> auto it = std::find_if(vec.begin(), vec.end(), [](int n){return n % 2 == 0;});
>```
>
> ### std::count 
> Counts the number of elements equal to a value. 
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int count = std::count(vec.begin(), vec.end(), 3);
>```
>
> ### std::count_if
> Counts elements satisfying a predicate.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int count = std::count_if(vec.begin(), vec.end(), [](int n){return n % 2 == 0;});
>```
>
> ### std::accumulate
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
> ### std::copy
> Copies elements from one range to another.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> vec2(vec.size());
> std::copy(vec.begin(), vec.end(), vec2.begin());
>```
>
> ### std::transform
> Applies a function to a range of elements and stores the result in another range.
>
> **<font color="#428df5">Example</font>**
>
> ```cpp
> std::transform(vec.begin(), vec.end(), vec2.begin(), [](int n) {return n *  2;});
>```
>
> ### std::replace
> Replaces all occurences of a value in a range with another value.
>
> **<font color="#428df5">Example</font>**
>
> ```cpp
> std::replace(vec.begin(), vec.end(), 3, 7);
> ```
>
> ### std::remove
> Removes all occurences of a value in a range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());
>```
>
> ### std::fill
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
> ### std::sort
> Sorts elements in a range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::sort(vec.begin(), vec.end());
>```
>
> ### std::partial_sort
> Sorts the first N elements of a range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::partial_sort(vec.begin(), vec.begin() + 3, vec.end());
>```
>
> ### std::stable_sort
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
> ### std::binary_search
> Checks if a value exists in a sorted range.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> bool found = std::binary_search(vec.begin(), vec.end(), 3);
>```
>
> ### std::lower_bound
> Finds the first position where a value could be inserted without violating order.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> auto it = std::lower_bound(vec.begin(), vec.end(), 3);
>```
>
> ### std::upper_bound
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
> ### std::union
> Computes the union of two sets.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> result;
> std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
>```
>
> ### std::set_intersection
> Computes the intersection of two sets.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> result;
> std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
>```
>
> ### std::set_difference
> Computes the difference between two sets.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::vector<int> result;
> std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
>```

>
>
>
> ### <font color="#a442f5">Functors (Function Objects)</font>
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
> Functors can maintain state across multiple class, which can be useful when performing operations that require contegxt or history.
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
