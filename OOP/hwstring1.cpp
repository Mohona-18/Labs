#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char str[20];
	cout<<"Enter the string\n";
	cin>>str;
	cout<<endl<<setw(10)<<setfill('*')<<str<<setw(7)<<setfill('*')<<" ";
return 0;
}
