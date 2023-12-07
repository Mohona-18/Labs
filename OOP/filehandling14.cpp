#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream Fil("hello.cpp",ios::in);
	Fil.seekg(0,ios::end);
	int iEnd;
	iEnd=Fil.tellg();
	cout << "The size of the file is " << iEnd << endl;
	Fil.seekg(-10,ios::end);
	int x;
	x=Fil.tellg();
	cout << "Right Now the Get Pointer is at   " << x << "position" << endl;
	int y;
	Fil.seekg(0,ios::beg);
	y=Fil.tellg();
	cout << "Right Now the Get Pointer is at   " << y << "position" << endl;
	Fil.close();
}