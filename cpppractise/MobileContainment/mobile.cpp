#include "mobile.h"

mobile::mobile()
{
   std::cout<<" default class of mobile class is called...."<<"\n";
   mobileId=201;
   mobileBrand="samsung";
   mobileCost=45000.56;
   typeOfOs="android";
   storage=4;

}

mobile::mobile(int mid, std::string mname, double mcost, std::string tpye , int space, int scode, std::string tsim, double sp): sobj(scode,tsim,sp)
{
    std::cout<<" parameterized constructor of mobile class is called "<<"\n";
    mobileId=mid;
    mobileBrand=mname;
    mobileCost=mcost;
    typeOfOs=tpye;
    storage=space;
}

mobile::~mobile()
{
    std::cout<<" destructor of mobile class is called....."<<"\n";
}

void mobile::display()
{
    std::cout<<" the mobile code : "<<mobileId<<" brand of mobile : "<<mobileBrand<<" price of the mobile : "<<mobileCost<<" os type of mobile is : "<<typeOfOs<<" storage : "<<storage<<"GB "<<"\n";
    sobj.showDetails();

}
