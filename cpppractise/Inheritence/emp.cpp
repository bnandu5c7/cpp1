#include "emp.h"

emp::emp():eid(1),ename("nandini"),esalary(45000.00)
{
    std::cout<<"defualt constructor is called...";
    calAllownces();
}

emp::emp(int id, std::string name , double salary):eid(id),ename(name),esalary(salary)
{
    std::cout<<"parameterized cons.....";
    calAllownces();
}

emp::~emp()
{
    std::cout<<"\n desturctor of empl is called....";
}

double emp::totalSalary()
{
    return esalary-HRA-MA-Ptax-pf;
}

void emp::display()
{
    std::cout<<" eid : "<<eid<<" ename : "<<ename<<" salary is: "<<esalary<<" rent allowance "<<HRA<<" medical allowance "<<MA<<" tax :"<<Ptax<<" pfund "<<pf;
}
