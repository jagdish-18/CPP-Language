#include<iostream>
using namespace std;
class test
{
    int testcode;
    char description[30];
    int nocandidate;
    float centerreqd;
    int calcntr()
    {
        return nocandidate/100+1;
    }
    public:
    void schedule()
    {
        cout<<"enter testcode:";
        cin>>testcode;
        cout<<"enter description :";
        cin>>description;
        cout<<"enter nocandidate:";
        cin>>nocandidate;

        centerreqd=calcntr();
    }
    void disptest()
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"centerreqd:"<<centerreqd<<endl;
    }
};
int main()
{
    test t;
    t.schedule();
    t.disptest();
}