#include <iostream>
#include <vector>
int main() {
	int t = 0, a = 0, b = 0, fin_ans = 1, s = 0;
	std::cin >> t;
	for (int it = 0; it < t; it++) {
		fin_ans = 1;
		std::cin >> a >> b;
		s = a + b;
		std::vector<char> v(s, '0');
		for (int i = 0; i < s; i++) {
			std::cin >> v.at(i);
			if (v.at(i) == '1') {
				b -= 1;
			}
			else if (v.at(i) == '0') {
				a -= 1;
			}
		}
		for (int i = 0; i < s; i++) {
			if (v.at(i) == '0'){
				if (v.at(s - i - 1) == '?' && (a > 0)) {
					v.at(s - i - 1) = '0';
					a -= 1;
				}
				else if (v.at(s - i - 1) == '1') {
					fin_ans = 0;
				}
			}
			else if (v.at(i) == '1') {
				if (v.at(s - i - 1) == '?' && (b > 0)) {
					v.at(s - i - 1) = '1';
					b -= 1;
				}
				else if (v.at(s - i - 1) == '0') {
					fin_ans = 0;
				}
			}
			else if (v.at(i) == '?') {
				if ((s - i - 1) == (i) && a > 0) {
					v.at(i) = '0';
					a -= 1;
				}
				else if ((s - i - 1) == (i) && b > 0) {
					v.at(i) = '1';
					b -= 1;
				}
				else if (v.at(s - i - 1) == '0' && (a > 0)) {
					v.at(i) = '0';
					a -= 1;
				}
				else if (v.at(s - i - 1) == '1' && (b > 0)) {
					v.at(i) = '1';
					b -= 1;
				}
				else if (v.at(s - i - 1) == '?' && (a > 1)) {
					v.at(i) = '0';
					v.at(s - i - 1) = '0';
					a -= 2;
				}
				else if (v.at(s - i - 1) == '?' && (b > 1)) {
					v.at(i) = '1';
					v.at(s - i - 1) = '1';
					b -= 2;
				}
				else {
					fin_ans = 0;
				}
			}
		}
		if (a != 0 || b != 0) {
			fin_ans = 0;
		}
		if (fin_ans == 0) {
			std::cout << "-1" << '\n';
		}
		else {
			for (int j = 0; j < s; j++) {
				std::cout << v.at(j);
			}
			std::cout << '\n';
		}
	}
	return 0;
}
