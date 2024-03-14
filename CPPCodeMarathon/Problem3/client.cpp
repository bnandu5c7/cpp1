#include<iostream>
#include "exam.h"
 unsigned int date:: monthsperyear=12;
int main()
{
    try
    {  
       exam offlineobj(104,etype::OFFLINE,date(31,3,2023));
       offlineobj.display();
       exam onlineobj(105,etype::ONLINE,date(32,9,2013));
       onlineobj.display();
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
}