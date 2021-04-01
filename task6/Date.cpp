#include <array>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Date.h"
using namespace std;
Date::Date(unsigned int d, unsigned int m, unsigned int y){
    //if (m <1 || m > monthsPerYear)
    //    throw invalid_argument("month must be 1-12");
    day = d;
    month = m;
    year = y;    
    cout << "Date object constructor for date " << this->toString() <<endl;
}
string Date::toString() const{
    ostringstream output;
    output << day << "/" << month << "/" << year;
    return output.str();
}

Date::~Date(){
    cout << "Date object destructor for date " << this->toString() <<endl;
}
unsigned int Date::checkDay(int testDay) const{
    static const array<int, monthsPerYear + 1> daysPerMonth{
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    }
    if (testDay > 0 && testDay <= daysPerMonth[this->month]){
        return testDay;
    }
    // check leap year
    if (this->month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 ==0 && year % 100 != 0)))
        return testDay;
    throw invalid_argument("invalid day for current month and year");
}