//class type to basic type
#include <iostream>
using namespace std;

class Test 
{
    private:
        int a;
        float b;
    public:
    Test(int x, float y)
    {
        a=x;
        b=y;
    }
    operator int()
    {
        return a;
    }
    operator float()
    {
        return b;
    }
    void show()
    {
        cout<<"\na="<<a<<"\tb="<<b<<endl;
    }
};
int main()
{
	Test t1(5, 12.8f);//basic type(int) to class type(Test)
	t1.show();//constructor
	int x=t1;//operator int()
	float y=t1;//opearator float()
	cout<<"\nx="<<x<<"\ty="<<y;
	return 0;
}