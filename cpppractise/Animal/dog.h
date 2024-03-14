#include<iostream>
#include "animal.h"
class dog:public Animal{
    std::string dtype;
    int lifespan;
    public:
      dog();
      dog(std::string,char,int,std::string,int);
      void makeSound();
      void eat();
};