
#include<iostream>
using namespace std;
class small
{
	public:
		int a;
	small(int z)
	{
		
		a=z;
	}
	small mem(small x)
	{
		if(x.a<this->a)
		return(x);
		else
		{
		
		return(*this);
	}
	}
};
int main()
{
	int z,x;
	cout<<"Enter the 1 st number\n";
	cin>>z;
	cout<<"Enter the 2 st number\n";
	cin>>x;
	small ob1(z);
	small ob2(x);
	small b=ob1.mem(ob2);
	cout<<"The Smallest \n"<<b.a;
}