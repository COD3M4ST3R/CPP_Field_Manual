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
- Streams
- Date and Time

### SPACESHIP COMPARISION

### FUNCTION OVERLOADING

### LAMBDA EXPRESSIONS

### STACK VS HEAP

### FUNDAMENTALS OF OBJECT-ORIENTED PROGRAMMING IN C++
- Constructors & Destructors
- Polymorphism
- Encapsulation
- Inheritance
- Interface with Abstract & Virtual

### STRUCT, ENUM CLASS

### TEMPLATES

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

### CONCEPTS
- PIMPL (Pointer to IMPLementation)

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
>
> **std::string**: Dynamic, owning string class that provides many functions for manipulating strings. It owns the memory for the characters in the string and can grow or shrink as needed.
>
> **std::string_view**: Non-owning view of sequence of characters. It provides lightweight way to reference a string or part of a string without copying it. It does not manage the lifetime of the string data it refers to.





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





> ### <font color="#a442f5">Utilities</font>
> 
> The Standard Template Library (STL) includes a variety of utility components that assist with common programming tasks, enhancing the functionality and convenience of C++ development. These utilities provide basic services like pair management, tuple handling, and type traits. They help with tasks such as element swapping, moving objects, and type manipulations, making the STL more powerful and flexible.
>
> ### std::pair
> A simple container to store two heterogeneous objects as a single unit. It is often used to return two values from a function or to store key-value pairs.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::pair<int, std::string> p = {1, "example"};
> 
>```
>
> ### std::tuple
> Similar to std::pair, but can hold any number of elements of different types. Useful for returning multiple values from functions and for making heterogeneous collections.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::tuple<int, std::string, double> t = {1, "example", 3.14};
>```
>
> ### std::move
> Enables efficient transfer of resources from one object to another, using move semantics to avoid deep copying. Essential for performance optimization, especially in resource-intensive applications.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::string source = "hello";
> std::string target = std::move(source); // source is now empty.
>```
>
> ### std::swap
> Exchanges the values of two objects. This utility function is essential for many algorithms, such as sorting.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int a = 1, b = 2;
> std::swap(a, b);
>```
>
> ### std::forward
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
> ### std::tie
> Unpacks tuples into individual variables. Often used in conjunction with functions that return std::tuple.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int a, b;
> std::tie(a, b) = std::make_tuple(1, 2);
>```
>
> ### Type Traits
> Compile-time utilities for querying and manipulating types. They are useful in template metaprogramming.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> template <typename T>
> void checkType()
> {
>     if (std::is_integral<T>::value)
>     {
>        std::cout << "T is an integral type." << std::endl;
>     }
> }
>```
>
> ### std::reference_wrapper
> Wraps a reference in an object that can be copied, useful for storing references in containers.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> int x = 10;
> std::vector<std::reference_wrapper<int>> v = {x};
> v[0] = 20; // x is now 20.
>```
>
> ### std::any
> A type-safe container for single values of any type. It can hold values of anyx type and provides type erasure.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::any a = 42;
> a = std::string("hello");
>```
>
> ### std::optional
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
> ### std::variant
> A type-safe union that can hold a value of one of several types, providing a way to work with union-like structures safely.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
> std::variant<int, std::string> v = "hello";
> v = 42;
>```





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



### <font color="#ffc900">Space Ship Comparision</font>
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






### <font color="#ffc900">Lambda Expressions</font>
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





### <font color="#ffc900">Fundamentals of Object Oriented Programming in C++</font>
> ### <font color="#a442f5">Constructors & Destructors</font>
> In C++, constructors and destructors are special member functions of a class that are responsible for initializing and cleaning up objects, respectively. They play a fundamental role in managing the lifecycle of objects and ensuring proper resource management. Constructors are invoked automatically when an object of the class is created. They initialize the object's data members and set up the object for use.
>
> ### Constructors
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
> ### Destructors
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






> ### <font color="#a442f5">Polymorphism</font>
> Fundamental concept in object-oriented programming that allow objects of different classes to be treated as objects of a common superclass. It enables a single interface to be used for entities of different types, providing flexibility and extensibility in software desing.
>
> ### Compile-Time Polymorphism (Static Binding):
> Achieved through function overloading and templates.The compiler determines which function to call based on the function signature at compile-time.
>
> ### Run-Time Polymorphism (Dynamic Binding):
> Achieved through inheritance and virtual functions. The decision on which function to call is made at run-time, based on the type of object pointed to by the base class pointer or reference. In C++, virtual functions enable run-time polymorphism. They are declared in the base class using the 'virtual' keyword and overridden in derived classes to provide specific implementations.
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Shape
>{
>   // Virtual Function
>   virtual void draw() const
>   {
>      std::cout << "Drawing a shape . . ." << std::endl;
>   }
>};
>
>class Circle : public Shape
>{
>   public:
>      // Override the virtual function
>      void draw() const override
>      {
>         std::cout << "Drawing a Circle . . ." << std::endl;
>      }
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






> ### <font color="#a442f5">Encapsulation</font>
> Encapsulation is one of the four fundamental concepts in object-oriented programming (OOP), alongside polymorphism, inheritance, and abstraction. It refers to the bundling of data (attributes) and methods (functions) that operate on the data into a single unit, or class. Encapsulation also involves restricting direct access to some of an object's components, which is a means of preventing unintended interference and misuse of the data.
>
> ### Data Hiding
> Encapsulation allows the internal representation of an object to be hidden from the outside. Only the object's own methods can directly manipulate its fields.
>
> ### Access Modifiers
> **Public**:
> Members declared public can be accessed from outside the class.
>
> **Private**:
> Members declared private can only be accessed from within the class.
>
> **Protected**:
> Members declared protected can be accessed within the class and by derived classes.
>
> ### Getters & Setters
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
> An abstract class is a class that cannot be instantiated on its own and is designed to be subclassed. Abstract classes are used to define interfaces or base classes that provide common functionality to derived classes while enforcing a specific design contract.
>
> ### Abstract Classes
> These are classes that contain at least one pure virtual function. A pure virtual function is a virtual function that is declared by assigning 0 in its declaration.
>
> ### Pure Virtual Functions
> These functions do not have a body in the base class and must be overridden in any derived class. They enforce that certain functions must be implemented in any concrete(non-abstract) subclass.
>
> **<font color="#428df5">Syntax</font>**
>```cpp
>class AbstractBase
>{
>   public:
>      virtual void pureVirtualFunction() = 0;
>};
>
>class Derived : public AbstractBase
>{
>   public:
>      void pureVirtualFunction() override
>      {
>         // Implementation of the pure virtual function.
>      }
>};
>```
>
> **<font color="#428df5">Example</font>**
>
>```cpp
>class Shape
>{
>   public:
>      // Pure virtual function providing interface framework
>      virtual void draw() = 0; // Pure virtual function.
>      virtual ~Shape() {} // Virtual destructor.
>};
>
>class Circle : public Shape
>{
>   public:
>      void draw() override
>      {
>         std::cout << "Drawing Circle . . ." << std::endl;
>      }
>};
>
>class Rectangle : public Shape
>{
>   public:
>      void draw() override
>      {
>         std::cout << "Drawing Rectangle . . ." << std::endl;
>      }
>};
>
>int main()
>{
>   Shape* shape1 = new Circle();
>   Shape* shape2 = new Rectangle();
>
>   shape1 -> draw(); // Drawing Circle . . .
>   shape2 -> draw(); // Drawing Rectangle . . .
>
>   delete shape1;
>   delete shape2;
>
>   return 0;
>}
>```
>
> **When To Use**
> 
> - **Interface Definition**:
> Use abstract classes to define a common interface for a group of related classes, ensuring that they provide specific functionality.
>
> - **Code Reuse**:
> Abstract classes can contain common code that can be reused by multiple derived classes, reducing redundancy.
>
> **When Not to Use**
>
> - **Instantiation**:
> Do not use it if you need to create instances of the class directly. Abstract classes cannot be instantiated.
>
>
> **<font color="#b3f542">Advantages</font>**
>
> - **Design Flexibility**: 
> Enforces a design contract, ensuring derived classes implement specific methods.
>
> - **Code Organization**:
> Encourages organized and modular code, making it easier to manage and extend.
>
> - **Reusability**:
> Common functionality can be implemented in the abstract class and shared across derived classes.
>
> **<font color="#f56942">Disadvantages</font>**
>
> - **Overhead**: 
> Virtual functions calls have slight overhead compared to non-virtual calls.





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





> ### <font color="#a442f5">Passing by Reference</font>
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





> ### <font color="#a442f5">Raw Pointer</font>
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







> ### <font color="#a442f5">Smart Pointers</font>
> Smart pointers are a feature in C++ that manage the lifetime of dynamically allocated objects, helping to prevent memory leaks and dangling pointers by automatically deallocating memory when it is no longer needed. The Standard Library provides several types of smart pointers, each designed for different use cases.
>
> ### std::unique_ptr
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
> ### std::shared_ptr
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
> ### std::weak_ptr
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






> ### <font color="#a442f5">Reference Wrappers</font>
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




### <font color="#ffc900">STD::FUNCTION</font>
> ### <font color="#a442f5">Callbacks</font>
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

