#include "Customer.h"
#include<cstring>
// #include<iostream>
// using namespace std;

void Customer::display()  //static member function to access static data member function
{
    cout<<n;
}

Customer::Customer()
{
    customerid=101;
    strcpy(customername,"nandini");
    customerage=22;
}

Customer::Customer(int cid,const char *cname, int cage)
{
    customerid=cid;
    strcpy(customername,cname);
    customerage=cage;
}

void Customer::showDetails()
{
    cout<<"the customer id :  "<<customerid<<" and name of customer is "<<customername<<"  age is "<<customerage<<endl;
}


