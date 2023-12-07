#include<iostream>
using namespace std;
void area_vol();
float area_vol(float);
void area_vol()
{   int r;
	cout<<"Enter the radius"<<endl;
	cin>>r;
	
	float a;
	a=3.14*r*r;
	cout<<"area of circle\t"<<a<<endl;
}
float area_vol(float r)
{
	
	float a;
	a=(4*r*r*3.14*r)/3;
	return a;
}
int main()
	{ int ch;float r;

	cout<<"1.circle area"<<endl;
	cout<<"2.sphere volume"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>ch;
	if(ch==1)
    area_vol();
	else if(ch==2)
{	cout<<"Enter the radius"<<endl;
	cin>>r;
	float v=area_vol(r);
	cout<<"Volume of sphere=\t";
	cout<<v<<endl;
}
else
cout<<"wrong choice\n";
return 0;
}
