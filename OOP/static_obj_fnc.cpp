#include<iostream>
using namespace std;
class abc
{
    int a;
    public:
    void show()
    {
        cout<<endl<<a;
    }
};
int main()
{
    abc obj;
    obj.show();
    static abc obj1;
    obj1.show();
}