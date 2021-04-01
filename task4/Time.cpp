#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h"

using namespace std;
Time::Time(int h, int m, int s){
    setTime(h, m, s);
}
void Time::setTime(int h, int m , int s){
    if (h > 24 || h <0 || m <0 || m > 60 || s < 0 || s > 60)
        throw("out of range");
    this->hour = h;
    this->minute = m;
    this->second = s;
}

std::string Time::toUniversalString() const {
    ostringstream output;
    output << hour << ":" << setw(2) << minute << ":" << setw(2) 
            << second;
    return output.str();
}
std::string Time::toStandardString() const {
    ostringstream output;
    output << (( hour == 0 || hour == 12) ? 12 : hour %12)<< setw(2) 
            << ":" << minute << setw(2) << ":" << second << ((hour < 12) ? " AM":" PM");
    return output.str();
}
