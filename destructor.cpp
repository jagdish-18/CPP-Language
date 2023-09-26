#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"default constructor is called...."<<endl;
    }
    ~test()
    {
        cout<<"destructor is called....."<<endl;
    }
    test(int a)
    {
        cout<<"parameterized contructor is called.....\na:"<<a<<endl;
    }
    test(char a)
    {
        cout<<"parameterized contructor is called.....\na:"<<a<<endl;
    }
};
int main()
{
    test a('z'),t(150),asd;
}