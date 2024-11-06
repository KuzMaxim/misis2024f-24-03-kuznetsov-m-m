#include <complex/complex.hpp>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <iostream>
#include <cmath>
#include <sstream>

}
void TestCon(){
	double val1 = 1, val2 = 1;
	Complex com1{};
	com1.get_data(val1, val2);
	std::cout << "Constructor with no input; correct answer = 0, 0; answer = " << val1 << ", " << val2 << '\n';
	Complex com2{ 3.0 };
	com2.get_data(val1, val2);
	std::cout << "Constructor with one valuable input 2.0 (real part); correct answer = 2, 0; answer = " << val1 << ", " << val2 << '\n';
	Complex com3{ 3.0, -15.2 };
	com3.get_data(val1, val2);
	std::cout << "Constructor with two valuables input 3.0, -15; correct answer = 3, -15; answer = " << val1 << ", " << val2 << '\n';
}
void TestSum() {
	double val1 = 0, val2 = 0;
	Complex com1{ -3, 12 };
	Complex com2{ 10.5, 0 };
	Complex com3{};
	com3 = com1 + com2;
	com3.get_data(val1, val2);
	std::cout << "operation + for complex(-3, 12) and complex(10.5, 0); correct answer = 7.5, 12; answer = " << val1 << ", " << val2 << '\n';
	com1 += com2;
	com1.get_data(val1, val2);
	std::cout << "operation += for complex(-3, 12) and complex(10.5, 0); correct answer = -13.5, 12; answer = " << val1 << ", " << val2 << '\n';
	com3 = com2 + (-100);
	com3.get_data(val1, val2);
	std::cout << "operation + for complex(10.5, 0) and double(-100); correct answer = -89.5, 0; answer = " << val1 << ", " << val2 << '\n';
	com1 += 100.7;
	com1.get_data(val1, val2);
	std::cout << "operation += for complex(7.5, 12) and double(100.7); correct answer = 108.2, 12; answer = " << val1 << ", " << val2 << '\n';
}
void TestSub() {
	double val1 = 0, val2 = 0;
	Complex com1{7.6, -12 };
	Complex com2{ 13.7, 5.8 };
	Complex com3{};
	com3 = com1 - com2;
	com3.get_data(val1, val2);
	std::cout << "operation - for complex(7.6, -12) and complex(13.7, 5.8); correct answer = -6.1, -17.8; answer = " << val1 << ", " << val2 << '\n';
	com1 -= com2;
	com1.get_data(val1, val2);
	std::cout << "operation -= for complex(7.6, -12) and complex(13.7, 5.8); correct answer = -6.1, -17.8; answer = " << val1 << ", " << val2 << '\n';
	com3 = com2 - (-100);
	com3.get_data(val1, val2);
	std::cout << "operation - for complex(13.7, 5.8) and double(-100); correct answer = 113.7, 5.8; answer = " << val1 << ", " << val2 << '\n';
	com1 = Complex{7.6, -12};
	com1 -= 100.7;
	com1.get_data(val1, val2);
	std::cout << "operation -= for complex(7.6, -12) and double(100.7); correct answer = -93.2, 12; answer = " << val1 << ", " << val2 <<'\n';
}
void TestMul() {
	double val1 = 0, val2 = 0;
	Complex com1{ 2, 3 };
	Complex com2{ 5, 4 };
	Complex com3{};
	com3 = com1 * com2;
	com3.get_data(val1, val2);
	std::cout << "operation * for complex(2, 3) and complex(5, 4); correct answer = -2, 23; answer = " << val1 << ", " << val2 << '\n';
	com1 = {1, 3};
	com2 = {4, -2};
	com1 *= com2;
	com1.get_data(val1, val2);
	std::cout << "operation *= for complex(1,3) and complex(4, -2); correct answer = 10, 10; answer = " << val1 << ", " << val2 << '\n';
	com3 = com2 * (-2);
	com3.get_data(val1, val2);
	std::cout << "operation * for complex(4, -2) and double(-2); correct answer = -8, 4; answer = " << val1 << ", " << val2 << '\n';
	com1 = Complex{ 9, -13 };
	com1 *= 10;
	com1.get_data(val1, val2);
	std::cout << "operation *= for complex(9, -13) and double(10); correct answer = 90, -130; answer = " << val1 << ", " << val2 <<  '\n';
}
void TestDiv() {
	double val1 = 0, val2 = 0;
	Complex com1{ 2, 1 };
	Complex com2{ 2, -1 };
	Complex com3{};
	com3 = com1 / com2;
	com3.get_data(val1, val2);
	std::cout << "operation / for complex(2, 1) and complex(2, -1); correct answer = 0.6, 0.8; answer = " << val1 << ", " << val2 << '\n';
	com1 = { 2, 3 };
	com2 = { 3, 4 };
	com1 /= com2;
	com1.get_data(val1, val2);
	std::cout << "operation /= for complex(1,3) and complex(4, -2); correct answer = 0.72, 0.04; answer = " << val1 << ", " << val2 << '\n';
	com3 = com2 / (-0.2);
	com3.get_data(val1, val2);
	std::cout << "operation / for complex(4, -2) and double(-0.2); correct answer = -15, -20; answer = " << val1 << ", " << val2 << '\n';
	com1 = Complex{ 9, -13 };
	com1 /= 0.5;
	com1.get_data(val1, val2);
	std::cout << "operation /= for complex(9, -13) and double(0.5); correct answer = 18, -26; answer = " << val1 << ", " << val2 << '\n';
}
int main() {
	::TestCon();
	std::cout << '\n';
	::TestSum();
	std::cout << '\n';
	::TestSub();
	std::cout << '\n';
	::TestMul();
	std::cout << '\n';
	::TestDiv();
	std::cout << '\n';
	return 0;
}
