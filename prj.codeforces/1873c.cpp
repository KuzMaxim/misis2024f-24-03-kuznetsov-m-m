#include <iostream>
#include <vector>
int main() {
	int t = 0;
	std::cin >> t;
	for (int iter = 0; iter < t; ++iter) {
		std::vector<std::vector<char>>v (10, std::vector<char>(10));
		int fin_ans = 0;
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 10; ++j) {
				std::cin >> v[i][j];
				if (v[i][j] == 'X') {
					int new_i = 0, new_j = 0, key_arg = 0;
					if (i <= 5) {
						new_i = i;
					}
					else {
						new_i = (10 - i - 1) % 5;
					}
					if (j <= 5) {
						new_j = j;
					}
					else {
						new_j = (10 - j - 1) % 5;
					}
					key_arg = new_i;
					if (new_i > new_j) {
						key_arg = new_j;
					}
					if (key_arg == 0) {
						fin_ans += 1;
					}
					else if (key_arg == 1) {
						fin_ans += 2;
					}
					else if (key_arg == 2) {
						fin_ans += 3;
					}
					else if (key_arg == 3) {
						fin_ans += 4;
					}
					else {
						fin_ans += 5;
					}
				}
			}
		}
		std::cout << fin_ans << '\n';
	}
	return 0;
}
