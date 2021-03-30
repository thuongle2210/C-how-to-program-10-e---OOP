#include <iostream>
#include "Account.h"
using namespace std;
int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() <<endl;
    cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() <<endl;
    
    // Depositing money into an account
    account1.deposit(150);
    account2.deposit(80);
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() <<endl;
    cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() <<endl;
    
    // Withdrawing money to your account
    account1.Withdraw(70);
    account2.Withdraw(20);
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() <<endl;
    cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() <<endl;

}