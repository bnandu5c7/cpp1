#include "bill.h"

bill::bill():billid(101),billamt(2500)
{
    cout<<" defualt  cons of bill...."<<endl;
}

void bill::accept()
{
    cout<<"enter the bill id : "<<endl;
    cin>>billid;
    cout<<"enter the bill amount : "<<endl;
    cin>>billamt;
}

bill::~bill()
{
    cout<<" destructor of bill...."<<endl;
}

ostream &operator<<(ostream &out, const bill &bobj)
{
   out<<"=============="<<endl;
   out<<" details are "<<endl;
   out<<" bill number : "<<bobj.billid<<endl;
   out<<"customer name : "<<bobj.customerinfo.getCname()<<endl;
   out<<" date :"<<bobj.billdate.getDay()<<"/"<<bobj.billdate.getMonth()<<"/"<<bobj.billdate.getYear()<<endl;
   out<<" bill amount : "<<bobj.billamt<<endl;
}
