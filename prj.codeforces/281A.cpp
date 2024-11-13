#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;
	str.at(0) = std::toupper(str.at(0));
	std::cout << str;
	return 0;
}
