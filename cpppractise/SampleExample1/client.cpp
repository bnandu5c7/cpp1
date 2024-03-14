#include<iostream>
#include "Demo.h"
int main()
{
    Demo d1(101,"xyz","analysis",56700.45);
    d1.showDetails();
    Demo d2;
    std::cin>>d2;
    if(d1==d2)
    {
        std::cout<<"user id found ";
    }
    else{
        std::cout<<"user id not found";
    }
}