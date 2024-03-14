#include "products.h"

void products::validate()
{
    std::cout<<"enter the quantity of product to purchase : "<<std::endl;
    std::cin>>quantityOfProductToPurchase;
    std::cout<<"enter the quantity of product in stock : "<<std::endl;
    std::cin>>quantityOfProductInStock;
    if(quantityOfProductToPurchase<quantityOfProductInStock)
    {
         std::cout<<"enter the product id : "<<std::endl;
         std::cin>>pid;
         int d;
         std::cout<<"enter the type of product you want 0-shirt 1-sweater 2-coat 3-jeans : "<<std::endl;
         std::cin>>d;
         switch(d)
         {
            case ptype::SHIRT:pname=ptype::SHIRT;
                              break;
            case ptype::SWEATER:pname=ptype::SWEATER;
                              break;
            case ptype::COAT:pname=ptype::COAT;
                              break;
            case ptype::JEANS:pname=ptype::JEANS;
                              break;
            default:pname=ptype::SWEATER;
                    break;
         }
         std::cout<<"enter the price : "<<std::endl;
         std::cin>>rate;
         std::cout<<"enter the brand : "<<std::endl;
         std::cin>>bname;
    }
    else{
        std::cout<<"sorry!!...quantity is less"<<std::endl;
    }   
}
void products::display()
{
    std::cout<<"product number : "<<pid<<std::endl;
    switch(pname)
    {
        case ptype::SHIRT:std::cout<<"you have choosen  Shirt"<<std::endl;
                            break;
        case ptype::SWEATER:std::cout<<"you have choosen  Sweater"<<std::endl;
                            break;
        case ptype::COAT:std::cout<<"you have choosen  coat"<<std::endl;
                            break;
        case ptype::JEANS:std::cout<<"you have choosen  Jeans"<<std::endl;
                            break;
        default:std::cout<<"you have choosen wrong option"<<std::endl;
                break;
    }
    std::cout<<"the quantity of product in stock : "<<quantityOfProductInStock<<std::endl;
    std::cout<<"the quantity of product to be purchased : "<<quantityOfProductToPurchase<<std::endl;
    std::cout<<" rate : "<<rate<<std::endl;
    std::cout<<" brand is "<<bname<<std::endl;
}
