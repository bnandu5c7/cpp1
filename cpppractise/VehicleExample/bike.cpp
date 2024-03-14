#include "bike.h"

bike::bike():bikebrand(btype::OFF_ROADER)
{
    std::cout<<"defualt  cons of bike..."<<"\n";
}
bike::bike(enum btype type):bikebrand(type)
{
  std::cout<<"parameterized cons of bike "<<"\n";
}
void bike::readDetails()
{    std::string temps;
      double tempd;
      int temi;
    std::cout<<"enter the chassiss number :";
    std::cin>>temps;
    setChasissnumber(temps);
    std::cout<<"enter the  vehicle brand :";
    std::cin>>temps;
    setVehiclebrand(temps);
    std::cout<<"enter the price  :";
    std::cin>>tempd;
    setPrice(tempd);
    std::cout<<"enter the number of seats :";
    std::cin>>temi;
    setNoOfseats(temi);
    std::cout<<"enter the tax :";
    std::cin>>tempd;
    setTax(tempd);
    std::cout<<"enter the insurance :";
    std::cin>>tempd;
    setInsurance(tempd);
    int b;
    std::cout<<"enter the bike type in 0-COMMUTE 1-SPORTS 2-OFF_ROADER "<<"\n";
    std::cin>>b;
    switch(b)
    {
        case btype::COMMUTE:bikebrand=btype::COMMUTE;
                             break;
        case btype::SPORTS:bikebrand=btype::SPORTS;
                             break;
        case btype::OFF_ROADER:bikebrand=btype::OFF_ROADER;
                             break;
        default:std::cout<<"choose the option correctly..."<<"\n";
    }

}

void bike::showDetails()
{
    std::cout<<" bike  details : ";
    std::cout<<"\n chassiss number :"<<getChasissnumber();
    std::cout<<"\n vehicle brand : "<<getVehiclebrand();
    switch(bikebrand)
    {
        case btype::COMMUTE:std::cout<<"your bike type is Commute"<<"\n";
                            break;
        case btype::SPORTS:std::cout<<"your bike type is Sprots"<<"\n";
                            break;
        case btype::OFF_ROADER:std::cout<<"your bike type is Off_roader"<<"\n";
                            break;
        defualt:std::cout<<"no such bike..."<<"\n";
                break;
    }
    std::cout<<"\n price : "<<getPrice();
    std::cout<<"\n number of seats : "<<getNoOfseats();
    std::cout<<"\n tax : "<<getTax();
    std::cout<<"\n insurance:"<<getInsurance();
}
