#include<iostream>
#include "bill.h"
int main()
{
    bill obj1[3];
    for(int i=0;i<3;i++)
    {
        obj1[i].accept();
        obj1[i].customerinfo.accept();
        obj1[i].billdate.accept();   
    }
    for(int j=0;j<3;j++)
    {
       std:: cout<<obj1[j]<<endl;
    }
    int total=0;
    for(int i=0;i<3;i++)
    {
        total+=obj1[i].getBillamt();
    }
    std::cout<<"total calculated bill is "<<total<<endl;
    std::string n;
    std::cout<<"enter the name of the customer : "<<endl;
    std::cin>>n;
    for(int k=0;k<3;k++)
    {
        if(n==obj1[k].customerinfo.getCname())
        {
            cout<<" "<<obj1[k]<<endl;
        }
        
    }
    return 0;

}