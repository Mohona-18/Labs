#include <iostream>
using namespace std;

template <class T1, class T2>

void swap(T1 a, T2 b)
{
    cout<<"\na="<<a<<"\tb="<<b;
    T2 c;
    c=a;
    a=b;
    b=c;
    cout<<"\na="<<a<<"\tb="<<b;
}
/*void swap(int a, int b)
{
    cout<<"\na="<<a<<"\tb="<<b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"\na="<<a<<"\tb="<<b;
}*/
 int main()
 {
     swap(4,5);//swap(int,int) call 
     swap(5.2f, 8.2);
     swap(10,8.4f);
     swap('x','y');
     return 0;
 }