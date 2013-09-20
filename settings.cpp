#include "settings.h"

Settings *Settings::buildFromArguments(int argc, wchar_t *argv[])
{
	// TODO: сделать парсер аргументов

	return new Settings(std::wstring(L"input.sql"), std::wstring(L"output.sql"));
}

Settings::OutputType Settings::getOutputType() const
{
	return outputFile.empty() ? OutputType::CONSOLE : OutputType::FILE;
}

std::wstring Settings::getInputFile() const
{
	return inputFile;
}

std::wstring Settings::getOutputFile() const
{
	return outputFile;
}