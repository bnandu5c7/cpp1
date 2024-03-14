#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "vehicle.h"
enum ctype{SUV,SEDEN,HATCHBACK};
class car : public vehicle{
//  int chasissnumber;
 enum ctype carbrand;
//  double price;
//  int noOfseats;
//  double tax;
//  double insurance;
  public:
   car();
   car(enum ctype);
   void readDetails();
   void showDetails();

   const enum ctype getCarbrand() const { return carbrand; }
   void setCarbrand(const enum ctype &carbrand_) { carbrand = carbrand_; }

//    int getChasissnumber() const { return chasissnumber; }
//    void setChasissnumber(int chasissnumber_) { chasissnumber = chasissnumber_; }



//    double getPrice() const { return price; }
//    void setPrice(double price_) { price = price_; }

//    int getNoOfseats() const { return noOfseats; }
//    void setNoOfseats(int noOfseats_) { noOfseats = noOfseats_; }

//    double getTax() const { return tax; }
//    void setTax(double tax_) { tax = tax_; }

//    double getInsurance() const { return insurance; }
//    void setInsurance(double insurance_) { insurance = insurance_; }


};


#endif // CAR_H
