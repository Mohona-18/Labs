#include <iostream>
using namespace std;

class Test
{
    private:
        int x,y;
    public:
        Test()
        {
            x=0;
            y=0;
        }
        Test(int a, int b)
        {
            x=a;
            y=b;
        }
         Test operator +(Test t2)
         {
             Test t3;
             t3.x=x+t2.x;
             t3.y=y+t2.y;
             return t3;
         }
          Test operator -(Test t2)
         {
             Test t3;
             t3.x=x-t2.x;
             t3.y=y-t2.y;
             return t3;
         }
         friend Test operator*(Test,Test);
        
        void show()
        {
            cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
  
}
};
Test operator*(Test t1,Test t2)
{
    Test t3;
    t3.x=t1.x*t2.x;
    t3.y=t1.y*t2.y;
    return t3;

}
int main()
{
	Test t1(4,8), t2(5,10), t3,t4,t5;
	//t3=t1+t2;//alternatively 
    t3=t1.operator+(t2);
    t4=t1.operator-(t2);
    //Alternatively//t4=t1-t2;
//t5=operator*(t1,t2);
//aleternatively 
t5=t1*t2;
	t1.show();
	t2.show();
	t3.show();
    t4.show();
    t5.show();
		return 0;
}