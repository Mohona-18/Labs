//basic to class type
#include <iostream>
using namespace std;

class Test 
{
    private:
        int a;
        float b;
    public:
    Test(int x)
    {
        a=x;
        b=2.8;
    }
    void show()
    {
        cout<<"\na="<<a<<"\tb="<<b<<endl;
    }
};
    

int main()
{
	int x=5;
	Test t1=x;//basic type(int) to class type(Test)
	t1.show();//constructor
	return 0;
}