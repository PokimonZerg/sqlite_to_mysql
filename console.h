#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include <iostream>
#include "version.h"

class Console
{
public:
	static void printVersion();
	static void printHelp();

private:
	static const std::wstring title;
	static const std::wstring help;
};

#endif