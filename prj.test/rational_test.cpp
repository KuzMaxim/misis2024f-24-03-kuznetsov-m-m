#include <rational\rational.hpp>

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdint.h>


void TestCon() {
	int32_t val1 = 0, val2 = 0;
	Real real1{};
	real1.get_data(val1, val2);
	std::cout << "Constructor with no input; correct answer = 0, 1; answer = " << val1 << ", " << val2 << '\n';
	Real real2{ 2 };
	real2.get_data(val1, val2);
	std::cout << "Constructor with one valuable input 2 (chislitel); correct answer = 2, 1; answer = " << val1 << ", " << val2 << '\n';
	Real real3{ 3, -15 };
	real3.get_data(val1, val2);
	std::cout << "Constructor with two valuables input 3, -15; correct answer = -1, 5; answer = " << val1 << ", " << val2 << '\n';
}
void TestSum() {
	int32_t val1 = 0, val2 = 0;
	Real real1{ -3, 12 };
	Real real2{ 10, 1 };
	Real real3{};
	real3 = real1 + real2;
	real3.get_data(val1, val2);
	std::cout << "operation + for Real(-3, 12) and Real(10.5, 0); correct answer = 7.5, 12; answer = " << val1 << ", " << val2 << '\n';
	real1 += real2;
	real1.get_data(val1, val2);
	std::cout << "operation += for Real(-3, 12) and Real(10.5, 0); correct answer = -13.5, 12; answer = " << val1 << ", " << val2 << '\n';
	real3 = real2 + (-100);
	real3.get_data(val1, val2);
	std::cout << "operation + for Real(10.5, 0) and int32_t(-100); correct answer = -89.5, 0; answer = " << val1 << ", " << val2 << '\n';
	real1 += 100;
	real1.get_data(val1, val2);
	std::cout << "operation += for Real(7.5, 12) and int32_t(100.7); correct answer = 108.2, 12; answer = " << val1 << ", " << val2 << '\n';
}
void TestSub() {
	int32_t val1 = 0, val2 = 0;
	Real real1{ 7, -12 };
	Real real2{ 13, 5 };
	Real real3{};
	real3 = real1 - real2;
	real3.get_data(val1, val2);
	std::cout << "operation - for Real(7.6, -12) and Real(13.7, 5.8); correct answer = -6.1, -17.8; answer = " << val1 << ", " << val2 << '\n';
	real1 -= real2;
	real1.get_data(val1, val2);
	std::cout << "operation -= for Real(7.6, -12) and Real(13.7, 5.8); correct answer = -6.1, -17.8; answer = " << val1 << ", " << val2 << '\n';
	real3 = real2 - (-100);
	real3.get_data(val1, val2);
	std::cout << "operation - for Real(13.7, 5.8) and int32_t(-100); correct answer = 113.7, 5.8; answer = " << val1 << ", " << val2 << '\n';
	real1 = Real{ 7, -12 };
	real1 -= 100;
	real1.get_data(val1, val2);
	std::cout << "operation -= for Real(7.6, -12) and int32_t(100.7); correct answer = -93.2, 12; answer = " << val1 << ", " << val2 << '\n';
}
void TestMul() {
	int32_t val1 = 0, val2 = 0;
	Real real1{ 2, 3 };
	Real real2{ 5, 4 };
	Real real3{};
	real3 = real1 * real2;
	real3.get_data(val1, val2);
	std::cout << "operation * for Real(2, 3) and Real(5, 4); correct answer = -2, 23; answer = " << val1 << ", " << val2 << '\n';
	real1 = { 1, 3 };
	real2 = { 4, -2 };
	real1 *= real2;
	real1.get_data(val1, val2);
	std::cout << "operation *= for Real(1,3) and Real(4, -2); correct answer = 10, 10; answer = " << val1 << ", " << val2 << '\n';
	real3 = real2 * (-2);
	real3.get_data(val1, val2);
	std::cout << "operation * for Real(4, -2) and int32_t(-2); correct answer = -8, 4; answer = " << val1 << ", " << val2 << '\n';
	real1 = Real{ 9, -13 };
	real1 *= 10;
	real1.get_data(val1, val2);
	std::cout << "operation *= for Real(9, -13) and int32_t(10); correct answer = 90, -130; answer = " << val1 << ", " << val2 << '\n';
}
void TestDiv() {
	int32_t val1 = 0, val2 = 0;
	Real real1{ 2, 1 };
	Real real2{ 2, -1 };
	Real real3{};
	real3 = real1 / real2;
	real3.get_data(val1, val2);
	std::cout << "operation / for Real(2, 1) and Real(2, -1); correct answer = 0.6, 0.8; answer = " << val1 << ", " << val2 << '\n';
	real1 = { 2, 3 };
	real2 = { 3, 4 };
	real1 /= real2;
	real1.get_data(val1, val2);
	std::cout << "operation /= for Real(1,3) and Real(4, -2); correct answer = 0.72, 0.04; answer = " << val1 << ", " << val2 << '\n';
	real3 = real2 / (-1);
	real3.get_data(val1, val2);
	std::cout << "operation / for Real(4, -2) and int32_t(-0.2); correct answer = -15, -20; answer = " << val1 << ", " << val2 << '\n';
	real1 = Real{ 9, -13 };
	real1 /= 1;
	real1.get_data(val1, val2);
	std::cout << "operation /= for Real(9, -13) and int32_t(0.5); correct answer = 18, -26; answer = " << val1 << ", " << val2 << '\n';
}
int main() {
	TestCon();
	std::cout << '\n';
	TestSum();
	std::cout << '\n';
	TestSub();
	std::cout << '\n';
	TestMul();
	std::cout << '\n';
	TestDiv();
	std::cout << '\n';
	return 0;
}
