#include <string>
class Account{
private:
    std::string name;
    int balance = 0;
public:
    Account(std::string accountName, int initialBalance) : name{accountName} {
        this->setBalance(initialBalance);
    }
    void deposit(int depositAmount){
        if (depositAmount > 0)
            balance += depositAmount;
    }
    int getBalance() const {
        return balance;
    }
    void setName(std::string accountName){
        name = accountName;
    }    
    void Withdraw(int amount){
        if (this->getBalance() < amount){
            std::cout<<"Withdrawal amount exceeded account balance."<<std::endl;
        }else{
            this->setBalance(this->getBalance() - amount);
        }
    }
    std::string getName() const {
        return name;
    }
private:
    void setBalance(int amount){
        if (amount > 0)
            this->balance = amount;
        else std::cout<<"amount is not allow negative!"<<std::endl;
    }
};