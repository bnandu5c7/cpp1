#include "train.h"

train::train():tname("venkatadri"),tnum(101),noOfseats(5),type(travelclass::AC3TIER),source("New Delhi"),destination("Surat"),distance(670)
{
    std::cout<<" default const of train..."<<std::endl;
}

void train::accept()
{
    int t;
    std::cout<<"enter the train name : "<<std::endl;
    std::cin>>tname;
    std::cout<<"enter the train number : "<<std::endl;
    std::cin>>tnum;
    std::cout<<"enter the no of seats  : "<<std::endl;
    std::cin>>noOfseats;
    std::cout<<"enter the  type of train : "<<std::endl;
    std::cin>>t;
    switch(t)
    {
        case travelclass::AC2TIER:type=travelclass::AC2TIER;
                                   break;
        case travelclass::FIRST:type=travelclass::FIRST;
                                   break;
        case travelclass::SLEEPER:type=travelclass::SLEEPER;
                                   break;
        case travelclass::AC3TIER:type=travelclass::AC3TIER;
                                   break;
        case travelclass::AC3ECONOMY:type=travelclass::AC3ECONOMY;
                                   break;
        default:type=travelclass::SLEEPER;
                break;
    }
    std::cout<<"enter the source only New Delhi : "<<std::endl;
    std::cin>>source;
    std::cout<<"enter the destination in Kolhapur or Surat or Nagpur or Ranchi or Dehradun :"<<std::endl;
    std::cin>>destination;
    std::cout<<"enter the distance : "<<std::endl;
    std::cin>>distance;
}

void train::display()
{
    std::cout<<"Train Name : "<<tname<<std::endl;
    std::cout<<"Train Number : "<<tnum<<std::endl;
    std::cout<<"Number Of Seats reserved are "<<noOfseats<<std::endl;
    switch(type)
    {
        case travelclass::AC2TIER:std::cout<<"you have choosen Ac2tier"<<std::endl;
                                  break;
        case travelclass::FIRST:std::cout<<"you have choosen First"<<std::endl;
                                  break;
        case travelclass::SLEEPER:std::cout<<"you have choosen Sleeper"<<std::endl;
                                  break;
        case travelclass::AC3TIER:std::cout<<"you have choosen Ac3tier"<<std::endl;
                                  break;
        case travelclass::AC3ECONOMY:std::cout<<"you have choosen Ac3economy"<<std::endl;
                                  break;
        default:std::cout<<"you have choosen sleeper"<<std::endl;
                    break;
    }
    std::cout<<"Source : "<<source<<std::endl;
    std::cout<<"Destination : "<<destination<<std::endl;
    std::cout<<"Distance : "<<distance<<std::endl;
}

// void train::booktrain()
// {
// }

// int calFareAmt(int distance)
// {    
//     if(distance>100 && distance<500)
//     {
//         std::cout<<" your fare price is "<<800<<" Rs"<<std::endl;
//     }
//     else if(distance>=500 && distance<1000)
//     {
//          std::cout<<" your fare price is "<<900<<" Rs"<<std::endl;
//     }
//     else if(distance>=1000 && distance<1500)
//     {
//          std::cout<<" your fare price is "<<1100<<" Rs"<<std::endl;
//     }
//     else if(distance>=1500 && distance<3000)
//     {
//          std::cout<<" your fare price is "<<1300<<" Rs"<<std::endl;
//     }
//     else{
//          std::cout<<" your fare price is "<<2000<<" Rs"<<std::endl;
//     }

