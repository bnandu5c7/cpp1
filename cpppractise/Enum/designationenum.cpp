#include<iostream>
enum designation{TRAINEE,DEVELOPER,HR,MANAGER,QANALYST};
class employee{
    int eid;
    std::string ename;
    enum designation desig;
    public:
     employee():eid(501),ename("nandini"),desig(designation::HR)
     {

     }
     employee(int id ,std::string name,enum designation d):eid(id),ename(name),desig(d)
     {

     }
     void showDetails()
     {
        std::cout<<"\n id :"<<eid;
        std::cout<<"\n name :"<<ename;
        switch(desig)
        {
            case designation::TRAINEE:std::cout<<"\n your designation is Trainee";
                                       break;
            case designation::DEVELOPER:std::cout<<"\n your designation is Developer";
                                       break;
            case designation::HR:std::cout<<"\n your designation is Hr";
                                       break;
            case designation::MANAGER:std::cout<<"\n your designation is Manager";
                                       break;
            default:std::cout<<"\n no match ";
                         break;
        }     
     }
     void readDetails()
     {
        int no;
        std::cout<<"enter the id of employee :";
        std::cin>>no;
        std::string name;
        std::cout<<"\n enter the employee name : ";
        std::cin>>name;
        int d;
        std::cout<<"\n enter the choice 0-Trainee 1-Developer 2-Hr 3-Manager 4-qanalyst";
         std::cin>>d;
        switch(d)
        {
            case designation::TRAINEE:desig= designation::TRAINEE;
                                     break;
            case designation::DEVELOPER:desig= designation::DEVELOPER;
                                     break;
            case designation::HR:desig= designation::HR;
                                     break;
            case designation::MANAGER:desig= designation::MANAGER;
                                     break;
            case designation::QANALYST:desig= designation::QANALYST;
                                     break;
            default:std::cout<<"\nno match";
                    break;
        }

     }

};
int main()
{
    // employee e;
    // e.showDetails();
    // employee e1(502,"nandu",designation::QANALYST);
    // e1.showDetails();
    employee e2;
    e2.readDetails();
    e2.showDetails();
    return 0;
}