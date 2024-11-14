#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int num, num2 = 0;
	std::cin >> num;
	std::vector<int> list1(num), list2;
	for (int q = 0; q < num; q++) {
		std::cin >> list1.at(q);
	}
	for (int i = 0; i < num; i++){
		int prob = 0;
		for (int j = i + 1; j < num; j++) {
			if (list1.at(j) == list1.at(i)) {
				prob += 1;
			}
		}
		if (prob == 0) {
			num2 += 1;
			list2.push_back(list1.at(i));
		}
	}
	std::cout << num2 <<'\n';
	for (int el : list2) {
		std::cout << el << ' ';
	}
}
