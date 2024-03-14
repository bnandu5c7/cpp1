#include<iostream>

enum Category{ PRIMARY , SECONDARY };
class Student
{
   unsigned int rollno;
   std::string sname;
   enum Category scat;
   int *marks;
   int numberofsub;
public:
   std::string getsname()const { return sname;}
   Student():rollno(1),sname("Pooja"),scat(Category::PRIMARY),numberofsub(2)
   {   marks=new int[numberofsub];
       marks[0]=0;
       marks[1]=0;
   }
   Student(int r,std::string name,enum Category c,int ns,int *mk)
   :rollno(r),sname(name),scat(c),numberofsub(ns)
   {    marks=new int[numberofsub]; 
         for(int i=0;i<numberofsub;i++)
         {
            marks[i]=mk[i];
         }
   }
   void display()
   {
      std::cout<<" rollnumber = "<<rollno<<" Name = "<<sname;
      switch(scat)
      {
         case Category::PRIMARY : std::cout<<" PRIMARY ";
                                  break;
         case Category::SECONDARY : std::cout<<" SECONDARY ";
                                 break;
         default: std::cout<<" PRIMARY ";
      }
      for(int i=0;i<numberofsub;i++)
      {
         std::cout<<" "<<marks[i];
      }
      
   }

   void accept()
   {
      int cat;
      std::cout<<"\n Enter category 0-PRIMARY 1-SECONDARY";
      std::cin>>cat;
      switch(cat)
      {
         case Category::PRIMARY : 
                  scat = Category::PRIMARY;
                  break;
         case Category::SECONDARY : 
                  scat = Category::SECONDARY;
                  break;
         default:   scat = Category::PRIMARY;
      }
   }
   float calAvg()
   {
      float sum=0;
      for(int i=0;i<numberofsub;i++)
      {
         sum+=marks[i];
      }
      return sum/numberofsub;
   }


};

void search(Student s[],int n)
{
   bool flag=false;
   std::string name;
   std::cout<<"\n enter name to search student ";
   std::cin>>name;
   for(int i=0;i<n;i++)
   {
      if(s[i].getsname()==name)
      {
         s[i].display();
         flag=true;
         break;
      }
   }
   if(flag==false)
      std::cout<<"\n Not found ";
}
float findmaxavg(Student s[],int n)
{
   float *avg=new float[n];
   
   for(int i=0;i<n;i++)
   {
     avg[i]=s[i].calAvg();
     std::cout<<"\n avg ["<<i<<"] = "<<avg[i];
   }
   //logic to max avg
   float max=avg[0];
   for(int i=1;i<n;i++)
   {
      if(avg[i]>max)
         max=avg[i];
   }

   return max;
}
int main()
{
   int m1[3]={55,66,77};
   int m2[4]={77,88,99,64};
   int m3[2]={66,77};
   Student s[3]={{1,"Neha",Category::SECONDARY,3,m1},{2,"Priya",Category::SECONDARY,4,m2},
   {3,"Atul",Category::SECONDARY,2,m3}};
  
   search(s,3);

   float maxavg = findmaxavg(s,3);
   std::cout<<"\n max avg = "<<maxavg<<std::endl;
}