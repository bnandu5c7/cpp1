#include<iostream>
#include "train.h"
int calFareAmt(int distance)
{    
    if(distance>100 && distance<500)
    {
        std::cout<<" your fare price is "<<800<<" Rs"<<std::endl;
    }
    else if(distance>=500 && distance<1000)
    {
         std::cout<<" your fare price is "<<900<<" Rs"<<std::endl;
    }
    else if(distance>=1000 && distance<1500)
    {
         std::cout<<" your fare price is "<<1100<<" Rs"<<std::endl;
    }
    else if(distance>=1500 && distance<3000)
    {
         std::cout<<" your fare price is "<<1300<<" Rs"<<std::endl;
    }
    else{
         std::cout<<" your fare price is "<<2000<<" Rs"<<std::endl;
    }
}

int main()
{
    train t[5];
    for(int i=0;i<5;i++)
    {
        t[i].accept();
        std::cout<<"you have booked the train successfully "<<std::endl;
    }
    for(int k=0;k<5;k++)
    {
        std::cout<<"==============="<<std::endl;
        t[k].display();
    }

    int tid;
    std::cout<<"enter the train  id : "<<std::endl;
    std::cin>>tid;
    // void search()
    // {
        for(int j=0;j<5;j++)
        {
            if(tid==t[j].getTnum())
            {
                std::cout<<" the train with id you are searching is found "<<std::endl;
                t[j].display();
            }
            else
            {
                std::cout<<"not found";
            }
         }
    // }
        // for(int j=0;j<5;j++)
        // {
        //     if(t[j].getTnum()== tid)
        //     {
        //         std::cout<<" the train with id you are searching is found "<<std::endl;
        //         t[j].display();
        //     }
        //     else
        //     {
        //         std::cout<<"not found";
        //     }
        //  }
    // int dist enter for for t[j].cal()
    // for(int j=0;j<5;j++)
    // {
    //     if(t[j].getTnum()==tid)
    //     {
    //         std::cout<<" the train with id you are searching is found "<<std::endl;
    //         t[j].display();
    //     }
    //     else{
    //         std::cout<<"not found";
    //     }
    // }
    int d;
    std::cout<<"enter the distance :"<<std::endl;
    std::cin>>d;
    std::cout<<calFareAmt(d);
}