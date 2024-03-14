#include "electicity.h"

void electricity::accept()
{
    std::cout<<"enter the sanction load in 1 or 3 or 5 :"<<std::endl;
    std::cin>>sanctionLoad;
    std::cout<<"enter the present reading : "<<std::endl;
    std::cin>>prereading;
    std::cout<<"enter the previous reading : "<<std::endl;
    std::cin>>prevreading;
}

void electricity::calElectricityBill()
{   
     long consumption=prereading-prevreading;
    if(prereading<prevreading)
    {
        billAmount=0;
    }
    else{
        if(sanctionLoad==1)
        {
           billAmount= (((sanctionLoad*E1)+(consumption*E1/100))+((sanctionLoad*E2)+(consumption*E2/100))+((sanctionLoad*E3)+(consumption*E3/100)));
        }
        else if(sanctionLoad==3)
        {
            billAmount=(((sanctionLoad*E1)+(consumption*E1/100))+((sanctionLoad*E2)+(consumption*E2/100))+((sanctionLoad*E3)+(consumption*E3/100)));
        }
        else if(sanctionLoad==5)
        {
           billAmount=(((sanctionLoad*E1)+(consumption*E1/100))+((sanctionLoad*E2)+(consumption*E2/100))+((sanctionLoad*E3)+(consumption*E3/100)));
        }
    }
}

void electricity::display()
{
    std::cout<<" the total electricity bill : "<<billAmount<<std::endl;
}
