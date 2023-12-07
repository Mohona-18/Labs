#include <iostream>
using namespace std;
int main()
{   int x,y,z;
cout<<"Enter"<<endl;
cin>>x>>y;
z=(y==0)?1:0;
try
{
    if(z==0)
    cout<<"Divsion"<<x/y<<endl;
    else
        throw z;
    
    
}
catch(int z)
{
    cout<<"Exception occured in y "<<y<<endl;
}
cout<<"Exception handled"<<endl;
}


