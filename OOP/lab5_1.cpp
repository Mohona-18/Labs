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
    void add(complex t2)
    {
        complex n;
        n.x=x+t2.x;
        n.y=y+t2.y;
        n.display();
    }
    void add(int m)
    {
        complex n;
        n.x=m+x;
        n.y=y;
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
{   int x,y,a,b;  
    cout<<"Enter a and b"<<endl;  
        cin>>a>>b;
	complex c1(a,b);
    cout<<"Enter a and b"<<endl;  
        cin>>x>>y;
    complex c2=complex(x,y);
	
	cout<<"display\n";
	c1.display();
	c2.display();
cout<<"Enter value"<<endl;
int k;
cin>>k;

	cout<<"Addition\n";
	c1.add(c2);
    cout<<"Add int"<<endl;
    c1.add(k);
	
}

