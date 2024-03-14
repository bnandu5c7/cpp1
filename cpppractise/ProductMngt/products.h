#include<iostream>
enum ptype{SHIRT,SWEATER,COAT,JEANS};
class products
{
    int pid;
    enum ptype pname;
    double rate;
    std::string bname;
    int quantityOfProductInStock;
    int quantityOfProductToPurchase;
    public:
     void validate();
     void display();

     int getPid() const { return pid; }
     void setPid(int pid_) { pid = pid_; }

     enum ptype getPname() const { return pname; }
     void setPname(const enum ptype &pname_) { pname = pname_; }

     double getRate() const { return rate; }
     void setRate(double rate_) { rate = rate_; }

     std::string getBname() const { return bname; }
     void setBname(const std::string &bname_) { bname = bname_; }

     int getQuantityOfProductInStock() const { return quantityOfProductInStock; }
     void setQuantityOfProductInStock(int quantityOfProductInStock_) { quantityOfProductInStock = quantityOfProductInStock_; }

     int getQuantityOfProductToPurchase() const { return quantityOfProductToPurchase; }
     void setQuantityOfProductToPurchase(int quantityOfProductToPurchase_) { quantityOfProductToPurchase = quantityOfProductToPurchase_; }
     
};


