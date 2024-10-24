#include <iostream>
#include <cmath>
#include <sstream>
#include "complex.hpp"


int main() {
	double log1, log2;
	double fe = 2.0;
	Complex c1{ -4.0, 2.0 };
	Complex c2{ 1.0, -3.0 };
	Complex c6{ 0, 0 };
	c1 /= fe;
	c1.get_data(log1, log2);
	std::cout << log1 << " " << log2 << '\n';
	c6 = c1 - c2;
	double res61, res62;
	c6.get_data(res61, res62);
	std::cout << res61 << " " << res62 << '\n';
	c1 += c2;
	double res1 = 0, res2 = 0;
	c1.get_data(res1, res2);
	std::cout << res1 << " " << res2 << '\n';
	Complex c3{ -2.0, 2.0 };
	Complex c4{ -5.0, 5.0 };
	Complex c5 = c3 + c4;
	double res3, res4;
	c5.get_data(res3, res4);
	std::cout << res3 << " " << res4 << '\n';
	return 0;
}