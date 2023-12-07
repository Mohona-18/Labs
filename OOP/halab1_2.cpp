#include <iostream>
using namespace std;
bool fnc(int ,int);
int main()
{	cout<<"Enter the two values\n";
	int a,b;bool r;
	cin>>a>>b;
	r=fnc(a,b);
if(r==true)
cout<<"Fine\n";
else
cout<<"Not fine\n";
return 0;
}
bool fnc(int a,int b)
{
	if(a==10||b==10||a+b==10)
	return true;
	else
	return false;
}



