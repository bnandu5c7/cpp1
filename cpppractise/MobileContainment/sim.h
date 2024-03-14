#include<iostream>
class sim
{
    int simcode;
    std::string simtype;
    double sprice;
    public:
     sim();
     sim(int,std::string,double);
     ~sim();
     void showDetails();

     int getSimcode() const { return simcode; }
     void setSimcode(int simcode_) { simcode = simcode_; }

     std::string getSimtype() const { return simtype; }
     void setSimtype(const std::string &simtype_) { simtype = simtype_; }

     double getSprice() const { return sprice; }
     void setSprice(double sprice_) { sprice = sprice_; }
};