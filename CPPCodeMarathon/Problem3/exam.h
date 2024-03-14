#ifndef EXAM_H
#define EXAM_H
#include<iostream>
#include "date.h"
enum etype{ONLINE,OFFLINE};
class exam {
 int examCode;
 enum etype type;
 date examDate;
 public:
  exam();
  exam(int,enum etype,date);
  void display();

  int getExamCode() const { return examCode; }
  void setExamCode(int examCode_) { examCode = examCode_; }

  enum etype getType() const { return type; }
  void setType(const enum etype &type_) { type = type_; }

  date getExamDate() const { return examDate; }
  void setExamDate(const date &examDate_) { examDate = examDate_; }
  
};


#endif // EXAM_H
