#include <iostream>
#include<fstream>

using namespace std;

int main() 
{
 //int m;
 ofstream outf;
 outf.open("test",ios::out);
 outf<<"c plus plus class\n";
 outf.close();
 outf.open("test",ios::app);
 outf<<"welcome to class\n";
 outf.close();
 ifstream fin;
 fin.open("test",ios::in);
 fin.seekg(0,ios::end);
 int m=fin.tellg();
 char ch;
 for(int i=1;i<=m;i++)
 {
     fin.seekg(-i,ios::end);
     fin>>ch;
     cout<<ch;
 }
 
 fin.close();
 return 0;
}
