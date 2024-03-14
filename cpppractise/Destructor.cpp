#include <iostream>
#include<cstring>
using namespace std;
class Demo
{
    char *cname;
    public:
    //    ~Demo()
    //  {
    //     delete cname;
    //  }
       Demo()
     {
        cname=new char[45];
        strcpy(cname,"nandini");
     }
      Demo(const char *name)
     {
        cname=new char[strlen(name)+1];
        strcpy(cname,name);
     }
    void readDetails()
    {
        cout<<"the customer name is "<<cname<<endl;
    }
};
int main()
{
    Demo d;
    d.readDetails();
    Demo obj("srinika");
    obj.readDetails();
    Demo *dptr= new Demo;
    delete dptr;//request to call destructor

}