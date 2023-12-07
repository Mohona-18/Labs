#include<iostream>
using namespace std;
class complex
{
    int x;
    int y;
    public:
    complex()
    {
        x=0;
        y=0;
    }
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    void subtract(complex t2)
    {
        complex n;
        n.x=x-t2.x;
        n.y=y-t2.y;
        n.display();
    }
    void display()
{
if(y<0)

cout<<x<<y<<"i"<<endl;

else
cout<<x<<"+"<<y<<"i"<<endl;
}
};
int main()
{
	complex c1(3,4);
    complex c2=complex(3,4);
	
	cout<<"display\n";
	c1.display();
	c2.display();


	cout<<"subtraction\n";
	c1.subtract(c2);
	
}

