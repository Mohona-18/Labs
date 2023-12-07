//function template with single template argument
#include <iostream>
using namespace std;

template<class T>

void add(T a,T b)
{   T x;
    x=a+b;
    cout<<x;
}

int main()
{
    cout<<"\nSum of int values"<<endl;
	add(4,6);
	cout<<"\nSum of float values"<<endl;
	add(5.6,7.2);
	cout<<"\nSum of double values"<<endl;
	add(10.2f,1.5f);
	return 0;
}