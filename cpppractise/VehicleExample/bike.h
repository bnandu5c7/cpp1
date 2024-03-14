#ifndef BIKE_H
#define BIKE_H
#include<iostream>
#include "Vehicle.h"
enum btype{COMMUTE,SPORTS,OFF_ROADER};
class bike:public vehicle
{
    enum btype bikebrand;
    public:
     bike();
     bike(enum btype);
     void readDetails();
     void showDetails();

     enum btype getBikebrand() const { return bikebrand; }
     void setBikebrand(const enum btype &bikebrand_) { bikebrand = bikebrand_; }
     
};


#endif // BIKE_H
