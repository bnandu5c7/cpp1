#include<iostream>
#include<cstring>
using namespace std;
class account
{
    int accnum;
    char *accname;
    double accbal;
    static int num;
    public:
    account()
    {
        accnum=num;
        num++;
        accname = new char[45];
        strcpy(accname,"nandini reddy");
        accbal=55000;
    }
    account(const char *aname,double bal)
    {
        accnum=num;
        num++;
        accname= new char[50];
        strcpy(accname,aname);
        accbal=bal;
    }
    account(const account &acnt2)
    {
        accname=new char[strlen(acnt2.accname)+1];
        strcpy(accname,acnt2.accname);
    }
    ~account()
    {
        delete accname;
    }
    void deposit(double amt)
    {
        accbal=accbal+amt;
        cout<<"ammount"<<amt<<"added successfully"<<endl;
    }
    void withdraw(double amount)
    {
        accbal-=amount;
        cout<<"amount"<<amount<<"withdraw successfully"<<endl;
    }
    void display()
    {
        cout<<"id of the account holder "<<accnum<<" and name of the holder is "<<accname<<" current  balance is "<<accbal<<endl;
    }

    double getAccbal() const { return accbal; }
    void setAccbal(double accbal_) { accbal = accbal_; }
    
};
int account::num=50001;
int main()
{
    account obj;
    obj.display();
    account obj1("harsha",34000);
    obj1.display();
    obj1.deposit(4000);
    obj1.withdraw(2000);
    account obj2(obj1);
    obj2.display();
    cout<<"updated balance   "<<obj1.getAccbal()<<endl;
}
