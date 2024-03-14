#include<iostream>
#include<string.h>
using namespace std;
class Account
{
    int accountnumber;
    char accountname[30];
    int accountbalance;
    public:
     Account();
     Account(int , const char *,int );
     void showAccountDetails();

     int getAccountnumber() const { return accountnumber; }
     void setAccountnumber(int accountnumber_) { accountnumber = accountnumber_; }

      const char* getAccountname() const { return accountname; }
     void setAccountname(char* accountname_) { strcpy(accountname,accountname_); }

     int getAccountbalance() const { return accountbalance; }
     void setAccountbalance(int accountbalance_) { accountbalance = accountbalance_; }
     

};