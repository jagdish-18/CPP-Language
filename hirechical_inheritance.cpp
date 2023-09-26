#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a:";
        cin>>a;
    }
};
class Derived1 : public base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"enter b:";
        cin>>b;

    }
    void product()
    {
        cout<<"product of a and b is:"<<a*b<<endl;
    }
};
class Derived2 : public base
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"enter c:";
        cin>>c;

    }
    void add()
    {
        cout<<"addition of a and c is:"<<a+c<<endl;
    }
};
int main()
{
    Derived1 d1;
    d1.setA();
    d1.setB();
    d1.product();

    Derived2 d2;
    d2.setA();
    d2.setC();
    d2.add();
}
