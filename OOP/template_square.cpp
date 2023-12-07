//function template with single template argument
#include <iostream>
using namespace std;

template<class T>

void sq(T a)
{   T x;
    x=a*a;
    cout<<x;
}

int main()
{
    cout<<"\nSquare of int values"<<endl;
	sq(4);
	cout<<"\nSquare of float values"<<endl;
	sq(5.6);
	cout<<"\nSquare of double values"<<endl;
	sq(10.2);
	return 0;
}