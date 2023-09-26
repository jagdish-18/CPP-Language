#include<iostream>
using namespace std;
class base
{
     protected:
     int a=1,n;
     public:
     void setA()
     {
        cout<<"enter n:";
        cin>>n;
     }
    
};
class fectorial : public base
{
    int i;
    public:
    void showA()
    {
         for(i=1;i<=n;i++)
         {
            a=a*i;
            cout<<"factorail:"<<i<<"="<<a<<endl;
         }
    
    }
};

int main()
{
    fectorial f;
    f.setA();
    f.showA();
}