#include<iostream>
using namespace std;
class area
{
    public:
    area()
    {
        cout<<"default area is:"<<endl;
        
    }
    area(int l,int w)
    {
        cout<<"rectengle area is:"<<l*w<<endl;

    }
    area(int l)
    {
        cout<<"square area is:"<<l*l<<endl;
    }
    area(double a, double b,double h)
    {
        cout<<"triangle area is:"<<a*b*h<<endl;
    }
    area(double pi,int r)
    {
        cout<<"circle area is:"<<pi*r*r<<endl;
    }
};
int main()
{
    area d();
    area r(10,20);
    area s(20);
    area t(0.5,10,20);
    area c(3.14,10);
}