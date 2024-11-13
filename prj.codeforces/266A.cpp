#include <iostream>
#include <string>

int main() {
	int n = 0, ans = 0;
	std::cin >> n;
	std::string str;
	std::cin >> str;
	for (int i = 1; i < str.size(); ++i) {
		if (str.at(i) == str.at(i - 1)) {
			ans += 1;
		}
	}
	std::cout << ans;
}
