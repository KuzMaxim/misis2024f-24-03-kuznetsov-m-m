#include <iostream>
#include <vector>
int main() {
	int num = 0, ans = 0;
	std::cin >> num;
	std::vector<std::vector<int>> matrix(num, std::vector<int>(3));
	for (size_t i = 0; i < num; i++) {
		int sum = 0;
		for (size_t j = 0; j < 3; j++) {
			std::cin >> matrix[i][j];
			if (matrix[i][j] == 1){
				sum += 1;
			}
		}
		if (sum >= 2) {
			ans += 1;
		}
	}
	std::cout << ans;
}
