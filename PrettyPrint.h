#pragma once
#include <string>

class PrettyPrint
{
public:
	PrettyPrint();
	virtual ~PrettyPrint();

	std::string concat(std::string user_str1, std::string user_str2);
	std::string change_a_to_o(std::string user_str);
	std::string rewrite(std::string user_str);
};

