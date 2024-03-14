
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include<iostream>
using namespace std;
class SavingsAccount
{
    double savingsBalance; //private data member
    static  double annualInterestRate; // static data menber
    public:
     SavingsAccount(double);
     double calculatemonthlyInterest(double);
     static  double modifyInterestRate(double);

     double getSavingsBalance() const { return savingsBalance; }
     void setSavingsBalance(double savingsBalance_) { savingsBalance = savingsBalance_; }

     static double getAnnualInterestRate() { return SavingsAccount::annualInterestRate; }
     static void setAnnualInterestRate(double annualInterestRate) { SavingsAccount::annualInterestRate = annualInterestRate; }
     
};


#endif // SAVINGSACCOUNT_H
