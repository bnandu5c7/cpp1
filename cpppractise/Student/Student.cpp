#include "Student.h"
#include<cstring>
Student::Student()
{
    rollno=301;
    strcpy(sname,"jyothi");
    smarks=86;
}

Student::Student(int rno,  const char *name, int mark)
{
    rollno=rno;
    strcpy(sname,name);
    smarks=mark;
}

void Student::getStudentDetails()
{
    cout<<"the student id : "<<rollno<<" and name of the student is "<<sname<<" marks of this student is "<<smarks<<endl;

}
