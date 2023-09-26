// friend function
#include<iostream>
using namespace std;
class rect
{
    friend rect sum(rect,rect);
    int l,b;

    public:
    void setData(int x,int y);
    int getArea()
    {
        return l * b;
    }

};
void rect ::setData(int x,int y)
{
    l = x, b = y;
}
rect sum(rect m,rect n)
{
    rect t;
    t.l =m.l + n.l;
    t.b =m.b + n.b;
    return t;
}
int main()
{
    rect r,s,Z;
    r.setData(5,6);
    cout<<"Area of rectangle is :"<<r.getArea()<<endl;
    s.setData(4,7);
    cout<<"Area of rectangle is :"<<s.getArea()<<endl;
    Z=sum(r,s); // 9 13
    cout <<"Area of rectangle is:"<<Z.getArea()<<endl;
}
