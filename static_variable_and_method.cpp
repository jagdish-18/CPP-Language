#include<iostream>
using namespace std;
class test
{
    int carRating;
    public:
    static int num;
    void setRating()
    {
        cout<<"enter car Rating:";
        cin>>carRating;
        num++;
    }
    void display()
    {
        cout<<"your Rating is :"<<carRating<<endl;
    }
    static  int number()
    {
        return num;
    }
};
int test :: num = 15;
int main()
{
    cout<<"starting stage:"<<test ::number()<<endl;
    test t1,t2,t3;
    t1.setRating();
    t1.display();

    t2.setRating();
    t2.display();

    cout<<"ending stage:"<<test ::number()<<endl;
}