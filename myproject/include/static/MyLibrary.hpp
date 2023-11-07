/*
    LIBRARY -> STATIC
        Name: 
			MyLibrary.hpp
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
	This library is type of a 'static library'. Static libraries are typically
	archive files with extensions like '.a' on Unix-like systems or '.lib' on
	windows systems. When you link againts a static library, a copy of the
	library's code is included directly in your final executable. This means
	your executable contains all the necessary code, making it self-contained.

	Advantages:
		- Simplicity -> No external dependencies are needed when distributing	
		your programme.
		- Deterministic -> You have control over the library version used,
		ensuring consistent behavior.
		- Performance -> Slightly faster startup times as there's no need to
		locate and load externel libraries by checking their references.
	
	Disadvantages:
		- Larger executable -> Your executable file size increases because it
		includes a copy of the entiner library code.
		- Updates: If the library is updated, you need to recompile and 
		redistribute your programme.
*/


#pragma once

#include <iostream>

namespace MyLibrary
{
    class MyClass
    {   
        public:
            void MyFunction();
    };
}

