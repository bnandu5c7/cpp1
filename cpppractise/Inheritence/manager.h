#include<iostream>
#include "emp.h"
class manager:public emp
{
    int number_subordinates;
    double incentive_persub;
    public:
     manager();
    manager(int,std::string,double,int,double);
     ~manager();
     void display();
     double totalSalary();
     void calIncentive();
     
};