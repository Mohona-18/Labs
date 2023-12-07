//seekg() and tellg()are member function of ifstream class and
//seekp() and tellp() are the member function of ofstream class
#include <iostream>
#include<fstream>

using namespace std;

int main() 
{
 
 ofstream outf;
 outf.open("test",ios::out);
 outf<<"c plus plus class\n";
 outf.close();
 ifstream fin;
 fin.open("test",ios::in);
 fin.seekg(0,ios::end);
 int m=fin.tellg();
 cout<<"m="<<m<<endl;
 char ch;
 for(int i=1;i<=m;i++)
 {
     fin.seekg(-i,ios::end);
     //fin>>ch;
     
     fin.get(ch);
     
cout<<ch;
 }
 
 fin.close();
	return 0;
}