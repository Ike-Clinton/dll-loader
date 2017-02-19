// dll-loader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Windows.h"


int main()
{
	// Load the library, windows automatically calls DLLmain
	HMODULE dll = LoadLibrary(_T("challenge.dll"));
    return 0;
}

