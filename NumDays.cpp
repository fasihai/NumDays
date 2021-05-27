/*
 * NumDays.cpp
 *
 *  Created on: Mar 18, 2020
 *      Author: fasihatiq
 */

#include "NumDays.hpp"


NumDays::NumDays() {
	// TODO Auto-generated constructor stub
	days = 0;
	hours = 0;

}

NumDays::~NumDays() {
	// TODO Auto-generated destructor stub
}
NumDays::NumDays(double hr){
	hours = hr;
	days = hours / 8;
}
void NumDays::setHours(double hr){
	hours = hr;
}
double NumDays::getHours(){
	return hours;
}
double NumDays::getDays(){
	days = hours / 8;
	return days;
}
NumDays NumDays::operator --() {
	--hours;
	days = hours / 8;
	return *this;
}
NumDays NumDays::operator --(int){
	hours--;
	days = hours / 8;
	return *this;
}
NumDays NumDays::operator ++(){
	++hours;
	days = hours / 8;
	return *this;
}
NumDays NumDays::operator ++(int){
	hours++;
	days = hours / 8;
	return *this;

}
NumDays NumDays::operator +(const NumDays &i){
	NumDays temperature;
	temperature.hours = this->hours + i.hours;
	return temperature;


}
NumDays NumDays::operator -(const NumDays &i){
	NumDays temperature;
	temperature.hours = this->hours + i.hours;
	return temperature;


}
