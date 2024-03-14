#include<iostream>
#include<cstring>
#include <istream>
class Demo
{
    int uid;
    std::string uname;
    std::string udept;
    double usalary;
    public:
     Demo();
     Demo(int,std::string,std::string,double);
     void showDetails();
     friend istream& operator>>(std::istream &,Demo &);
     bool operator==(const Demo &);

     int getUid() const { return uid; }
     void setUid(int uid_) { uid = uid_; }

     std::string getUname() const { return uname; }
     void setUname(const std::string &uname_) { uname = uname_; }

     std::string getUdept() const { return udept; }
     void setUdept(const std::string &udept_) { udept = udept_; }

     double getUsalary() const { return usalary; }
     void setUsalary(double usalary_) { usalary = usalary_; }

};