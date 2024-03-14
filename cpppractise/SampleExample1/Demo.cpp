#include "Demo.h"
#include <istream>

Demo::Demo()
{
   uid=103;
   uname="nandu";
   udept="design";
   usalary=45000.45;
}
Demo::Demo(int id, std::string name, std::string dept , double salary)
{
   uid=id;
   uname=name;
   udept=dept;
   usalary=salary;
}

void Demo::showDetails()
{
    std::cout<<"uder id : "<<uid<<" uname is "<<uname<<" department is  "<<udept<<" and salary is "<<usalary;
}
Demo:: istream& operator>>(std::istream &obj,Demo &dobj)
{   std::cout<<"enter the user id "<<"\n";
    obj>>dobj.uid;
    return obj;
}
bool Demo::operator==(const Demo &obj8)
{
    return this->uid==obj8.uid;
}
