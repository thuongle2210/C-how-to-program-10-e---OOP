#include <string>

#ifndef DATE_H
#define DATE_H

class Date{
public:
    static const unsigned int monthsPerYear{12};
    explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1990);
    std::string toString() const;
    ~Date();
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;
    
    unsigned int checkDay(int) const;
};
#endif