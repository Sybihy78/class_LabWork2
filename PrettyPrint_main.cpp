#include <iostream>
#include"PrettyPrint.h"


int main() {

	std::string string1 = "abacabao";
	std::string string2 = "obocobo";

	PrettyPrint pp;
	std::cout << "string.string: " << pp.concat(string1, string2) << std::endl;
	std::cout << "convert 'a' to 'o': " << pp.change_a_to_o(string1) << std::endl;
	std::cout << "rewrite from end to start: " << pp.rewrite(string1) << std::endl;

	system("pause");
	return 0;
}