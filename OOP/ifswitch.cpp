#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,avg;
	cout<<"Enter the marks\n";
	cin>>m1>>m2>>m3;
	avg=(m1+m2+m3)/3;
	/*if(avg>=90)
	cout<<"grade o\n";
else if(avg>=80&&avg<90)
cout<<"grade e\n";
else if(avg>=70&&avg<80)
cout<<"grade a\n";
else
cout<<"pass\n";
*/
switch(avg)
{
case 90 ... 100:
cout<<"grade o\n";
break;
case 80 ... 89:
cout<<"grade e\n";
break;
case 70 ... 79:
cout<<"grade a\n";
break;
default:cout<<"pass\n";
}
return 0;
}

