#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>

#define VERSION 1.0

using namespace std;

map<wstring, wstring> parseArguments(int argc, wchar_t *argv[]);
vector<wstring> convert(vector<wstring>);
wstring title();
wstring help();
void error(wstring message);
void warning();

int wmain(int argc, wchar_t *argv[])
{
	map<wstring, wstring> arg = parseArguments(argc, argv);

	wifstream file(argv[1]);
	
	if(!file.is_open())
	{
		wcout << L"Error while reading file: '" << argv[1] << L"'" << endl;
	}

	return 0;
}

map<wstring, wstring> parseArguments(int argc, wchar_t *argv[])
{
	switch(argc)
	{
	case 2:
		if(wcscmp(argv[1], L"-help") == 0)
		{
			wcout << title() << help();
			exit(0);
		}
	case 3:

	default:
		error(L"Wrong arguments number. Use -help for more information");
	}

	return map<wstring, wstring>();
}

vector<wstring> convert(vector<wstring>)
{
	return vector<wstring>();
}

wstring title()
{
	return L"SQLite to MySQL converter version " + to_wstring(VERSION) + L"\n";
}

wstring help()
{
	return L"Command format: sqlite_to_mysql <input_file> [output_file]\n"
		   L"input file (required) - path to .sql file with sqlite databse dump\n";
		   L"output file (optional) - path to output .sql file\n";
}

void error(wstring message)
{
	// print error message
	wcout << message << endl;
	// TODO: временно
	_wsystem(L"pause");
	// close program
	exit(0);
}

void warning()
{
}