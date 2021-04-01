#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee{
public:
    Employee(const std::string&, const std::string&);
    ~Employee();
    std::string getFirstName() const; // get first name
    std::string getLastName() const; // get last name
    //static member function
    static unsigned int getCount();
private:
    // information
    std::string firstName;
    std::string lastNamme;
    // static data
    static unsigned int count;
};
#endif