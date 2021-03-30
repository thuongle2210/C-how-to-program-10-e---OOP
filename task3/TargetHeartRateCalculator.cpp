#include "TargetHeartRateCalculator.h" 
using namespace std;
int main(){
    TargetHeartRate person("Thuong", "Le", 22, 10, 2001, 55, 1.60);
    person.displayTargetHeartRate(22,10,2020);
    cout<<person.calculateBMI();
}