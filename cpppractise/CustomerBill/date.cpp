#include "date.h"

date::date():day(2),month(3),year(2019)
{
    cout<<"defualt  cons of date..."<<endl;
}

date::date(int d, int m, int y):day(d),month(m),year(y)
{
   cout<<"parameterised cons of date "<<endl;
}

void date::accept()
{
    cout<<"enter the day : "<<endl;
    cin>>day;
    cout<<"enter  the month : "<<endl;
    cin>>month;
    cout<<"enter the year : "<<endl;
    if(month>=1 && month<=12)
    {
        if((month==2) && (day>=1 && day<=28))
         {
            cout<<"";
         }
        else if((month==1||month==3||month==5||month==7||month==8||month==10||month==12) && (day>=1 && day<=31))
        {
            cout<<"";
        }
        else if((month==4||month==6||month==9||month==11) && (day>=1 && day<=30))
        {
            cout<<"";
        }
        else
        {
            cout<<"you have entered wrong date "<<endl;
        }
    }
    else{
        cout<<"you have entered wrong month "<<endl;
    }
}

ostream &operator<<(ostream &out, const date &dobj)
{
  out<<" date : "<<dobj.day<<"/"<<dobj.month<<"/"<<dobj.year<<endl;
}
