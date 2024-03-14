#include "manager.h"
manager::manager():number_subordinates(5),incentive_persub(4500)
{
  std::cout<<" \n defualt constructor of manager";
}

manager::manager(int id , std::string ena , double esal, int num , double bonus):emp(id,ena,esal),number_subordinates(num),incentive_persub(bonus)
{
    
}

manager::~manager()
{
    std::cout<<" \n destructor of manager class..";
}

void manager::display()
{
    std::cout<<"\n number of sub ordinates "<<number_subordinates<<" \n incentive is "<<incentive_persub;
}

double  manager::totalSalary()
{
    return emp::totalSalary()+incentive_persub*number_subordinates;
}

void manager::calIncentive()
{
    std::cout<<" \n the bonus for employeee is"<<number_subordinates*incentive_persub;
}
