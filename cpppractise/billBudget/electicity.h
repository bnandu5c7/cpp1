#include<iostream>
enum electricSlabs{E1=125,E2=150,E3=200};
class electricity
{
    int sanctionLoad;
    long prereading;
    long prevreading;
    double billAmount;
    public:
      void accept();
      void calElectricityBill();
      void display();

      int getSanctionLoad() const { return sanctionLoad; }
      void setSanctionLoad(int sanctionLoad_) { sanctionLoad = sanctionLoad_; }

      long getPrereading() const { return prereading; }
      void setPrereading(long prereading_) { prereading = prereading_; }

      long getPrevreading() const { return prevreading; }
      void setPrevreading(long prevreading_) { prevreading = prevreading_; }
      
};