#include "Product.h"

Product::Product()
{
    procode=105;
    price=500;
    pname="pen";

}

void Product::display()
{
    std::cout<<" product code "<<procode;
    std::cout<<price;
    std::cout<<pname;
    deliveryaddress.display();//call display function of Containment
}
