#include "sim.h"

sim::sim()
{
    std::cout<<" defualt constructor of sim class"<<"\n";
    simcode=101;
    simtype="tata docomo";
    sprice=456.2;
}

sim::sim(int sno, std::string stype, double scost)
{ 
    std::cout<<"parameterised constructor of sim class "<<"\n";
    simcode = sno;
    simtype=stype;
    sprice=scost;
}

sim::~sim()
{
    std::cout<<" destructor of sime class is called "<<"\n";
}

void sim::showDetails()
{
    std::cout<<" sim code : "<<simcode<<"  type of sim : "<<simtype<<" price of sim :"<<sprice<<"\n";
}
