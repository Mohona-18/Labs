//class template
#include <iostream>
using namespace std;
template <class T>

class Test 
{
    private:
        T x;
    public:
        Test(T a)
        {
            x=a;
        }
        void show()
        {
            cout<<"\nx="<<x<<endl;
        }
};
 int main()
 {
     Test <int> t1(5);
     Test <float> t2(4.8f);
     Test <char> t3('a');
     t1.show();
     t2.show();
     t3.show();
     return 0;
 }