#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iosfwd>


struct Complex {

	double re;
	double im;

	Complex();
	Complex(double real);
	Complex(double real, double imag);
	~Complex() = default;
	void get_data(double& re, double& im);
	bool operator == (const Complex& val1);
	const Complex& add(const Complex val1, const Complex val2);
	const Complex& add(const Complex& val1, const double val2);
	const Complex& subtract(const Complex val1, const Complex val2);
	const Complex& subtract(const Complex val1, const double val2);
	const Complex& multiply(const Complex val1, const Complex val2);
	const Complex& multiply(const Complex val1, const double val2);
	const Complex& division(const Complex val1, const Complex val2);
	const Complex& division(const Complex val1, const double val2);
	//------------------------------------------------------add-----------------------------------------------------
	const Complex& operator + (Complex val2);
	const Complex& operator += (Complex val2);
	//-------------------------------------------------subtract---------------------------------------------------
	const Complex& operator -= (Complex val2);
	const Complex& operator - (Complex val2);
	const Complex& operator - (double val2);
	const Complex& operator -= (double val2);
	//----------------------------------------multiply----------------------------------------------
	const Complex& operator *= (Complex val2);
	const Complex& operator *= (double val2);
	const Complex& operator * (Complex val2);
	const Complex& operator * (double val2);
	//-----------------------------------------division-----------------------------------------------
	const Complex& operator / (Complex val2);
	const Complex& operator / (double val2);
	const Complex& operator /= (Complex val2);
	const Complex& operator /= (double val2);
};

#endif
