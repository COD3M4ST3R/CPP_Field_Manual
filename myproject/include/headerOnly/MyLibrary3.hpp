/*
    LIBRARY -> ONLY HEADER
        Name: 
			MyLibrary3.hpp
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
	This library is type of a 'header only library'. Header-only libraries
	consist entirely of header files as '.h' or '.hpp' and do not separate
	implementation files. You are suppose to include the header files
	directly in your source code. The library's code is typically
	inlined in your programme during compilation.

	Advantages:
		- Simplicity -> No need to link against external libraries; everything
		is in your source code.
		- Easy integration -> Header-only libraries are easy to integrate into
		your projects.
		- No binary compatibility issues -> Since the library's code is a part
		of your application, there are no binary compatibility concerns. 
	
	Disadvantages:
		- Somebody touched my spaghetti? -> Including large header-only
		libraries can increase compile times and produce larger binaries.
		- Limited Separation -> It's harder to maintain a separation
		between interface and implementation.
*/


#pragma once

#include <iostream>

namespace MyLibrary3
{
	class MyClass
	{
		public:
			void MyFunction()
			{
				std::cout << "Hello From the Header Only Library!" << std::endl;		
			}
	};	
}
