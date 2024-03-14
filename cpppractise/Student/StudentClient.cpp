#include "Student.h"
int main()
{
    Student sobj;
    sobj.getStudentDetails();
    Student sobj1(202,"aruna sri ",87);
    sobj1.getStudentDetails();
    Student *sptr= new Student;
    sptr->getStudentDetails();
    Student sarr[2]={{203,"nandu",83},{204,"sriharsha",84}};
    for(int m=0;m<2;m++)
    {
      sarr[m].getStudentDetails();
    }
    delete sptr;

}