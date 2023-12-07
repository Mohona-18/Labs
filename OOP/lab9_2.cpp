//function template with single template argument
#include <iostream>
using namespace std;

template<class T>

void swap(T a, T b)
{
    T t=a;
    a=b;
    b=t;
    cout<<"\na="<<a<<"\t"<<"b="<<b;
}

int main()
{
    cout<<"\nSwapping of int values"<<endl;
	swap(4,5);
	cout<<"\nSwapping of float values"<<endl;
	swap(5.6f,7.8f);
	cout<<"\nSwapping of double values"<<endl;
	swap(10.2,15.6);
	return 0;
}