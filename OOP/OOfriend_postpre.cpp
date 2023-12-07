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
        

    friend Test operator++(Test,int);
     friend Test operator++(Test);
        void show()
        {
            cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
        }
        
};
 Test operator++(Test t1,int)
        {
            Test t2;
            t2.a=t1.a++;
            t2.b=t1.b++;
            return t2;
        }
Test operator++(Test t1)
        {
            Test t2;
           t2.a= ++t1.a;
            t2.b=++t1.b;
            return t2;
        }
       
int main()
{
    Test t1,t2,t3,t4;
    t1.getdata(3,4);
    t4.getdata(3,4);
     t1.show();//original
   // t2=-t1;
   cout<<"pre"<<endl;
  t2=++t1;
  t2.show();
  cout<<"Original"<<endl;
  t1.show();
  cout<<"Post"<<endl;
  t3=t4++;
  t3.show();
  cout<<"Original"<<endl;
  t4.show();


  //  t1.show();//changed
   //t2=-t1;//for return memfnc
    return 0;
}