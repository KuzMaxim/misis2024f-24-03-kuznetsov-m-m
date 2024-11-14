#ifndef RATIONAL_HPP
#define RATIONAL_HPP
#include <iosfwd>
#include <stdio.h>
#include <stdint.h>

struct Real {

	int32_t chis;
	int32_t znam;
	//---------------------------------------------------constructor-------------------------------------------------
	Real();
	Real(int32_t chis);
	Real(int32_t chis, int32_t znam);
	Real(Real& val);
	//----------------------------------------------------destructor--------------------------------------------------
	~Real() = default;
	//--------------------------------------------------side_functions------------------------------------------------
	void get_data(int32_t& re, int32_t& im);
	const int32_t NOD(int32_t val1, int32_t val2);
	const int32_t NOK(int32_t val1, int32_t val2);
	//---------------------------------------------------ariphmetic----------------------------------------------------
	const Real& add(const Real val1, const Real val2);
	const Real& add(const Real& val1, const int32_t val2);
	const Real& subtract(const Real val1, const Real val2);
	const Real& subtract(const Real val1, const int32_t val2);
	const Real& multiply(const Real val1, const Real val2);
	const Real& multiply(const Real val1, const int32_t val2);
	const Real& division(const Real val1, const Real val2);
	const Real& division(const Real val1, const int32_t val2);
	//---------------------------------------------------add-----------------------------------------------------
	const Real& operator + (Real val2);
	const Real& operator + (int32_t val2);
	const Real& operator += (Real val2);
	const Real& operator += (int32_t val2);
	//-------------------------------------------------subtract---------------------------------------------------
	const Real& operator -= (Real val2);
	const Real& operator - (Real val2);
	const Real& operator - (int32_t val2);
	const Real& operator -= (int32_t val2);
	//----------------------------------------multiply----------------------------------------------
	const Real& operator *= (Real val2);
	const Real& operator *= (int32_t val2);
	const Real& operator * (Real val2);
	const Real& operator * (int32_t val2);
	//-----------------------------------------division-----------------------------------------------
	const Real& operator / (Real val2);
	const Real& operator / (int32_t val2);
	const Real& operator /= (Real val2);
	const Real& operator /= (int32_t val2);
	//--------------------------------------------------comparing------------------------------------------------
	bool operator == (Real& val1);
	bool operator < (Real& val1);
	bool operator <= (Real& val1);
	bool operator > (Real& val1);
	bool operator >= (Real& val1);
	bool operator != (Real& val1);
};
#endif
