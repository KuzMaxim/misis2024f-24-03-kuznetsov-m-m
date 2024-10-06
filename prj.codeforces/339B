#include <iostream>
#include <vector>
int main() {
	int n = 0, m = 0, prev = 0, cur = 0;
	long long fin_ans = 0;
	std::vector<int>v(m);
	std::cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		std::cin >> cur;
		cur -= 1;
		if (cur > prev) {
			fin_ans += (cur - prev);
			prev = cur;
		}
		else if (cur < prev) {
			fin_ans += (cur + n - prev);
			prev = cur;
		}
	}
	std::cout << fin_ans;
	return 0;
}
