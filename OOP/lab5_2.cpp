#include<iostream>
using namespace std;
class comp
{
    float x;
    float y;
    public:
    comp(){}
    comp(float a)
    {
        x=y=a;
    }
    comp(float a,float b)
    {
        x=a;y=b;
    }
        void add(comp t2)
    {
        comp n;
        n.x=x+t2.x;
        n.y=y+t2.y;
        n.display();
    }
    void display()
    {
        if(y<0)

        cout<<x<<y<<"i"<<endl;

        else
        cout<<x<<"+"<<y<<"i"<<endl;
        }
};

int main()
{int _0_=9;
    comp a(5.6);
    comp b(7,9);
    a.display();
    b.display();
    a.add(b);
}