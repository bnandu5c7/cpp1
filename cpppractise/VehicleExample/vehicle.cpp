#include "Vehicle.h"

vehicle::vehicle():chasissnumber("BN223RUYT"),vehiclebrand("car"),price(60000),noOfseats(5),tax(0.4),insurance(3400)
{
    std::cout<<" defualt cont of vehicle...."<<"\n ";
}

vehicle::vehicle(std::string c, std::string brand , double p, int s, double t, double i):chasissnumber(c),vehiclebrand(brand),price(p),noOfseats(s),tax(t),insurance(i)
{
    std::cout<<" parameterised const of vehicle..."<<"\n";
}

void vehicle::showDetails()
{
    std::cout<<"vehicle details are.."<<"\n ";
    std::cout<<"\n chassiss number :"<<chasissnumber;
    std::cout<<"\n vehicle brand : "<<vehiclebrand;
    std::cout<<"\n price :"<<price;
    std::cout<<"\n number of seats : "<<noOfseats;
    std::cout<<"\n tax : "<<tax;
    std::cout<<"\n insurance :"<<insurance;
}

void vehicle::readDetails()
{
    std::cout<<"enter the chassiss number :";
    std::cin>>chasissnumber;
    std::cout<<"enter the  vehicle brand :";
    std::cin>>vehiclebrand;
    std::cout<<"enter the price  :";
    std::cin>>price;
    std::cout<<"enter the number of seats :";
    std::cin>>noOfseats;
    std::cout<<"enter the tax :";
    std::cin>>tax;
    std::cout<<"enter the insurance :";
    std::cin>>insurance;
    
}
