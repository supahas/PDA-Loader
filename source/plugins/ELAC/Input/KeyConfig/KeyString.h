#pragma once
#include <string>

namespace ELAC::Input::KeyConfig
{
	struct KeyString
	{
		std::string value;

		KeyString(const char* str);
		bool operator==(const KeyString& rsv) const;
	};
}

