#include<iostream>
#include<cstring>
using namespace std;
class point
{
    int m;
    int n;
    public:
     point()
     {
        m=0;
        n=0;
     }
     point(int m,int n)
     {
        this->m=m;
        this->n=n;
     }
    //  point operator+(const point &p2)
    //  {
    //     point pobj;
    //     pobj.m=this->m + p2.m;
    //     pobj.n=this->n + p2.n;
    //     return pobj;
    //  }
     point operator-( const point &pob)//here "point" acts as return by value
     {
        point pobj1;//local object 
        pobj1.m=this->m-pob.m;
        pobj1.n=this->n-pob.n;
        return pobj1;
     }
     point& operator++()// here "point&
     {
        ++m;
        ++n;
        return *this;
     }
     bool operator==(const point &p2)
     {
        return this->m==p2.m && this->n==p2.n;
     }
     void display()
     {
        cout<<"value of m : "<<m<<"  and n :  "<<n<<endl;
     }
    // friend ostream& operator<<(ostream &os,const point &pp);

};
ostream operator<<(ostream &os,const point &pp)
{
    // os<<pp.x<<pp.y  
}
int main()
{
  point p1(23,18);
  point p2(20,9);
  point p4(7,8);
  point p5=++p4;
//   cout<<p4;
//   cout<<p5;
//   point obj=p1+p2;
  //p1.operator+(p2)
  point obj1=p1-p2;
  obj1.display();
//   if(p1==p2)
//   {
//     cout<<"equal"<<endl;
//   }
//   else{
//     cout<<"non-equal"<<endl;
//   }
  return 0;
}