#include<iostream>
using namespace std;
class test
{
    public:
    int clac(int a)
    {
        return a*a;
    }
    double clac(double a)
    {
        return a+a;

    }
    int clac(int a,int b)
    {
        return a*b;
    }
    double clac(double a,double b)
    {
        return a-b;
    }
};
int main()
{
    test t;
    cout<<"square is:"<<t.clac(10)<<endl;
    cout<<"addition<< is:"<<t.clac(10.2)<<endl;
    cout<<"product is:"<<t.clac(5,9)<<endl;
    cout<<"substriction is:"<<t.clac(10.2,6.3)<<endl;
}