// LibraryTwo.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LibraryTwo.h"


LIBRARYTWO_API int LibraryTwo::getNumberTwo()
{
	return LibraryOne::getNumberOne() + 2;
}
