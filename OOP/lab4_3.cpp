#include<iostream>
using namespace std;
class one;
class second
{
    int n2;
    public:
    void input()
    {
        cout<<"Enter:";
        cin>>n2;
    }
    friend class one;
};
class one{
    int n1;
    public :
    void input()
    {
        cout<<"Enter";
        cin>>n1;
    }
    void great(second &ob)
    {
        if(n1>ob.n2)
        cout<<n1<<" is greater"<<endl;
        else
         cout<<ob.n2<<" is greater"<<endl; 
    }
};
    int main()
    {
        one obj1;
        obj1.input();
        second obj2;
        obj2.input();
        obj1.great(obj2);
    }
