#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void satA()
    {
        cout<<"enter a:";
        cin>>a;
    }
};
class Derived1 : public base
{
    public:
    void square()
    {
        cout<<"square is:"<<a*a<<endl;
    }
};
class Derived2 : public base
{
    public:
    void cube()
    {
        cout<<"cube is:"<<a*a*a<<endl;
    }
};
int main()
{
      Derived1 s;
      s.satA();
      s.square();

      Derived2 c;
      c.satA();
      c.cube();   
}