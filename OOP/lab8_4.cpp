#include<iostream>
using namespace std;
class A
{
	int n;
	public:
		void input(int n)
		{
			this->n=n;
		}
		void show()
		{
			cout<<"N: "<<n<<endl;
		}
};
int main()
{
	 A a;
	 a.input(5);
	 a.show();
	 return 0;
}