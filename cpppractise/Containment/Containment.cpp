#include "Containment.h"

Containment::Containment()
{
    pincode=101;
    city="hyderabad";
}

Containment::Containment(int pcode, std::string location)
{
  pincode=pcode;
  city=location;
}

void Containment::display()
{
    std::cout<<"  pincode  "<<pincode<<" and location is "<<city;
}
