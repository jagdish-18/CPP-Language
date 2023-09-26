#include<iostream>
using namespace std;
class flight
{
      char flightname[50];
      int flightNO;
      char Destination[50];
      int Distance;
      float Fuel;
      public:
      int CALFUEL() 
      {
        if(Distance<=1000)
        {
            return 500;
        }
        else if(Distance<=2000)
        {
            return 1100;
        }
        else if(Distance>2000)
        {
            return 2200;
        }
      } 
      void FEEDINFO()
      {
        cout<<"enter flight name:";
        cin>>flightname;
        cout<<"enter flight no:";
        cin>>flightNO;
        cout<<"enter flight destination:";
        cin>>Destination;
        cout<<"enter flight distance:";
        cin>>Distance;
        Fuel=CALFUEL();

      }
      void SHOWINFO()
      {
        cout<<"flight name:"<<flightname<<endl;
        cout<<"flight no:"<<flightNO<<endl;
        cout<<"flight destination:"<<Destination<<endl;
        cout<<"flight distance:"<<Distance<<endl;
        cout<<" fuel"<<Fuel<<endl;
        
      }   
};
  int main()
  {
    flight f;
    f.FEEDINFO();
    f.SHOWINFO();
  }