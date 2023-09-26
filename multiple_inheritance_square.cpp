#include<iostream>
using namespace std;
class base1
{
    protected:
    int n;
    public:
    void setA()
    {
        cout<<"enter n:";
        cin>>n;
    }

};
class base2