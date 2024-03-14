#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
class Customer
{
    int customerid;
    char customername[30];
    int customerage;
    static int n;//created one static data member n to automatically assign serail number to customer id and only one copy is maintained 
    public:
    void static display();
    Customer();
    Customer(int ,const char* ,int);
    void showDetails();


    
    // int getCustomerid() const { return customerid; }
    // void setCustomerid(int customerid_) { customerid = customerid_; }

    // const char* getCustomername() const { return customername; }
    // void setCustomername(char * customername_) { strcpy(customername,customername_);}

    // int getCustomerage() const { return customerage; }
    // void setCustomerage(int customerage_) { customerage = customerage_; }
    
   
};
int Customer:: n=1;//initializing the static data member