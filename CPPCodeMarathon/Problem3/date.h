#ifndef DATE_H
#define DATE_H
#include<iostream>
class date{
 unsigned int day;
 unsigned int month;
 unsigned int year;
 static unsigned int monthsperyear;
 public:
   date();
   date(unsigned int,unsigned int,unsigned int);
   int checkday(unsigned int);
   void print();

   unsigned int getDay() const { return day; }
   void setDay(unsigned int day_) { day = day_; }

   unsigned int getMonth() const { return month; }
   void setMonth(unsigned int month_) { month = month_; }

   unsigned int getYear() const { return year; }
   void setYear(unsigned int year_) { year = year_; }
};


#endif // DATE_H
