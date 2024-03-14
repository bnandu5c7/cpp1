#include<iostream>
#include "electicity.h"
int main()
{
    electricity *e=new electricity();
    e->accept();
    e->calElectricityBill();
    e->display();
    return 0;
}