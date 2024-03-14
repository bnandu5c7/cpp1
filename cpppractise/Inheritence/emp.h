#ifndef EMP_H
#define EMP_H
#include<iostream>
class emp{
int eid;
std::string ename;
double esalary;
double HRA,MA,Ptax,pf;
void calAllownces()//private function acts as helper functions becoz they provide help for public functions
{
    HRA=esalary*0.02;
    MA=esalary*0.03;
    Ptax=esalary*0.05;
    pf=esalary*0.02;
}
public:
  emp();
  emp(int,std::string,double);
  ~emp();
   virtual double totalSalary();
   virtual void display();
};


#endif // EMP_H
