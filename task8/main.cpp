#include <iostream>
#include "Employee.h"
using namespace std;
int main(){
    cout << "Number of employees before instantiation of any objects is: " << Employee::getCount() <<endl;
    {
        Employee e1{"Susan", "baker"};
        Employee e2{"Thomas", "Muller"};
        // call static member function
        cout << "Number of employees: " << Employee::getCount();
        cout << "\nEmployee 1:" << e1.getFirstName() << " " << e1.getLastName()
            << "\nEmployee 2:" << e2.getLastName() <<" "<<e2.getLastName() <<"\n";
    }
    // without obejcts exist, call static member function
    cout << "\nNumber of employees after objets are deleted is" <<Employee::getCount() <<endl;
}