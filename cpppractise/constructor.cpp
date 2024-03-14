#include<iostream>
#include<cstring>
using namespace std;
class College
{
    char *cname; 
    public:
    College()
    {
      cname= new char[45];//allocated memory in heap
      strcpy(cname,"MRCEW");
    }
    void display()
    {
        cout<<"name of the college is "<<cname<<endl;
    }

};
int main()
{
    College c;
    c.display();
    return 0;
}