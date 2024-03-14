#include<iostream>
#include<cstring>
using namespace std;
class Demo{
    char name[30];
    public:
      Demo()
    {
        strcpy(name,"nandini");
    }
    Demo(const char* sname)
    {
        strcpy(name,sname);
    }
     void read()
    {
        cout<<"name is "<<name<<endl;
    }
    char operator[](int index)
    {
      if(!(index>=0 && index<strlen(name)))
    
        throw "index out of range";
      return name[index];
    }
};
int main()
{
    Demo d("nandu");
    try
    {
      char c=d[1];
      cout<<c;
    }
    catch(const char*msg)
    {
        cout<<msg;
    }
    return 0;
}
