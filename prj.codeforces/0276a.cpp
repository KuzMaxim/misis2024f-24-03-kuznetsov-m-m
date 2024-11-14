#include <iostream>
#include <string>
#include <string>
int main() {
	int n = 0, k = 0, f = 0, t = 0, fin = 0, changes = 0;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		std::cin >> f >> t;
		int pot_fin = 0;
		if (t > k) {
			pot_fin = f - (t - k);
		}
		else {
			pot_fin = f;
		}
		if ((pot_fin > fin) || (changes == 0)){
			fin = pot_fin;
			changes += 1;
		}
	}
	std::cout << fin;
}
