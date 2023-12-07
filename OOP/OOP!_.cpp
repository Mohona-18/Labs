#include<iostream>
using namespace std;
class A
{
private:
    int ar[5];
public:
    A operator+(int a)
    {
        A ob;
        for(int i=0;i<5;i++)
            ob.ar[i]=ar[i]+a;
        return ob;
    }
    void get()
    {
        cout<<"Enter 5 integer:- "<<endl;
        for(int i=0;i<5;i++)
            cin>>ar[i];
    }
    void display()
    {
        for(int i=0;i<5;i++)
            cout<<ar[i]<<" ";
    }
};
int main()
{
    int x;
    cout<<"Enter the value of x:- ";
    cin>>x;
    A ob1,ob2;
    ob1.get();
    ob2=ob1+x;
    cout<<"Original values:- "<<endl;
    ob1.display();
    cout<<"\nIncreamented values:- "<<endl;
    ob2.display();
    return 0;
}