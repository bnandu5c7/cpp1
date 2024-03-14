#include "Customer.h"
#include<cstring>

int main()
{ 
    Customer::display();// calling static member fuction 
    Customer cobj;
    cobj.showDetails();
    Customer obj1(102,"Srinivas Reddy",25);
    obj1.showDetails();
    Customer *cptr = new Customer;
    cptr->showDetails();
    Customer carr[3] = {{103,"harsha",22},{104,"roshan",23},{105,"rithvik",24}};
    for(int j=0;j<3;j++)
    {
        carr[j].showDetails();
    }
    delete cptr;
    return 0;

}