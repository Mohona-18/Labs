#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];int i;
	cout<<"Enter the string\n";
	cin.getline(str,20);
	
	for(i=1;i<=strlen(str);i++)
	
{cout.write(str,i);
	cout<<"\n";
}

return 0;
}
