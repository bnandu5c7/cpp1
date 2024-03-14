#include "bike.h"
#include "vehicle.h"
#include "car.h"
int main()
{
     int csize,bsize;
     std::string chanum;
     std::cout<<"enter the size of car inventory.."<<std::endl;
     std::cin>>csize;
     std::cout<<"enter the size of bike inventory.."<<std::endl;
     std::cin>>bsize;
     vehicle *bikeInventory=new bike[bsize];
     vehicle *carInventory=new car[csize];
     std::cout<<"enter the bike details..."<<std::endl;
     for(int i=0;i<bsize;i++)
     {
        bikeInventory[i].readDetails();
     }
     std::cout<<" enter the car details...."<<std::endl;
     for(int j=0;j<csize;j++)
     {
        carInventory[j].readDetails();
     }
//      #include "Vehicle.h"
// #include "Car.h"
// #include<iostream>
 
// int main()
// {
//     int size = 3;
//     Vehicle *v[size];
   
//     for(int i=0;i<size; i++)
//     {
//         std::cout << "-------------" << std::endl;
//         std::cout << "Enter details for vehicle :" << i << std::endl;
//         v[i] = new Car;
//         v[i]->accept();
//     }
//     for(int i=0; i<size; i++)
//     {
//         v[i]->display();
//     }
//     // ----- display details based on chassis no
//     std::string cno;
//     std::cout << "Enter chassis no:" << std::endl;
//     std::cin >> cno;
//     for(int i=0; i<size; i++)
//     {
//         if(v[i]->getChassisNumber()==cno)
//         {
//             v[i]->display();
//             break;
//         }
//     }    
 
//     std::cout << "Enter a category 0-SUV 1-HATCHBACK 2-SEDAN:" <<std::endl;
//     int cat;
//     std::cin >> cat;
//     int countCat = 0;
//     // since v is of type vehicle pointer.... to call getCarCategory we need to cast vehicle to car
//     Car *car;
//     for(int i=0; i<size; i++)
//     {
//         car = dynamic_cast<Car*>(v[i]);
//         if(car==0)
//         {
//             std::cout << "Casting failed..." << std::endl;
//             break;
//         }
//         if(car->getCarCategory()==(CarCategory)cat)
//         {
//             countCat++;
//         }
       
//     }
   
//     std::cout << cat << " Category count: " << countCat << std::endl;
 
//     // -------------------------------
 
//     double avgPrice=0;
//     for(int i=0; i<size; i++)
//     {
//         car = dynamic_cast<Car*>(v[i]);
//         if(car==0)
//         {
//             std::cout << "Casting failed..." << std::endl;
//             break;
//         }
//         if(car->getCarCategory()==(CarCategory)cat)
//         {
//             avgPrice += car->getExShowroomPrice();
//         }  
//     }
//     std::cout << "Average price of cars in "<< cat <<" category is: " << avgPrice/countCat << std::endl;
 
 
 
 
//     return 0;
}

}