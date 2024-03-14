#include<iostream>
#include "products.h"
int finalBill;
int calculateBill(products arr[],int n)
{ 
    for(int k=0;k<n;k++)
    {
      finalBill+=arr[k].getRate();
    }
   return finalBill;
}
int main()
{
   
    products p[3];
    for(int i=0;i<3;i++)
    {
        p[i].validate();
    }
    for(int j=0;j<3;j++)
    {
        p[j].display();
    }
    std::cout<<"total :"<<calculateBill(p,3);
}