#include<iostream>
#include <vector>


int main() {
	int n = 0, k = 0, ans = 0, stand = 0;
	std::cin >> n >> k;
	std::vector<int> v(n, 0);
	for (int i = 0; i < n; ++i) {
		std::cin >> v.at(i);
		if (i == k - 1) {
			stand = v.at(i);
		}
	}
	for (int i : v) {
		if (i > 0 && i >= stand) {
			ans += 1;
		}
	}
	std::cout << ans;
	return 0;
}
//17 14
//16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
