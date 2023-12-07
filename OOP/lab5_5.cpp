#include<iostream>
using namespace std;
class display
{   int a;
    float b;
    char c;
    public:
    void print();
    display(display &x)
    {
        a=x.a;
        b=x.b;
        c=x.c;
    }
    display()
    {
        a=5;
        b=10.5;
        c='c';
    }
};
int main()
{
    display x;
    display y=x;
   
   cout<<"x obj"<<endl;
    x.print();
    cout<<"Y obj "<<endl;
    y.print();
}
void display::print()
{
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}


