#include <string>
#ifndef TIME_H
#define TIME_H
class Time{
public:
    Time (int = 0, int = 0, int = 0);
    void setTime(int, int, int); // set time
    void setHour(int);
    void setMinute(int);
    void set
    std::string toUniversalString() const; // 24-hour time format string
    std::string toStandardString() const; // 12-hour time format string
private:
    unsigned int hour{0}; // 0 - 23
    unsigned int minute{0};// 0 -59
    unsigned int second{0}; // 0 - 59
};
#endif