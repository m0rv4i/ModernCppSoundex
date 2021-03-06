#ifndef charutil_h
#define charutil_h

#include <string>

namespace soundex
{
	inline std::string upperFront(const std::string& string)
	{
		if(string.empty())
		{
			return "";
		}
		return std::string(1, std::toupper(static_cast<unsigned char>(string.front())));
	}

	inline char lower(const char letter)
	{
		return std::tolower(static_cast<unsigned char>(letter));
	}

	inline bool isVowel(const char letter)
	{
		return std::string("aeiouy").find(lower(letter)) != std::string::npos;
	}
}
#endif