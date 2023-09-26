#include<iostream>
using namespace std;
struct student
{
    int roll;
    char name[20];
    int m,s,e,t;
    float per;

};
int main()
{
    struct student a[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"=====================================================================";
        cout<<"enter roll no:";
        cin>>a[i].roll;
        cout<<"enter name:";
        cin>>a[i].name;
        cout<<"enter maths marks:";
        cin>>a[i].m;
        cout<<"enter sci marks:";
        cin>>a[i].s;
        cout<<"enter english marks:";
        cin>>a[i].e;

        cout<<"\n";

        cout<<"\n roll \t name \t maths \t sci \t english \t total \t per \t grade ";
        cout<<"=====================================================================";
        for(i=0;i<2;i++)
        {
            a[i].t=
        }




    }
}