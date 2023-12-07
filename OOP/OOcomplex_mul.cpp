#include<iostream>
#include <cmath>
using namespace std;
class complex
{   private:
    int x;
    int y;
    public:
    complex()
    {
        x=0;y=0;
    }
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        if(y<0)
        cout<<x<<y<<"i"<<endl;
    else
    cout<<x<<"+"<<y<<"i"<<endl;
    }
    friend complex operator*(complex,complex);
};
complex operator*(complex c1,complex c2)
{
    complex c3;
    c3.x=(c1.x*c2.x)-(c1.y*c2.y);
    c3.y=(c1.y*c2.x)+(c1.x*c2.y);
    return c3;
}
int main()
{
    complex c1(4,5),c2(4,-5),c3;
    c3=c1*c2;
    c3.show();
    return 0;
}