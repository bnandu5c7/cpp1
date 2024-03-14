#include<iostream>
using namespace std;
class bank
{
    int accountNo;
    std::string accountHolder;
    double balance;
    public:
     bank():accountNo(101),accountHolder("srinika"),balance(4000)
     {
        std::cout<<"defualt cons of bank....."<<std::endl;
     }
     bank(int bid,std::string bname,double bal):accountNo(bid),accountHolder(bname)
     {
        setBalance(bal);
     }
     bool checkBalance(int amt)
     {
        if(balance-amt>=3000)
        {
            return true;
        }
        else{
            throw std::runtime_error("cant withdraw...");
        }
     }
     void withdraw(int amount)
     {
        if(checkBalance(amount))
        {
            balance-=amount;
        }
     }
     void setBalance(int b)
     {
        if(b>=3000)
        {
            balance=b;
        }
        else{
            throw std::runtime_error("low balance exception");
        }
     }
     void showDetails()
     {
        std::cout<<"customer details are :"<<std::endl;
        std::cout<<" acount id : "<<accountNo<<std::endl;
        std::cout<<" account holder :"<<accountHolder<<std::endl;
        std::cout<<" account current balance : "<<balance<<std::endl;
     }
};
int main()
{
    bank obj;
    // obj.showDetails();
    // bank obj1(701,"nancy",2000);
    try
    {
        obj.setBalance(6000);
        obj.withdraw(400);
        obj.showDetails();
    }
    catch(const std::runtime_error& e)
    {
        std::cerr<<e.what()<<"\n";
    }
}