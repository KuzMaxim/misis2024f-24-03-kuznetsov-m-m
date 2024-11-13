#include <iostream>
int main() {
	int l = 0;
	std::cin >> l;
	int n = l / 5;
	if (0 != l % 5){
		n += 1;
	}
	std::cout << n;
}
