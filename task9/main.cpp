#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;
void displayTime(const string& message, const Time& time){
    cout << message <<"\nUniversal Time: " << time.toUniversalString()
        <<"\nStandard time: " << time.toStandardString() <<"\n\n";
}
int main(){
    Time t;
    displayTime("Initial time:", t);
    t.setTime(23, 59, 59);
    displayTime("After set time:", t);
    t.incrementNextSecond();
    displayTime("After increase 1 second", t);
}