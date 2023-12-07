#include<iostream>
using namespace std;
inline void large(int,int,int);
int main()
{	int a,b,c;
	cout<<"Enter three nos"<<endl;
	cin>>a>>b>>c;
	large(a,b,c);
	return 0;
}
inline void large(int a,int b,int c)
{
	if(a>b)
{
if(a>c)
cout<<"largest no is\t"<<a<<endl;
else
cout<<"Largest no is \t"<<c<<endl;
}
else
{
if(b>c)
{
cout<<"Largest no is"<<b<<endl;
}
else
cout<<"largest no is"<<c<<endl;
}
}

