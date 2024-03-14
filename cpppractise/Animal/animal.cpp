#include "animal.h"

Animal::Animal():color("brown"),gender('M'),age(12)
{
    std::cout<<"\n default cons of animal base class....";
}

Animal::Animal(std::string n, char g, int a):color(n),gender(g),age(a)
{
    std::cout<<"\n parameterized cons of animal class.....";
}
