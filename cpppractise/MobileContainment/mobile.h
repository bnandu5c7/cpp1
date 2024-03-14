#include<iostream>
#include<cstring>
#include "sim.h"
class mobile
{
    int mobileId;
    std::string mobileBrand;
    double mobileCost;
    std::string typeOfOs;
    int storage;
    sim sobj;
    public:
      mobile();
      mobile(int,std::string,double,std::string,int,int,std::string,double);
      ~mobile();
      void display();

      int getMobileId() const { return mobileId; }
      void setMobileId(int mobileId_) { mobileId = mobileId_; }

      std::string getMobileBrand() const { return mobileBrand; }
      void setMobileBrand(const std::string &mobileBrand_) { mobileBrand = mobileBrand_; }

      double getMobileCost() const { return mobileCost; }
      void setMobileCost(double mobileCost_) { mobileCost = mobileCost_; }

      std::string getTypeOfOs() const { return typeOfOs; }
      void setTypeOfOs(const std::string &typeOfOs_) { typeOfOs = typeOfOs_; }

      int getStorage() const { return storage; }
      void setStorage(int storage_) { storage = storage_; }

      sim getSobj() const { return sobj; }
      void setSobj(const sim &sobj_) { sobj = sobj_; }

};