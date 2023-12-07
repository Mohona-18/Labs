//class template
#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>

class Test 
{
    private:
        T1 x;
        T2 y;
    public:
        Test(T1 a, T2 b)
        {
            x=a;
            y=b;
        }
        void show()
        {
            cout<<"\nx="<<x<<endl;
            cout<<"\ny="<<y<<endl;
        }
};
 int main()
 {
     Test <int, float> t1(5,3.2f);
     Test <float, char> t2(4.8f,'m');
     Test <char, int> t3('a',8);
      t1.show();
     t2.show();
     t3.show();
     return 0;}