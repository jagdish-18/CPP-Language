#include<iostream>
using namespace std;
class test
{
    int carRating;
    public:
    static int num;     //declare
    void setRating()
    {
        cout<<"enter car Rating:";
        cin>>carRating;
        num++;
    }
    void display()
    {
        cout<<"your Rating is:"<<carRating<<endl;
    }

};
int test :: num = 15;
int main()
{
    cout<<"starting stage:"<<test ::num<<endl;
    test t1,t2,t3;
    t1.setRating();
    t1.display();

    t2.setRating();
    t2.display();

    cout<<"ending stage:"<<test ::num<<endl;
}