// SYSTEM INCLUDES
#include <iostream>
#include <cassert>
#include <cmath>
#include <string_view>
#include <memory>
#include <compare>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <ctime>
#include <iomanip>
#include <stdexcept>

// INTERNAL INCLUDES
#include "static/MyLibrary.hpp"
#include "dynamic/Sort.hpp"
#include "headerOnly/MyLibrary3.hpp"

// EXTERNAL INCLUDES
// #include <opencv2/core.hpp>
// #include <boost/algorithm/algorithm.hpp>


/* TRIVIAL VARIABLES

    > int
        A signed integer type typically representing 32 bits on most systems.

    > short int 
        A signed integer type with a smaller range than 'int'. Typically 16 bits.

    > long int
        A signed integer type typically representing at least 32 bits.

    > long long int 
        A signed integer type with an even larger range, at least 64 bits.
    
    > unsigned ... 
        Unsigned versions of the corresponding signed integer types.
    

    > float 
        A single-precision floating point type typically representing 32 bits.
    
    > double 
        A double-precision floating point type typically representing 64 bits.
    
    > long double 
        A larger floating point type, typically with greater precision than 'double'.


    > int8_t 
        Signed integer type with fixed sizeof 8 bits.
    
    > int16_t 
        Signed integer type with fixed sizeof 16 bits.
    
    > int32_t 
        Signed integer type with fixed sizeof 32 bits.
    
    > int64_t 
        Signed integer type with fixed sizeof 64 bits.


    > uint8_t 
        Unsigned integer type with fixed sizeof 8 bits.
    
    > uint16_t 
        Unsigned integer type with fixed sizeof 16 bits.
    
    > uint32_t 
        Unsigned integer type with fixed sizeof 32 bits.
    
    > uint64_t 
        Unsigned integer type with fixed sizeof 64 bits.


    > bool 
        true or false.
    
    > char
        A character type representing a single byte.
    
    > wchar_t
        A wide character type typically used for Unicode characters.

    > void 
        Represents the absence of type, commonly used as the return type of functions
        with no return value or as a placeholder for generic pointers.
*/

/* KEYWORDS

    > inline
        Suggest to compiler that the code of a function should be expanded in place
        where it is called, rather than being invoked through the usual function call mechanism.
        This can potentially reduce the overhead of function call and improve performance for
        small, frequently called functions. However, it is merely a request, and the compiler
        is free to ignore it. Use it when the function is simple, and frequently called. 
      
        // When to Use: If the function is short and simple.
        // When Not to Use: If the function is long/complex or virtual.


    > static
        Has several distinct usages and meanings.
        -> Static Variables Inside Functions
            A static variable inside a function retains its
            value between function calls.

            // Example ----------
            void counter()
            {
                static int count = 0;
                count++;
                std::cout << count << std::endl;
            }
            ---------------------

            // Advantages
                - State Preservation:
                    Retains state between function calls.
                - Initialization:
                    Initialized only once, even if the function is called multiple times.

            // Disadvantages
                - Global State:
                    Can lead to unintended dependencies and harder to track bugs due to shared 
                    state.
                - Thread Safety:
                    Not thread safe by default, which can lead to issues in multithreaded
                    environments.
                
            // When to Use
                - When you need to maintain state across multiple calls to a function, such
                  as in counters or caching mechanism.

            // When Not to Use
                - In multithreaded environments without proper synchronization mechanism.
                - When the function needs to be re-entrant or should not retain state between
                  calls.










        -> Static Variables in Classes
            A static member variable in a class is shared by all instances of class.

            // Example ----------
            class MyClass
            {
                public:
                    static int sharedValue;
            };
            
            int MyClass::sharedValue = 0;
            ---------------------

            // Advantages
                - Shared Data:
                    Useful for sharing data across all instances of class.
                - Memory Efficient:
                    Only one copy of the variable exist, regardless of the number of instances.
                
            // Disadvantages
                - Global State:
                    Can lead to unintended dependencies and harder to tract bugs.
                - Encapsulation:
                    May break encapsulation if used improperly.

            // When to Use
                - For constants or data that should be shared across all instances, such as
                  configuration settings or counters.

            // When Not to Use
                - When each instance should have its own copy of the data.
                - When you need to maintain strong encapsulation.









        -> Static Member Functions
            A static member function in a class can be called without an instance of the class.

            // Example ----------
            class MyClass
            {
                public:
                    static void printHello()
                    {
                        std::cout << "Hello, world! << std::endl;"
                    }
            };

            MyClass::printHello();
            ---------------------

            // Advantages
                - Utility Functions:
                    Useful for utility functions that do not depend on instance-specific data.
            
            // Disadvantages
                - Limited Access:
                    Cannot access non-static members of the class directly.

            // When to Use
                - When the function needs to interact with instance-specific data.
                - For factory methods or helper functions

            // When Not to Use
                - When the function needs to interact with instance-specific data.
                - When you want to enforce object-oriented principles strictly.










        -> Static Variables at Global/Namespace Scope
            A static variable at global or namespace scope has internal linkage, meaning it is
            limited to the file in which it is declared.

// Advantages
- Encapsulation:
Limits the visibility of the variable to the file, reducing potential
for name conflicts.
- Controlled Scope:
Useful for defining file specific global variables.

// Disadvantages
- Limited Scope:
Cannot be accessed from other translation units.

// When to Use
- For global variables that should not be accessible from other files.
- For file-specific constants or utility variables.

// When Not to Use
- When the variable needs to be shared across multiple files.
- When you need broader access to the variable.








        -> Static Local Classes
            A static local class is a class defined inside a function and has a static 
            variable scope.

            // Example ----------

            ---------------------

*/



int main(int argc, char* argv[])
{
    std::cout << ". . ." << std::endl;

    return 0;
}


