#include<iostream>
#include "Containment.h"
class Product
{
    int procode;
    int price;
    std::string pname;
    Containment deliveryaddress;//contained object
    public:
     Product();
     void display();

     int getProcode() const { return procode; }
     void setProcode(int procode_) { procode = procode_; }

     int getPrice() const { return price; }
     void setPrice(int price_) { price = price_; }

     std::string getPname() const { return pname; }
     void setPname(const std::string &pname_) { pname = pname_; }

     Containment getDeliveryaddress() const { return deliveryaddress; }
     void setDeliveryaddress(const Containment &deliveryaddress_) { deliveryaddress = deliveryaddress_; }
     

};