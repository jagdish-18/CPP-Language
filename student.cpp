#include<iostream>
using namespace std;
class student{
   int adminNO;
   char sname[20];
   float eng,maths,sci,total;
   float ctotal(){
     return eng+maths+sci;
   }
   public:
   void takedata()
   {
    cout<<"enter admin no:";
    cin>>adminNO;
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
    cout<<"admin no:"<<adminNO<<endl;
    cout<<"student name:"<<sname<<endl;
    cout<<"enlish marks:"<<eng<<endl;
    cout<<"maths marks:"<<maths <<endl;
    cout<<"scince marks:"<<sci<<endl;
    cout<<"total marks:"<<total<<endl;

   }
};
   int main()
   {
    student s;
    s.takedata();
    s.showdata();
   }