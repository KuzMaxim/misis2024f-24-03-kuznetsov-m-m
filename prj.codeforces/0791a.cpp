#include<iostream>

int main() {
	int a = 0, b = 0, ans = 0;
	std::cin >> a >> b;
	while (a <= b) {
		a *= 3;
		b *= 2;
		ans += 1;
	}
	std::cout << ans;
	return 0;
}
