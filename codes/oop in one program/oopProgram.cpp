// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Animal
{ 
    private: //access specifier
     int legs=4;
     
    public:
     void size() //member function
     {
      cout<<"who is bigger"<<endl;
     }
     void getlegs()
     {
         cout<<"animal have "<<legs<< " legs"<<endl;
     }
};
class Dog:public Animal
{
  public:
   void size() //function overloading 
   {
        cout<<"dog is cute not bigger"<<endl;
   }
};

class Tiger:public Animal  //multiple inheritance
{
  public:
   void size()
   {
        cout<<"Tiger is  bigger not cute"<<endl;
   }
};

int main() 
{
    Animal a;
    Dog d;
    Tiger t;
    
    a.size();
    a.getlegs();
    d.size();
    d.getlegs();
    t.size();

    return 0;
}
