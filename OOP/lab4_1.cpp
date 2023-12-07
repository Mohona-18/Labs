#include<iostream>
using namespace std;
class rect
{
    int l,b; 
    public:
    void input();
    void area();
    friend void areadisplay(rect);
};
void rect:: input()
{
    cout<<"Enter length and breadth\n";
    cin>>l>>b;
}
void rect::area()
{
    cout<<"Member function invoked"<<endl;
    cout<<"Area="<<l*b<<endl;
}
void areadisplay(rect r)
{   cout<<"Friend function invoked"<<endl;
    cout<<"Area="<<r.l*r.b<<endl;
}
int main()
{
    rect r;
    r.input();
    r.area();
    areadisplay(r);
    return 0;
}