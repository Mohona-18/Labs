#include<iostream>
using namespace std;
class complex
{
    int x;int y;
    public:
    complex(int a=5,int b=5)
    {
        x=a;
        y=b;
    }
    complex (complex &obj)
    {
        x=obj.x;
        y=obj.y;
    }
    void multiply(complex &obj)
    {
        cout<<(x*obj.x)-(y*obj.y)<<"+"<<(y*obj.x)+(x*obj.y)<<"i"<<endl;
    }
    void show()
    {
        cout<< x<<" "<<y<<endl;
    }
};
int main()
{
    complex o(1,2);
    complex o2;
    complex o3=o2;
   // o.show();
    //o2.show();
    //o3.show();
    o3.multiply(o);

}