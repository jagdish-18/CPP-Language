#include<iostream>
using namespace std;
class test
{
    int srollNO;
    char sname[20];
    float maths,sci,eng,total;
    float ctotal(){
     return eng+maths+sci;
   }
   public:
   void takedata()
   {
    cout<<"enter student roll no:";
    cin>>srollNO;
    cout<<"enter student name:";
    cin>>sname;
    cout<<"enter english marks:";
    cin>>eng;
    cout<<"enter maths marks:";
    cin>>maths;
    cout<<"enter science marks:";
    cin>>sci;
    total=ctotal();
   }
    void showdata()
   {
    cout<<"admin no:"<<srollNO<<endl;
    cout<<"student name:"<<sname<<endl;
    cout<<"enlish marks:"<<eng<<endl;
    cout<<"maths marks:"<<maths <<endl;
    cout<<"scince marks:"<<sci<<endl;
    cout<<"total marks:"<<total<<endl;

   }

   
};
int main()
{
    test t[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"enter student data of "<<i+1<<endl;
        t[i].takedata();
    }
    cout<<endl<<endl;
    for(i=0;i<2;i++)
    {
        cout<<"display data of student:"<<i+1<<endl;
        t[i].showdata();
    }
}
