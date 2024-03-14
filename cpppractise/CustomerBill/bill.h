#include<iostream>
#include "custmr.h"
#include "date.h"
using namespace std;
class bill
{
    int billid;
     public: custmr customerinfo;
    public: date billdate;
    int billamt;
    public:
      bill();
      void accept();
      friend ostream& operator<<(ostream &,const bill &);
      ~bill();

      int getBillid() const { return billid; }
      void setBillid(int billid_) { billid = billid_; }

      custmr getCustomerinfo() const { return customerinfo; }
      void setCustomerinfo(const custmr &customerinfo_) { customerinfo = customerinfo_; }

      date getBilldate() const { return billdate; }
      void setBilldate(const date &billdate_) { billdate = billdate_; }

      int getBillamt() const { return billamt; }
      void setBillamt(int billamt_) { billamt = billamt_; }
};