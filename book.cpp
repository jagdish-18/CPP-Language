#include<iostream>
using namespace std;
class book
{
    int bookno;
    char bookname[20];
    float price;
    int bookcopies;
    float total;
    float total_cost()
    {
        return bookcopies * price;
    }
    public:
    void purchase()
    {
        cout<<"enter bookno:";
        cin>>bookno;
        cout<<"enter bookname:";
        cin>>bookname;
        cout<<"enter price:";
        cin>>price;
        cout<<"enter bookcopies:";
        cin>>bookcopies;
        //total=bookcopies*price;
        total=total_cost();
    }
    void displaydata()
    {
        cout<<"bookno:"<<bookno<<endl;
        cout<<"bookname:"<<bookname<<endl;
        cout<<"bookcopies:"<<bookcopies<<endl;
        cout<<"bookprice:"<<price<<endl;
        cout<<"total"<<total<<endl;
    }
};
 
   int main()
   {
      book p;
      p.purchase();
      p.displaydata();
   }