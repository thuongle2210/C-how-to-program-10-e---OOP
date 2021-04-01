#include <iostream>
#include <sstream>
#include "Date.h"
#include "Employee.h"

using namespace std;

Employee::Employee(const string& first, const string& last, const Date &dateOfBirth, const Date &dateOfHire)
    : firstName{first}, lastName{lastName}, birthDate{dateOfBirth}, hireDate{dateOfHire}{
    cout << "Employee object constructor:" << firstName << " " << lastName;    
}
string Employee::toString() const{
    ostringstream output;
    output << lastName << ", " << firstName << " Hired: "   
        << hireDate.toString() << " BirthDay: " << birthDate.toString();
    return output.str();

}

Employee::~Employee(){
    cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}
