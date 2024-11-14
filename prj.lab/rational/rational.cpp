#include <iostream>
#include <cmath>
#include <sstream>
#include "rational.hpp"
#include <stdio.h>
#include <stdint.h>

Real::Real() : chis(0), znam(1)
{}
Real::Real(int32_t val1) : chis(val1), znam(1)
{}
Real::Real(int32_t val1, int32_t val2) : chis(val1), znam(val2){
	this->chis = chis / NOD(val1, val2);
	this->znam = znam / NOD(val1, val2);
	if (this->znam < 0) {
		this -> znam *= -1;
		this -> chis *= -1;
	}

}
Real::Real(Real& val) {
	chis = val.chis / NOD(val.chis, val.znam);
	znam = val.znam / NOD(val.chis, val.znam);
}

void Real::get_data(int32_t& chis, int32_t& znam)
{
	chis = this->chis;
	znam = this->znam;
}

//-------------------------------------------------------side_functions---------------------------------------------------
const int32_t Real::NOD(int32_t val1, int32_t val2) {
	if (val1 < 0) {
		val1 *= (-1);
	}
	if (val2 < 0) {
		val2 *= (-1);
	}
	while (val1 != 0 || val2 != 0) {
		if (val1 > val2) {
			val1 = val1 - val2;
		}
		else {
			val2 = val2 - val1;
		}
	}
	return (val1 + val2);
}

const int32_t Real::NOK(int32_t val1, int32_t val2) {
	return ((val1 * val2) / NOD(val1, val2));
}
//------------------------------------------------ariphmetic-------------------------------------------------
const Real& Real::add(const Real val1, const Real val2) {
	Real result{};
	int32_t nok = NOK(val1.znam, val2.znam);
	result.chis = val1.chis * (nok / val1.znam) + val2.chis * (nok / val2.znam);
	result.znam = nok;
	return Real{ result };
}
const Real& Real::add(const Real& val1, const int32_t val2) {
	Real result{};
	result.chis = val1.chis + val2 * val1.znam;
	result.znam = val1.znam;
	return Real{ result };
}
const Real& Real::subtract(const Real val1, const Real val2) {
	Real result{};
	int32_t nok = NOK(val1.znam, val2.znam);
	result.chis = val1.chis * (nok / val1.znam) - val2.chis * (nok / val2.znam);
	result.znam = nok;
	return Real{ result };
}
const Real& Real::subtract(const Real val1, const int32_t val2) {
	Real result{  };
	result.chis = val1.chis - val2 * val1.znam;
	result.znam = val1.znam;
	return Real{ result };
}
const Real& Real::multiply(const Real val1, const Real val2) {
	int32_t neg = 0;
	Real result{};
	result.chis = val1.chis * val2.chis;
	result.znam = val1.znam * val2.znam;
	return Real{ result };
}
const Real& Real::multiply(const Real val1, const int32_t val2) {
	Real result{};
	result.chis = val1.chis * val2;
	result.znam = val1.znam;
	return Real{ result };
}
const Real& Real::division(const Real val1, const Real val2) {
	Real result{};
	result.chis = val1.chis * val2.znam;
	result.znam = val1.znam * val2.chis;
	return Real{ result };
}
const Real& Real::division(const Real val1, const int32_t val2) {
	Real result{};
	result.chis = val1.chis;
	result.znam = val1.znam * val2;
	return Real{ result };
}
//------------------------------------------------------add-----------------------------------------------------
const Real& Real::operator + (Real val2) {
	return add(*this, val2);
}
const Real& Real::operator + (int32_t val2) {
	return add(*this, val2);
}
const Real& Real::operator += (Real val2) {
	this->add(*this, val2);
	return *this;
}
const Real& Real::operator += (int32_t val2) {
	this->add(*this, val2);
	return *this;
}
//-------------------------------------------------subtract---------------------------------------------------
const Real& Real::operator -= (Real val2) {
	this->subtract(*this, val2);
	return *this;
}
const Real& Real::operator - (Real val2) {
	return subtract(*this, val2);
}

const Real& Real::operator - (int32_t val2) {
	return subtract(*this, val2);
}
const Real& Real::operator -= (int32_t val2) {
	this->subtract(*this, val2);
	return *this;
}
//----------------------------------------multiply----------------------------------------------
const Real& Real::operator *= (Real val2) {
	this->multiply(*this, val2);
	return *this;
}
const Real& Real::operator *= (int32_t val2) {
	this->multiply(*this, val2);
	return *this;
}
const Real& Real::operator * (Real val2) {
	return multiply(*this, val2);
}
const Real& Real::operator * (int32_t val2) {
	return multiply(*this, val2);
}
//-----------------------------------------division-----------------------------------------------
const Real& Real::operator / (Real val2) {
	return division(*this, val2);
}
const Real& Real::operator / (int32_t val2) {
	return division(*this, val2);
}
const Real& Real::operator /= (Real val2) {
	this->division(*this, val2);
	return *this;
}
const Real& Real::operator /= (int32_t val2) {
	this->division(*this, val2);
	return *this;
}
//---------------------------------------------compare-----------------------------------------------

bool Real::operator == (Real& val1) {
	if ((*this - val1).chis == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
bool Real::operator > (Real& val1) {
	if ((*this - val1).chis > 0) {
		return 1;
	}
	else {
		return 0;
	}
}
bool Real::operator < (Real& val1) {
	if ((*this - val1).chis < 0) {
		return 1;
	}
	else {
		return 0;
	}
}
bool Real::operator >= (Real& val1) {
	if (*this > val1 || *this == val1) {
		return 1;
	}
	else {
		return 0;
	}
}
bool Real::operator <= (Real& val1) {
	if (*this < val1 || *this == val1) {
		return 1;
	}
	else {
		return 0;
	}
}
bool Real::operator != (Real& val1) {
	if (*this == val1) {
		return 0;
	}
	else {
		return 1;
	}
}
