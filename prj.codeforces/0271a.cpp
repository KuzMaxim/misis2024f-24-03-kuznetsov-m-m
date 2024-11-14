#include <iostream>
int main() {
	int l;
	int ans = 0;
	std::cin >> l;
	for (int i = l + 1; i < 10000; i+=1) {
		int dig1 = i / 1000;
		int dig2 = (i / 100) % 10;
		int dig3 = (i % 100) / 10;
		int dig4 = i % 10;
		if (dig1 != dig2 and dig1 != dig3 and dig1 != dig4 and dig2 != dig3 and dig2 != dig4 and dig3 != dig4){
			if (ans == 0){
				ans = i; 
			}
		}
	}
	std::cout << ans;
}
