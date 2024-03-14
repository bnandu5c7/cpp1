#include "SavingsAccount.h"
double SavingsAccount::annualInterestRate;
SavingsAccount::SavingsAccount(double bal)
{
    savingsBalance=bal;
    // annualInterestRate=rate;
}

double rate1;
double SavingsAccount::calculatemonthlyInterest(double r1)
{   
        rate1=(savingsBalance*r1)/12;
        savingsBalance+=rate1;
    return rate1;
}

double SavingsAccount::modifyInterestRate(double r)
{
     annualInterestRate=r;
}
