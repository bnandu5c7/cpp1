
#include "custmr.h"

custmr::custmr()
{
    cout<<" defualt of cust....."<<endl;
    cname=new char[15];
    strcpy(cname,"nandini");
    
}

custmr::custmr(const char *name)
{
  cout<<"parameterised cons of cust....."<<endl;
  cname= new char[strlen(name)+1];
  strcpy(cname,name);
}

custmr::custmr(const custmr &cobj)
{
    cout<<"copy cons of cust..."<<endl;
    cname= new char[strlen(cobj.cname)+1];
    strcpy(cname,cobj.cname);
}

void custmr::accept()
{
    cout<<"enter the customer name : "<<endl;
    cin>>cname;
}

custmr::~custmr()
{
    cout<<"destructor of cust....."<<endl;
}

ostream &operator<<(ostream &out, const custmr &obj)
{
    out<<"name of the customer : "<<obj.cname<<endl;

}
