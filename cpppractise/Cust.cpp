#include<iostream>

#include<cstring>
#include "cust.h"
using namespace std;
class Customer
{
    int customerid;
    char customername[30];
    int customerage;
    static int n;
    static int cnt;
    public:
     Customer()
    {
        customerid=n;
        n++;
        strcpy(customername,"nandini");
        customerage=22;
        cnt++;
    }
    Customer(const char*cname,int cage)
    {
        customerid=n;
        n++;
        strcpy(customername,cname);
        customerage=cage;
        cnt++;
    }
    void showDetails()
    {
     cout<<"the customer id :  "<<customerid<<" and name of customer is "<<customername<<"  age is "<<customerage<<endl;
    }
     static void showc()
    {
        cout<<"count  is "<<cnt<<endl;
    }


    
    // int getCustomerid() const { return customerid; }
    // void setCustomerid(int customerid_) { customerid = customerid_; }

    // const char* getCustomername() const { return customername; }
    // void setCustomername(char * cusbg;htomername_) { strcpy(customername,customername_);}

    // int getCustomerage() const { return customerage; }
    // void setCustomerage(int customerage_) { customerage = customerage_; }
    
   
};
int Customer::n=101;
int Customer::cnt=0;
int main()
{
    Customer cobj;
    cobj.showDetails();
    Customer obj1("Srinivas Reddy",25);
    obj1.showDetails();
    Customer::showc();
    // Customer *cptr = new Customer;
    // cptr->showDetails();

    
    // Customer carr[3] = {{103,"harsha",22},{104,"roshan",23},{105,"rithvik",24}};
    // for(int j=0;j<3;j++)
    // {
    //     carr[j].showDetails();
    // }
    // delete cptr;
}

