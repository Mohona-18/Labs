//exception 1
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"\n Enter values of x and y\n";
    cin>>x>>y;
    int j;
    j=x>y? 0:1;
    
    try
    {
        if (j==0)
            cout<<"Substration (x-y)="<<x-y<<endl;
        else 
            throw j; 
    }
    catch(int k)
    {
        cout<<"Exception caught : j ="<<j<<endl;
    }
    return 0;
}