#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int age; 
	string name;
	ofstream out("text");//write
    cin>>name;
    out<<name<<"\t";
    cin>>age;
	out<<age;
	out.close();
	ifstream in("text");//read
	in>>name;
	cout<<name<<endl;
	in>>age;
	cout<<age;
	in.close();
	return 0;
}