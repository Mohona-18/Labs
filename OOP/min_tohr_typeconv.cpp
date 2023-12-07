#include<iostream>
using namespace std;
class test1
{
    int m;
    public:
    test1(int x)
    {
        m=x;
    }
    int get()
    {
        return m;}
    void  show()
    {
        cout<<m<<endl;
    }
};
class test2
{
    float h;
    public:
    void operator=(test1 &t1)
    {
        h=t1.get()*0.0167;
    }
    void show()
    {
        cout<<h<<"hrs"<<endl;
    }

};
int main()
{
    test1 t1(75);
    t1.show();
    test2 t2;
    t2=t1;
    t2.show();
}

