#ifndef _SETTINGS_H_
#define _SETTINGS_H_

#include "console.h"

class Settings
{
public:
	static Settings *buildFromArguments(int argc, wchar_t *argv[]);
	
	enum OutputType
	{
		FILE,
		CONSOLE
	};
	
	OutputType getOutputType() const;

	std::wstring getInputFile() const;
	std::wstring getOutputFile() const;
private:
	Settings(std::wstring &inputFile, std::wstring &outputFile);

	std::wstring inputFile;
	std::wstring outputFile;
};

#endif