#include <iostream>
#include <cmath>
#include <sstream>
#include "complex.hpp"


Complex::Complex() : re(0.0), im(0.0)
{}
Complex::Complex(double real) : re(real), im(0.0)
{}
Complex::Complex(double real, double imag) : re(real), im(imag)
{}

void Complex::get_data(double& re, double& im)
{
	re = this->re;
	im = this->im;
}

bool Complex::operator == (const Complex& val1) {
	if (this->re == val1.re && this->im == val1.im) {
		return 1;
	}
	else {
		return 0;
	}
}
const Complex& Complex::add(const Complex val1, const Complex val2) {
	Complex result{ 0, 0 };
	result.re = val1.re + val2.re;
	result.im = val1.im + val2.im;
	return result;
}
const Complex& Complex::add(const Complex& val1, const double val2) {
	Complex result{ 0, 0 };
	result.re = val1.re + val2;
	result.im = val1.im;
	return result;
}
const Complex& Complex::subtract(const Complex val1, const Complex val2) {
	Complex result{ 0, 0 };
	result.re = val1.re - val2.re;
	result.im = val1.im - val2.im;
	return result;
}
const Complex& Complex::subtract(const Complex val1, const double val2) {
	Complex result{ 0, 0 };
	result.re = val1.re - val2;
	result.im = val1.im;
	return re;
}
const Complex& Complex::multiply(const Complex val1, const Complex val2) {
	double neg = 0.0;
	Complex result{ 0, 0 };
	if (val1.im != 0 && val2.im != 0) {
		neg = -1 * (val1.im * val2.im);
	}
	result.re = val1.re * val2.re + neg;
	result.im = val1.im * val2.re + val1.re * val2.im;
	return result;
}
const Complex& Complex::multiply(const Complex val1, const double val2) {
	Complex result{ 0, 0 };
	result.re = val1.re * val2;
	result.im = val1.im * val2;
	return result;
}
const Complex& Complex::division(const Complex val1, const Complex val2) {
	Complex prom, sopr, result{ 0,0 };// promezhutochniy result, sopriazhennoe
	double new_re = 0, new_im = 0;
	if (val2.re == 0 && val2.im == 0) {
		throw "Division by zero!";
	}
	sopr.re = val2.re;
	sopr.im = -1 * val2.im;
	prom.re = val1.re;
	prom.im = val1.im;
	prom = prom.multiply(prom, sopr);
	result.re = prom.re / (std::pow(val2.re, 2) + std::pow(val2.im, 2));
	result.im = prom.im / (std::pow(val2.re, 2) + std::pow(val2.im, 2));
	return result;
}
const Complex& Complex::division(const Complex val1, const double val2) {
	Complex prom, sopr, result{ 0,0 };// promezhutochniy result, sopriazhennoe
	if (val2 == 0) {
		throw "Division by zero!";
	}
	result.re = val1.re / val2;
	result.im = val1.im / val2;
	return result;
}
//------------------------------------------------------add-----------------------------------------------------
const Complex& Complex::operator + (Complex val2) {
	return add(*this, val2);
}const Complex& Complex::operator += (Complex val2) {
	this->re = this->add(*this, val2).re;
	this->im = this->add(*this, val2).im;
	return *this;
}
//-------------------------------------------------subtract---------------------------------------------------
const Complex& Complex::operator -= (Complex val2) {
	this->re = this->subtract(*this, val2).re;
	this->im = this->subtract(*this, val2).im;
	return *this;
}
const Complex& Complex::operator - (Complex val2) {
	return subtract(*this, val2);
}
const Complex& Complex::operator - (double val2) {
	return subtract(*this, val2);
}
const Complex& Complex::operator -= (double val2) {
	this->re = this->subtract(*this, val2).re;
	return *this;
}
//----------------------------------------multiply----------------------------------------------
const Complex& Complex::operator *= (Complex val2) {
	this->re = this->multiply(*this, val2).re;
	this->im = this->multiply(*this, val2).im;
	return *this;
}
const Complex& Complex::operator *= (double val2) {
	this->re = this->multiply(*this, val2).re;
	this->im = this->multiply(*this, val2).im;
	return *this;
}
const Complex& Complex::operator * (Complex val2) {
	return multiply(*this, val2);
}
const Complex& Complex::operator * (double val2) {
	return multiply(*this, val2);
}
//-----------------------------------------division-----------------------------------------------
const Complex& Complex::operator / (Complex val2) {
	return division(*this, val2);
}
const Complex& Complex::operator / (double val2) {
	return division(*this, val2);
}
const Complex& Complex::operator /= (Complex val2) {
	this->re = this->division(*this, val2).re;
	this->im = this->division(*this, val2).im;
	return *this;
}
const Complex& Complex::operator /= (double val2) {
	this->re = this->division(*this, val2).re;
	this->im = this->division(*this, val2).im;
	return *this;
}
