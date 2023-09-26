#include<iostream>
using namespace std;
class batsman
{
     int bcode;
     char bname[20];
     int innings,notout,runs,batavg;
     float calcavg()
     {
        batavg=runs/(innings-notout);
     }
     public:
    void setdata()
    {
    
        cout<<"enter bcode:";
        cin>>bcode;
        cout<<"enter bname:";
        cin>>bname;
        cout<<"enter innings:";
        cin>>innings;
        cout<<"enter notout:";
        cin>>notout;
        cout<<"enter runs:";
        cin>>runs;
        
        calcavg();
      // batavg=runs/(innings-notout);
        
    }
      void displaydata()
      {
           
        cout<<"bcode:"<<bcode<<endl;
        cout<<"bname:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"batavg:"<<batavg<<endl;
         
      }
};
  int main()
  {
    batsman p;
    p.setdata();
    p.displaydata();
  }