#include<iostream>
using namespace std;
class time1
{
	int h;
	int m;
	int s;
	public :
    time1()
    {
        cout<<"Enter hr min and sec"<<endl;
        cin>>h>>m>>s;
    }
    time1(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
	//void input();
	void  display()
	{
		cout<<h<<":"<<m<<":"<<s<<endl;
	}
void  add(time1 a,time1 b)
{
	//time c;
	 //c.s=c.m=c.h=0;
	s=a.s+b.s;
	
	m=a.m+b.m+s/60;
	h=a.h+b.h+h/60;
	m=m%60;
	s=s%60;
}
	};
int main()
{   time1 a;
    time1 b;
    time1 t(0,0,0);
//a.input();
//b.input();
t.add(a,b);
t.display();
return 0;
}

