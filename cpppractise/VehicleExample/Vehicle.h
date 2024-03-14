#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "car.h"
#include "bike.h"
class vehicle {
  std::string chasissnumber;
  std::string vehiclebrand;
  double price;
  int noOfseats;
  double tax;
  double insurance;
  public:
   vehicle();
   vehicle(std::string,std::string,double,int,double,double);
    virtual void showDetails()=0;
    virtual void readDetails()=0;

   std::string getChasissnumber() const { return chasissnumber; }
   void setChasissnumber(const std::string &chasissnumber_) { chasissnumber = chasissnumber_; }

   std::string getVehiclebrand() const { return vehiclebrand; }
   void setVehiclebrand(const std::string &vehiclebrand_) { vehiclebrand = vehiclebrand_; }

   double getPrice() const { return price; }
   void setPrice(double price_) { price = price_; }

   int getNoOfseats() const { return noOfseats; }
   void setNoOfseats(int noOfseats_) { noOfseats = noOfseats_; }

   double getTax() const { return tax; }
   void setTax(double tax_) { tax = tax_; }

   double getInsurance() const { return insurance; }
   void setInsurance(double insurance_) { insurance = insurance_; }
   

};


#endif // VEHICLE_H
