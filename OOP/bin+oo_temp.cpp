//class template to perform addition of two template type object using operator overloading
#include<iostream>
#include<string>
using namespace std;

template<class T>


class Test 
{
    private:
        T x;
        
    public:
        Test()
        {
            x=0;
        }
        Test(T);
        Test operator+(Test &);
        void show();
        
};

template <class T>
Test <T>::Test(T b)  
 {
            x=b;
 }
template <class T>
void Test <T>::show()     
{
    cout<<"\nx="<<x<<endl;
    //cout<<"\ty="<<y<<endl;
}
template <class T>
Test <T> Test <T>::operator+(Test <T> &ob2)
{
    Test <T> ob3;
    ob3.x=x+ob2.x;
    return ob3;
}
int main()
{
    Test <int> t1(5), t2(20),t3;
    t3=t1+t2;//t3=t1.operator+(t2);
    t1.show();
    t2.show();
    t3.show();
    Test <float> t11(20.5f),t22(15.5f),t33;
    t33=t11+t22;
    t11.show();
    t22.show();
    t33.show();
    return 0;
}