#include<iostream>
using namespace std;
class Distance
{
    int a;
    int b;
    public:
            Distance(int x,int y)
           {
               a=x;
               b=y;
           }
    Distance operator +(Distance d22)
    {
        Distance t(0,0);
        t.a=a+d22.a;
        t.b=b+d22.b;
        return t;
    }
    friend Distance operator +(int k, Distance d22)
    {
        d22.a=k+d22.a;
       // d22.b=d22.b;

        return d22;
    }
    void show()
    {
        cout<<a<<"\t"<<b<<endl;
    }
};
int main()
{
    Distance D1(10,5);
 
    Distance D2(30,7);
    Distance D3(0,0);
    Distance D4(0,0);
    D3=D1+D2;
    D4=2+D1;
    D3.show();
    D4.show();

}