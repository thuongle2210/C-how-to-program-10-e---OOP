#include <iostream>
#include <string>

class TargetHeartRate{
private:
    std::string firstName;
    std::string lastName;
    int dateOfBirth;
    int monthOfBirth;
    int yearOfBirth;
    double weight;
    double height;
public:
    TargetHeartRate(std::string firstNamem, std::string lastName, int dateOfBirth, int monthOfBirth, int yearOfBirth, double weight, double height){
        setFirstName(firstName);
        setLastName(lastName);       
        setDateOfBirth(dateOfBirth);
        setMonthOfBirth(monthOfBirth);
        setYearOfBirth(yearOfBirth);
        setWeight(weight);
        setHeight(height);
    }
    // Set information
    void setFirstName(std::string firstName){
        this->firstName = firstName;
    }
    void setLastName(std::string lastName){
        this->lastName = lastName;
    }
    void setDateOfBirth(int dateOfBirth){
        this->dateOfBirth = dateOfBirth;
    }
    void setMonthOfBirth(int monthOfBirth){
        this->monthOfBirth = monthOfBirth;
    }
    void setYearOfBirth(int yearOfBirth){
        this->yearOfBirth = yearOfBirth;
    }
    void setWeight(double w){
        this->weight = w;
    }
    void setHeight(double h){
        this->height = h;
    }
    // Get information
    std::string getFirstName() const{
        return this->firstName;
    }
    std::string getLastName() const{
        return this->lastName;
    }
    int getDateOfBirth() const{
        return this->dateOfBirth;
    }
    int getMonthOfBirth() const{
        return this->monthOfBirth;
    }
    int getYearOfBirth() const{
        return this->yearOfBirth;
    }
    double getWeight() const{
        return this->weight;
    }
    double getHeight() const {
        return this->height;
    }
    //Calculate age 
    int calculateAge(int day, int month, int year){
        int countYear = year - this->getYearOfBirth();
        if (this->getMonthOfBirth() < month){
            countYear--;
        }else if (this->getMonthOfBirth() == month && this->getDateOfBirth() < day){
            countYear--;
        }
        return countYear;
    }
    // Calculate maximum heart rate
    int calculateMaximumHearRate(int day, int month, int year){
        return 220 - calculateAge(day, month, year);
    }
    // display target heart rate
    void displayTargetHeartRate(int day, int month, int year){
        std::cout<<calculateMaximumHearRate(day, month, year)*0.5<<" - "<<(calculateMaximumHearRate(day, month, year))*0.85<<std::endl;
    }  
    // calculate BMI
    doubleOOP calculateBMI(){
        std::cout<<this->getHeight()<<std::endl;
        std::cout<<this->getWeight()<<std::endl;
        return this->getWeight()/(this->getHeight()*this->getHeight());
    }

};