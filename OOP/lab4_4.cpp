#include<iostream>
using namespace std;
class complex
{
	float x;
float y;
public :
	void input();
	friend complex add(complex,complex);
	void display();
};
void complex::input()
{	
	cout<<"Enter the real part\n";
	cin>>x;
	cout<<"Enter the imaginary part\n";
	cin>>y;
}
void complex:: display()
{
if(y<0)

cout<<x<<y<<"i"<<endl;

else
cout<<x<<"+"<<y<<"i"<<endl;
}
complex add(complex t1,complex t2)
{
	complex a;
	a.x=t1.x+t2.x;
	a.y=t1.y+t2.y;
    return a;
}

int main()
{
	complex c1,c2,c3;
	c1.input();
	c2.input();
	cout<<"display\n";
	c1.display();
	c2.display();


	cout<<"Addition\n";
	c3=add(c1,c2);
    c3.display();
	
}


