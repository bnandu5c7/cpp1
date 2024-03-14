#include<iostream>
using namespace std;
 void add(int a,int b)
 {
   cout<<"addtion of two int numbers "<<a+b<<endl;
 }
//  void add(float a,float b)
//  {
//     cout<<"addition of two float numbers "<<a+b<<endl;
//  }
 void add(double a,double b)
 {
    cout<<"addition of two double numbers "<<a+b<<endl;
 }
 void display(int m,int n,int k=6)
 {
    cout<<"the value of m "<<m<<endl;
    cout<<"the value of n "<<n<<endl;
    cout<<"the value of k "<<k<<endl;
 }
 int main()
 {
    // add(4,3);
    // add(5.6f,3.8f);//the float data can convert into int and double but when float converted to int data may loss so by defualt it converts to double data type when float add() is commented
    // add(2.3,7.8);//the double can convert to int or float ...it gives ambigoius error..because when we call the add funtion it may create ambigous for this add function to which method we need to call i.e int add() or double add() when double add() is commented
    display(4,7);
    return 0;
 }