#include<iostream>
#include "SavingsAccount.h"
using namespace std;
int main()
{
    SavingsAccount saver1(2000.00);

    // SavingsAccount::setAnnualInterestRate(0.3);
    SavingsAccount::modifyInterestRate(0.3);
    cout<<" before balance  saver1 "<<saver1.getSavingsBalance()<<endl;
    saver1.calculatemonthlyInterest(SavingsAccount::getAnnualInterestRate());
    cout<<" new balance of saver 1 "<<saver1.getSavingsBalance()<<endl;
    SavingsAccount saver2(3000.00);
    cout<<"before balance of saver 2 "<<saver2.getSavingsBalance()<<endl;
    SavingsAccount::setAnnualInterestRate(0.4);
    saver2.calculatemonthlyInterest(SavingsAccount::getAnnualInterestRate());
    cout<<"\n new balance of saver 2 "<<saver2.getSavingsBalance();
   return 0;
}