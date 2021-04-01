#include <iostream>
#include "Date.h"
#include "Employee.h"
using namespace std;

int main(){
    Date birh{24, 7, 2001};
    Date hire{12, 3, 2021};
    Employee manager{"Bob", "Blue", birh, hire};
    cout << "\n" << manager.toString() <<endl;
}