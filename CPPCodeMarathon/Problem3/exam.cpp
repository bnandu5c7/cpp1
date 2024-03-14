#include "exam.h"

exam::exam():examCode(1),type(etype::OFFLINE),examDate(12,10,2012)
{
}

exam::exam(int code, etype t, date d):examCode(code),type(t),examDate(d)
{
}

void exam::display()
{
    std::cout<<" exam details : "<<std::endl;
    std::cout<<"exam code : "<<examCode<<std::endl;
    std::cout << "Exam Type: " << (type == etype::ONLINE ? "Online" : "Offline") << std::endl;
    std::cout<<"date : "<<examDate.getDay()<<"/"<<examDate.getMonth()<<"/"<<examDate.getYear()<<std::endl;
}
