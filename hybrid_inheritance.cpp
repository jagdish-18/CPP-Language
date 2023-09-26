#include<iostream>
using namespace std;
class base
{
    public:
    int a;
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
};

class Derived2
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"enter c:";
        cin>>c;
    }
};

class abc : public Derived1, public Derived2
{
    int d;
    public:
    void setD()
    {
        cout<<"enter d:";
        cin>>d;
    }
    void product()
    {
        cout<<"product is:"<<a*b*c*d<<endl;
    }
};
int main()
{
    abc a;
    a.setA();
    a.setB();
    a.setC();
    a.setD();
    a.product();
}