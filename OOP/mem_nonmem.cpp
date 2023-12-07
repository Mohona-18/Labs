#include<iostream>
using namespace std;
class a
{
    int a;
    public:
    void input(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }
};
void inputvalue()
{
    a obj;
    obj.input(10);
    obj.show();
}
int main()
{
    inputvalue();
}