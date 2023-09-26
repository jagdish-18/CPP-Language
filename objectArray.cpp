// Array of object
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void setData()
    {
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;
    }
    void getData ()
    {
        cout<<"product of a and b is:"<<a*b<<endl;
    }
};
int main()
{
    test t[5];
    int i;
    for(i=0;i<2;i++)
    {
      //  cout<<"enter data of "<<i+1<<endl;
      cout<<"enter data of "<<i+1<<endl;
        t[i].setData();
    }
    cout<<endl<<endl;
    for(i=0;i<2;i++)
    {
        cout<<"Display data of "<<i+1<<endl;
        t[i].getData();
    }
}