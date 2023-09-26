#include<iostream>
using namespace std;
class base
{
    protected:
    int rollNo;
    char Sname[20];
    float maths,sci,eng,total;
    float ctotal()
    {
        return maths+sci+eng;
    }
    public:
    void sdata()
    {
        cout<<"enter student roll no:";
        cin>>rollNo;
        cout<<"enter student name:";
        cin>>Sname;
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter science marks:";
        cin>>sci;
        cout<<"enter english marks:";
        cin>>eng;
        total = ctotal();
    }
    
};

 class derived : public base
{
    public:
    showdata()
    {
    cout<<"student no:"<<rollNo<<endl;
    cout<<"student name:"<<Sname<<endl;
    cout<<"maths marks:"<<maths<<endl;
    cout<<"science marks:"<<sci<<endl;
    cout<<"english marks:"<<eng<<endl;
    cout<<"total marks:"<<total<<endl;
    
   
    }
};

int main()
{
    derived r;
    r.sdata();
    r.showdata();
}
