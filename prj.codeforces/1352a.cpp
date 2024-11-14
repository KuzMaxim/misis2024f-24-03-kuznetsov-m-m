#include <string>
#include <iostream>
#include <cmath>
int main() {
	int n, num;
	std::cin >> num;
	for (int i = 0; i < num; i++) {
		int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
		std::cin >> n;
		if (n < 10) {
			n1 = n;
		}
		else if (n < 100) {
			if ((n % 10) == 0) {
				n2 = n;
			}
			else {
				n2 = n / 10 * 10;
				n1 = n % 10;
			}
		}
		else if (n < 1000) {
			n3 = (n / 100 * 100);
			if (n % 100 / 10 != 0) {
				n2 = (n % 100 / 10 * 10);
			}
			if ((n % 10) != 0) {
				n1 = (n % 10);
			}
		}
		else if (n < 10000) {
			n4 = (n / 1000 * 1000);
			if (n % 1000 / 100 != 0) {
				n3 = (n % 1000 / 100 * 100);
			}
			if (n % 100 / 10 != 0) {
				n2 = (n % 100 / 10 * 10);
			}
			if ((n % 10) != 0) {
				n1 = (n % 10);
			}
		}


		int dig = 0;
		if (n1 != 0) {
			dig += 1;
		}
		if (n2 != 0) {
			dig += 1;
		}
		if (n3 != 0) {
			dig += 1;
		}
		if (n4 != 0) {
			dig += 1;
		}
		if (n == 10000) {
			dig = 1;
		}
		std::cout << dig <<'\n';


		int alr = 0;
		if (n4 != 0) {
			std::cout << n4;
			alr += 1;
		}
		if (n3 != 0) {
			if (alr != 0) {
				std::cout << ' ';
			}
			std::cout << n3;
			alr += 1;
		}
		if (n2 != 0) {
			if (alr != 0) {
				std::cout << ' ';
			}
			std::cout << n2;
			alr += 1;
		}
		if (n1 != 0) {
			if (alr != 0) {
				std::cout << ' ';
			}
			std::cout << n1;
		}
		if (n == 10000) {
			std::cout << 10000;
		}
		std::cout << '\n';

	}
}
