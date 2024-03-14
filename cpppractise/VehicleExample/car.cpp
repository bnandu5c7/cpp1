#include "car.h"

car::car():carbrand(ctype::SUV)
{
  std::cout<<"defualt cons of car...."<<"\n ";
  
}

car::car( ctype brand):carbrand(brand)
{
    std::cout<<"parameterised cons of car..."<<"\n ";
}


void car::showDetails()

{
    std::cout<<"car details : ";
    std::cout<<"\n chassiss number :"<<getChasissnumber();
    std::cout<<"\n vehicle brand : "<<getVehiclebrand();
    switch(carbrand)
    {
        case ctype::SUV :std::cout<<" Your car brand is Suv"<<"\n";
                         break;
        case ctype::SEDEN :std::cout<<" Your car brand is Sedan"<<"\n";
                         break;
        case ctype::HATCHBACK :std::cout<<" Your car brand is hatchback"<<"\n";
                         break;
        default : std::cout<<"there is no such car"<<"\n";
                  break;
    }
    std::cout<<"\n price : "<<getPrice();
    std::cout<<"\n number of seats : "<<getNoOfseats();
    std::cout<<"\n tax : "<<getTax();
    std::cout<<"\n insurance:"<<getInsurance();
}
void car::readDetails()
{
    std::string temps;
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
    int c;
    std::cout<<"enter the car type you want 0-SUV 1-SEDEN 2-HATCHBACK "<<"\n";
    std::cin>>c;
    switch(c)
    {
        case ctype::SUV : carbrand= ctype::SUV;
                         break;
        case ctype::SEDEN: carbrand= ctype::SEDEN;
                         break;
        case ctype::HATCHBACK : carbrand= ctype::HATCHBACK;
                         break;
        default:std::cout<<"enter the option correctly";
                 break;

    }

}

