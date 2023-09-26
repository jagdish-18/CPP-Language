#include<iostream>
using namespace std;
class bank
{
        char bankname[20]; 
        int acno;
        char name[50];
        float amt;
        int balance=10000;
        public:
        void getinfo()
        {
        cout<<"enter bank name:";
        cin>>bankname;
        cout<<"enter bank account:";
        cin>>acno;
        cout<<"enter user name:";
        cin>>name;
        
        }
        void deposit()
        {
            cout<<"enter deposite  amount:";
            cin>>amt;
            balance=balance+amt;
            cout<<" total deposite amount is:"<<balance<<endl;
        }
        void withdraw()
        {
            cout<<"enter withdraw amount is:";
            cin>>amt;
            if(amt<=balance)
            {
            balance=balance-amt;
            cout<<"your balance is:"<<balance<<endl;
            }
            else
            {
                cout<<"not balance ....."<<endl;
            }
        }
         void showbalance()
         {
            cout<<"total balance is:"<<balance<<endl;
         }

};
int main()
{
    bank b;
    
    int ch;
    while(ch !=5)
    {
       

        cout<<"1.deposite"<<endl;
        cout<<"2.withdrew"<<endl; 
        cout<<"3.balance"<<endl; 
        cout<<"enter your choice"<<endl;
        cin>>ch;

        switch (ch)
        {  
            case 1:
            b.getinfo();
            break;

            case 2:
            b.deposit();
            break;

            case 3:
            b.withdraw();
            break;

            case 4:
            b.showbalance();
            break;

            case 5:
            break;

            default:
            cout<<"wrong choice......"<<endl;
        }
    }
   
}
  