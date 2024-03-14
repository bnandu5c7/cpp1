


#ifndef CUSTMR_H
#define CUSTMR_H

#include<iostream>
#include<cstring>
using namespace std;
class custmr{
char *cname;
  public:
   custmr();
   custmr(const char*);
   custmr(const custmr &);
   void accept();
   friend ostream& operator<<(ostream &,const custmr &);
   ~custmr();

   const char *getCname() const { return cname; }
   void setCname(char *cname_) { strcpy(cname,cname_); }


};


#endif // CUSTMR_H
