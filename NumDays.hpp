/*
 * NumDays.hpp
 *
 *  Created on: Mar 18, 2020
 *      Author: fasihatiq
 */

#ifndef NUMDAYS_HPP_
#define NUMDAYS_HPP_
#include <iostream>
using namespace std;

class NumDays {
public:
	NumDays();
	virtual ~NumDays();
	NumDays(double);
	void setHours(double);
	double getDays();
	double getHours();
	NumDays operator --();
	NumDays operator --(int);
	NumDays operator ++();
	NumDays operator ++(int);
	NumDays operator +(const NumDays &);
	NumDays operator -(const NumDays &);

private:

	double days;
	double hours;

};


#endif /* NUMDAYS_HPP_ */
