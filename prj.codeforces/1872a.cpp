#include <iostream>
#include <cmath>
int main() {
	int num, a = 0, b = 0, c = 0;
	std::cin >> num;
	for (int i = 0; i < num; i++) {
		std::cin >> a >> b >> c;
		int nado = (a + b + 1) / 2;
		if (a < b) {
			std::cout << (nado - a + c - 1) / c << '\n';
		}
		else {
			std::cout << (nado - b + c - 1) / c << '\n';
		}
	}
}
