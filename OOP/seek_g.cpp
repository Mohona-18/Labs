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
 cout<<outf.tellp();
 outf.close();
 outf.open("test",ios::app);
 cout<<outf.tellp();
 outf<<"Welcome to class\n";
 cout<<outf.tellp();
 outf.close();
 ifstream fin;
 fin.open("test",ios::in);
 char str[40];
 int m;
 
while(fin.eof()==0)
 {
    fin.getline(str,40);
    m=fin.tellg();
    cout<<str<<endl;
    cout<<m<<endl;
 }
 
 fin.close();
	return 0;
}