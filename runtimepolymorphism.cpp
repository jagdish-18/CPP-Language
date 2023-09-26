// runtime polymorphism => virtual function
#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"base class show function called...."<<endl;
    }
};
class Derived : public base
{
    public:
    void show()
    {
          cout<<"Derived class show function called...."<<endl;
   
    }
};
int main()
{
    base *p,b;
    Derived d;

    p = &d;
    // p=&b;
    p ->show(); 
}