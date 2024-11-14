#include <iostream>
int main() {
	int val;
	std::cin >> val;
	if (0 == val % 2 and val > 2) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
