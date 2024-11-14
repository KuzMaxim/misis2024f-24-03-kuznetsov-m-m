#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int t = 0, n = 0, k = 0, val_true = 1, max_num = 0;
	std::vector<char> cur_word(0), next_word(0), spec(0);
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		val_true = 1000;
		max_num = 0;
		std::cin >> n;
		std::vector<char> cur_word(n);
		std::vector<char> next_word(0);
		for (int el = 0; el < n; el++) {
			std::cin >> cur_word.at(el);
		}
		std::cin >> k;
		std::vector<char> spec(k);
		for (int el = 0; el < k; el++) {
			std::cin >> spec.at(el);
		}
		while (val_true != 0){
			/*for (int z = 0; z < next_word.size(); z++) {
				std::cout << next_word.at(z);
			}
			std::cout << '\n';*/
			if (val_true != 1000) {
				cur_word = next_word;
			}
			val_true = 0;
			next_word = {};
			n = cur_word.size();
			for (int j = 0; j < n - 1; j++) {
				int schet = 0;
				for (int z = 0; z < k; z++) {
					if (cur_word.at(j + 1) != spec.at(z)) {
						//std::cout << cur_word.at(j + 1) << "       " << spec.at(z) << '\n';
						schet += 1;
					}
				}
				if (schet != k) {
					//std::cout << schet << "     " << k << '\n';
					val_true += 1;
				}
				else {
					next_word.push_back(cur_word.at(j));
				}
			}
			next_word.push_back(cur_word.at(cur_word.size() - 1));
			max_num += 1;
		}
		std::cout << max_num - 1 /* << "---ANSWER---"*/ << '\n';
	}
	return 0;
}
