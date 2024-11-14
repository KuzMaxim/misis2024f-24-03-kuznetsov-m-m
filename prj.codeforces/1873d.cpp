#include <iostream>
#include <vector>
int main() {
	int t = 0;
	std::cin >> t;
	for (int iter = 0; iter < t; ++iter) {
		int n = 0, k = 0, fin_ans = 0;
		std::cin >> n >> k;
		std::vector<char>s(n);
		for (int i = 0; i < n; ++i) {
			std::cin >> s[i];
		}
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'B') {
				fin_ans += 1;
				for (int j = 0; j < k; ++j) {
					if ((i + j) < n) {
						s[i + j] = 'W';
					}
				}
			}
		}
		std::cout << fin_ans << '\n';
	}
	return 0;
}
