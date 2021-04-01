#include "Employee.h"
#include <iostream>
using namespace std;

// initialize static data
unsigned int Employee::count{0};
// define static member function
unsigned int Employee::getCount() {return count;}

Employee::Employee(const string& first, const string& last):firstName{first}, lastNamme{last}{
    count ++ ;
    cout << "Employee constructor for " <<firstName
        << " " << lastNamme << " called." <<endl;  
}
Employee::~Employee(){
    cout << "~Employee() called for" << firstName
        << " " <<lastNamme << endl;
    --count;
}
//return name of employee
string Employee::getFirstName() const {return  firstName;}
string Employee::getLastName() const {return lastNamme;}
