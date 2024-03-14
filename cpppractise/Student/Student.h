#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    int rollno;
    char sname[30];
    int smarks;
    public:
      Student();
      Student(int , const char *,int );
      void getStudentDetails();
};