#include "sales.h"

sales::sales():samount(45678),commisionrate(0.05)
{
    std::cout<<"\n defualt of sales ";
}

sales::sales(int i, std::string na , double sal, double smt, double c):emp(i,na,sal),samount(smt),commisionrate(c)
{
    std::cout<<"\n parameterized cons of sales";
}

// sales::sales(double samt, double)
// {
// }

void sales::display()
{
    emp::display();
    std::cout<<" sales amount :"<<samount<<" commision : "<<commisionrate;
}

double sales::totalSalary()
{
    return emp::totalSalary()+samount*commisionrate;

}

void sales::calcommissinamount()
{
    std::cout<<" \n the commision amount is "<<samount*commisionrate;
}

sales::~sales()
{
    std::cout<<"\n destructor of sales ";
}
