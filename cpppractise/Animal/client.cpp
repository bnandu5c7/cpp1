#include<iostream>
#include "dog.h"
int main()
{
    Animal *obj= new dog();
    obj->makeSound();
    obj->eat();
    // dog d;
    //  dog d1("black",'m',2,"pet dog",5);
    //  d1.makeSound();
    // // d.makeSound();
    // d1.eat();
    return 0;
}