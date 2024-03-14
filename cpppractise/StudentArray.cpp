#include<iostream>
#include<cstring>
using namespace std;
class Student{
    char name[45];
    int smarks[3];
    int avg;
    public:
     Student()
     {
        strcpy(name,"nandhu");
        smarks[0]=78;
        smarks[1]=80;
        smarks[2]=85;
        
     }
     Student(const char*sname, int sarr[3])
     {
        strcpy(name,sname);
        for(int i=0;i<3;i++)
        {
            smarks[i]=sarr[i];
        }
     }
     float calavg(const int sarr[])
     {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=sarr[j];
        }
        avg=sum/3;
     }
     void readDetails()
     {
        cout<<" the name of the student "<<name<<endl;
        cout<<" marks are : "<<endl;
        for(int k=0;k<3;k++)
        {
            cout<<smarks[k]<<endl;
        }
        cout<<"average is "<<avg<<endl;
     }
    //  bool operator==(const  Student &s2)
    //  {
    //      return this->avg==s2.avg;
    //  }
     bool operator>( const Student &s2)
     {
        return this->avg>s2.avg;
     }
     bool operator==(const Student &s2)
     {
        return strcmp(name,s2.name);
     }
};
int main()
{
    // Student obj;
    // // obj.calavg(smarks);
    // obj.readDetails();
    int sar[3] = {78,92,68};
    Student s1("nandini",sar);
    s1.calavg(sar);
    s1.readDetails();
    int sar2[3]={78,84,58};
    Student s2("reddy",sar2);
    s2.calavg(sar2);
    s2.readDetails();
    // if(s1==s2)
    // {
    //     cout<<"They are equal"<<endl;
    // }
    // else
    // {
    //     cout<<"Both averages are not equal"<<endl;
    // }
    if(s1>s2)
    {
        cout<<"s1 marks average is more"<<endl;
    }
    else
    {
        cout<<" s2 marks average is more"<<endl;
    }
    if(s1==s2)
    {
        cout<<"names are not equal"<<endl;
    }
    else
    {
        cout<<"names are equal"<<endl;
    }

    
}