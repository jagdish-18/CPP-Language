#include<iostream>
using namespace std;
class volume
{
    public:
    volume()
    {
        cout<<"default constructor is called...."<<endl;
    }
    volume(int a)
    {
        cout<<"cube is:"<<a*a*a<<endl;
    }
    volume(double pi,int b,int c)
    {
        cout<<"cylinder:"<<pi*b*c<<endl;
    }
    volume(int a,int b)
    {
        cout<<"prism:"<<a*b<<endl;
    }
    volume(int a,int b,int c)
    {
        cout<<"cuboid:"<<a*b*c<<endl;
    }
};
int main()
{
    volume a(),b(10),c(3.14,10,1),d(50,50),e(10,2,3);
}