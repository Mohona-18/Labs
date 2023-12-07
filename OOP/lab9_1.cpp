//function template with single template argument
#include <iostream>
using namespace std;

template<class T>

void mini(T a,T b)
{   T x;
    x=(a>b)?a:b;
    cout<<x;
}

int main()
{
    cout<<"\nSquare of int values"<<endl;
	mini(4,5);
	cout<<"\nSquare of float values"<<endl;
	mini(5.6,10.5);
	cout<<"\nSquare of double values"<<endl;
	mini(10.2f,7.5f);
	return 0;
}