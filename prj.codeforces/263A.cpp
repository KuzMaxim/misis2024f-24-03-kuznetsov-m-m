#include <string>
#include <iostream>
#include <cmath>
int main() {
	int n = 0, m = 0;
	int i1, i2, i3, i4, i5;
	for (int i = 1; i < 6; i++) {
		std::cin >> i1 >> i2 >> i3 >> i4 >> i5;
		if (i1 == 1) {
			m = 1;
			n = i;
		}
		if (i2 == 1) {
			m = 2;
			n = i;
		}
		if (i3 == 1) {
			m = 3;
			n = i;
		}
		if (i4 == 1) {
			m = 4;
			n = i;
		}
		if (i5 == 1) {
			m = 5;
			n = i;
		}
	}
	std::cout << (std::abs(n - 3) + std::abs(m - 3));
}
