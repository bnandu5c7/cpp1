#include "Account.h"

Account::Account()
{
    accountnumber=501;
    strcpy(accountname,"venkat reddy");
    accountbalance=45000;

}

Account::Account(int accnum, const char *accname, int accbal)
{
     accountnumber=accnum;
     strcpy(accountname,accname);
     accountbalance=accbal;

}

void Account::showAccountDetails()
{
    cout<<"account holder id is  "<<accountnumber<<" and name of the account holder  "<<accountname<<" holder current balance "<<accountbalance<<endl;
    
}
