#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream in("STR.TST");
	char str[30];
	in >> str;
	cout << str <<endl;
	return 0;
}
