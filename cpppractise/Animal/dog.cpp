#include "dog.h"

dog::dog():dtype("domestic dog")
{
    std::cout<<"\n defualt cons of dog class..."<<dtype;
}

dog::dog(std::string c, char s, int y, std::string type, int span):Animal(c,s,y),dtype(type),lifespan(span)
{
    std::cout<<"\n parameterised cons of dog class....";
}

void dog::makeSound()
{
    std::cout<<" \n color of dog is "<<color;
    std::cout<<" \n type of dog is "<<dtype<<"\n dog is barking like BOw..Bow..."<<" \n life span is "<<lifespan;
}

void dog::eat()
{
    std::cout<<"\n dog is eating biscuits....";
}
