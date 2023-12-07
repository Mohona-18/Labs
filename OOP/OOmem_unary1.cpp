#include <iostream>
using namespace std;

class Test 
{
    private:
        int a,b;
    public:
        void getdata(int x, int y)
        {
           a=x;
           b=y;
        }
     /*   Test operator-()
        {
            Test t2;
            t2.a=-a;
            t2.b=-b;
            return t2;
        }*/
        void operator-()
        {
           // Test t2;
            a=-a;
            b=-b;
            
        }
        void show()
        {
            cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
        }
        
};
int main()
{
    Test t1,t2;
    t1.getdata(3,4);
     t1.show();//original
   // t2=-t1;
   -t1;
    t1.show();//changed
   //t2=-t1;//for return memfnc
    return 0;
}