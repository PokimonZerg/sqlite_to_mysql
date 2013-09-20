#include "console.h"

const std::wstring Console::title(L"SQLite to MySQL converter");
const std::wstring Console::help(L"");

void Console::printVersion()
{
	std::wcout << Console::title << L" version: " << Version::full() << std::endl;
}

void Console::printHelp()
{
}