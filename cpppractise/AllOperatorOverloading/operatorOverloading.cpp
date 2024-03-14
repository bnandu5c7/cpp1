#include<iostream>
#include<cstring>
using namespace std;
class Demo
{
    int num1;
    int num2;
    // char *name;
    public:
     Demo()
     {
        num1=0;
        num2=0;
     }
     Demo(int n1,int num2)
     {
        num1=n1;
        this->num2=num2;
     }
   //   Demo operator+( const Demo &obj2)
   //   {
   //      Demo d;
   //      d.num1=this->num1+obj2.num1;
   //      d.num2=this->num2+obj2.num2;
   //      return d;
   //   }
   //   Demo operator-(const Demo &obj2)
   //   {
   //      Demo d1;
   //      d1.num1=this->num1-obj2.num1;
   //      d1.num2=this->num2-obj2.num2;
   //      return d1;
   //   }
   //   Demo operator*(const Demo &obj2)
   //   {
   //      Demo d2;
   //      d2.num1=this->num1*obj2.num1;
   //      d2.num2=this->num2*obj2.num2;
   //      return d2;
   //   }
   //   Demo operator/(const Demo &obj2)
   //   {
   //      Demo d3;
   //      d3.num1=this->num1/obj2.num1;
   //      d3.num2=this->num2/obj2.num2;
   //      return d3;
   //   }
   //    Demo operator%(const Demo &obj2)
   //   {
   //      Demo d4;
   //      d4.num1=this->num1%obj2.num1;
   //      d4.num2=this->num2%obj2.num2;
   //      return d4;
   //   }
   //   bool operator==(const Demo &obj2)
   //   {
   //      return this->num1==obj2.num1 && this->num2==obj2.num2;
   //   }
   //    bool operator>(const Demo &obj2)
   //   {
   //      return this->num1>obj2.num1 ;
   //   }
   //    Demo operator++(int) //post increment
   //   {
   //      Demo tobj=*this;
   //      num1++;
   //      num2++;
   //      return tobj;  
   //   }
   //   Demo& operator++() //pre increment
   //   {
   //      ++num1;
   //      ++num2;
   //      return *this;
   //   }
   //    Demo operator--(int) //post decrement
   //   {
   //      Demo tobj=*this;
   //      num1--;
   //      num2--;
   //      return tobj;  
   //   }
   //    Demo& operator--() //pre decrement
   //   {
   //      --num1;
   //      --num2;
   //      return *this;   
   //   }
     friend ostream& operator<<(ostream &os,const Demo &pp);
     friend istream& operator>>(istream &is, Demo &d5);

   //   void readvalues()
   //   {
   //      cout<<"value of num1 : "<<num1<<"  and value of num2 : "<<num2<<"\n";
   //   }
};
ostream& operator<<(ostream &os, const Demo &pp)
{
    os<<pp.num1<<" "<<pp.num2;
   //  return os; 
}
istream& operator>>(istream &isobj, Demo &p1)
{
  cout<<"enter the value num1 "<<endl;
  isobj>>p1.num1;
  cout<<"enter the value of num2 "<<endl;
  isobj>>p1.num2;
  return isobj;
}
int main()
{
    // Demo obj;
    // obj.readvalues();
   //  Demo obj1(15,8);
    // obj1.readvalues();
    // Demo obj2(13,8);
    // cout<<obj2;
    Demo obj12;
    cin>>obj12;
    cout<<obj12;
    // Demo obj10=obj1--;
    // obj10.readvalues();
    // Demo obj11=--obj1;
    // obj11.readvalues();
    // Demo obj8=obj1++;
    // obj8.readvalues();
    // Demo obj9=++obj1;
    // obj9.readvalues();
    // Demo obj3 = obj1+obj2;
    // obj3.readvalues();
    // Demo obj4=obj1-obj2;
    // obj4.readvalues();
    // Demo obj5=obj1*obj2;
    // obj5.readvalues();
    // Demo obj6=obj1/obj2;
    // obj6.readvalues();
    // Demo obj7= obj1%obj2;
    // obj7.readvalues();
    // if(obj1==obj2)
    // {
    //     cout<<"Both are equal \n";
    // }
    // else{
    //     cout<<"Both are not equal";
    // }
    //  if(obj1>obj2)
    // {
    //     cout<<"obj1 values are greater \n";
    // }
    // else{
    //     cout<<"obj2 values are greater ";
    // }
    return 0;

}

// ostream operator<<(ostream &os, const Demo &d5)
// {
//     return ostream();
// }
