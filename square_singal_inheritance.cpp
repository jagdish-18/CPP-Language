#include<iostream>
using namespace std;
class base
{
    protected:
    int i,n;
    public:
    void setA()
    {
        
        cout<<"enter n:";
        cin>>n;
       
    
    }
};
class Derived : public base
{
        int a;
        public:
        void getA()
        {
             for(i=1;i<=n;i++)
             {
       
             a=i*i;
            cout<<"no:"<<i<<"="<<a<<endl;
             }
        }
};
int main()
{
    Derived s;
    s.setA();
    s.getA();
}
