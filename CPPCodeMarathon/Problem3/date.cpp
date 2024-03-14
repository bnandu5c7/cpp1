#include "date.h"

date::date()
{
    day=23;
    month=12;
    year=2012;
}

date::date(unsigned int d, unsigned int m, unsigned int y):day(d),month(m),year(y)
{
   checkday(day);
 
}
int date::checkday(unsigned int testday)
{
    if((year%4==0 && year%100!=0))
    {
        if(month==2 && testday>0 && testday<=29)
        {
            return testday;
        }
    }
    else{
        if(month==2 && testday>0 && testday<=28) return testday;
        else if((month==1 ||month==3|| month==5||month==7||month==8||month==10||month==12) && (testday>0 && testday<=31))
        {
            return testday; 
        }
        else if((month==4||month==6||month==9||month==11) && (testday>0 && testday<=30))
        {
           return testday; 
        }
        else{
            throw std::runtime_error("wrong date..");
          }

    }
 }

void date::print()
{
    std::cout<<"date :"<<day<<"/"<<month<<"/"<<year<<std::endl;
}
