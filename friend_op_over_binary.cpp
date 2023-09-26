#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    void setData(int x,int y,int z)
    {
        l=x,b=y,h=z;
    }
    int getvolume()
    {
        return l*b*h;
    }
    friend box operator+(box m,box n);
};
 box operator+(box m,box n)
{
    box t;
    t.l = m.l + n.l;
    t.b = m.b + m.b;
    t.h = m.h + n.h;
    return t;
}
int main()
{
    box b1,b2,b3;
    
    b1.setData(2,3,4);
    cout<<"volume of box b1 is:"<<b1.getvolume()<<endl;

    b2.setData(4,5,6);
    cout<<"volume of box b2 is:"<<b2.getvolume()<<endl;

    b3 = b1 + b2;
    cout<<"volume of box b3 is:"<<b3.getvolume()<<endl;


}
