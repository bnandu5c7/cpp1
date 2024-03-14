#include<iostream>
class Animal
{
    // std::string color;
    // char gender;
    // int age;
    public:
    std::string color;
    char gender;
    int age;
     Animal();
     Animal(std::string,char,int);
     virtual void makeSound()=0;
     virtual void eat()=0; 

};