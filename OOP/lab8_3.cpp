#include<iostream>
using namespace std;
class base
{
	public:
	virtual	void show()
		{
			cout<<"This is base class"<<endl;
		}
		
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"This is derived class"<<endl;
		}
		
};
int main()
{
	base b;
	derived d;
	base *bptr = &b;
	bptr->show();
	bptr = &d;
	bptr->show();
}