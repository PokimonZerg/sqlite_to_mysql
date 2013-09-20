#ifndef _VERSION_H_
#define _VERSION_H_

#include <string>

class Version
{
public:
	static std::wstring major()
	{
		return L"1";
	}

	static std::wstring minor()
	{
		return L"00";
	}

	static std::wstring full()
	{
		return major() + L"." + minor();
	}
};

#endif