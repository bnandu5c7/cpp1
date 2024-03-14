#include "emp.h"
class sales : public emp{
 double samount,commisionrate;
  public :
   sales();
   sales(int,std::string,double,double,double);
   void display();
   double totalSalary();
   void calcommissinamount();
   ~sales();
};