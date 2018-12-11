#include "PrettyPrint.h"


PrettyPrint::PrettyPrint()
{
}

PrettyPrint::~PrettyPrint()
{
}

std::string PrettyPrint::concat(std::string user_str1, std::string user_str2) {
	std::string new_str;
	new_str = user_str1.append(".").append(user_str2);
	return new_str;
}

std::string PrettyPrint::change_a_to_o(std::string user_str) {
	std::string new_str;
	for (int i = 0; i < user_str.size(); ++i) {
		if (user_str[i] != 'a') {
			new_str += user_str[i];
		}
		else {
			new_str += 'o';
		}
	}
	return new_str;
}

std::string PrettyPrint::rewrite(std::string user_str) {
	std::string new_str;
	for (int i = user_str.size() - 1; i >= 0; --i) {
		new_str += user_str[i];
	}
	return new_str;
}