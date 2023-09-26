#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show() =0;
};

class Derived1 : public base
{
    public:
    void show()
    {
        cout<<"Derived 1 class show function called...."<<endl;
    }
};

class Derived2 : public base
{
    public:
    void show()
    {
        cout<<"Derived 2 class show function called...."<<endl;
    }
};
int main()
{
    base *p;
    Derived1 d;
    Derived2 d2;

    p = &d2;
    p -> show();

    p = &d;
    p -> show();
}

