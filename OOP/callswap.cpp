#include<iostream>
using namespace std;
void swapv(int,int);
void swapref(int&,int&);
void swapadd(int*,int *);
 
int main()

{
	 int a=10,b=90;
	swapv(a,b);
cout<<"a=\t"<<a<<"b=\t"<<b<<endl;
	swapref(a,b);
cout<<"a=\t"<<a<<"b=\t"<<b<<endl;

	swapadd(&a,&b);
cout<<"a=\t"<<a<<"b=\t"<<b<<endl;

}
void swapv(int a,int b)
{
int t;
t=a;
a=b;b=t;


}
void swapref(int &a,int &b)
{
int t;
t=a;
a=b;b=t;

}
void swapadd(int *a,int *b)
{
int *t;
*t=*a;
*a=*b;*b=*t;


}

