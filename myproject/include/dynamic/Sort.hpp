/*
    LIBRARY -> DYNAMIC
        Name: 
			MyLibrary2.hpp
		Description:
			- 
		Author:
			COD3M4ST3R
		Date:
			27.09.2023

    LOG
        27.09.2023:
            COD3M4ST3R -> File has been initialized	
*/

/*
    This library is a type of 'dynamic libraries' also known as 
    'shared libraries'. Dynamic libraries are separate files with extensions
    like '.so' on Unix-like systems or '.dll' on Windows systems. When you link
    againts a dynamic library, your exectutable references the library at
    runtime. The library file must be present on the system where your program 
    runs.

    Advantages:
        - Smaller executable -> Your executable is smaller because it only
        contains references to the externel library.
        - Easy updates -> You can update the library without recompiling your
        application.
        - Share resources -> Multiple applications can share the same library,
        reducing the memory usage.
    
    Disadvantages:
        - Dependency -> Your application relies on the presence of the specific
        library version at runtime.
        - Compability -> Potential compatibility issues if the library changes
        its API in an incompatible way.
*/



#pragma once

namespace Sort
{
    class Algorithms
    {   
        public:
            void Quick();
    };
}
