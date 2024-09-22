#include <iostream>
#include <vector>
int main() {
	int num = 0, ans = 0;
	std::cin >> num;
	std::vector<char> list(num);
	for (int i = 0; i < num; i++) {
		std::cin >> list[i];
	}
	for (int j = 0; j + 2 < num; j++) {
		if (list[j] == 'x' && list[j + 1] == 'x' && list[j + 2] == 'x') {
			ans += 1;
		}
	}
	std::cout << ans;
	return 0;
}
