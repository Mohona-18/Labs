//file opening modes
//ios::in  //read mode
//ios::out  //write mode
//ios::app   //append mode
//ios::trunc   //erase the file contents if the file is present
//ios::nocreate //if the file doesnot exist, it cant' open
//ios::noreplace // open files if its already present
//ios::binary
#include <iostream>
#include<fstream>

using namespace std;

int main() 
{
 int m;
 ofstream outf;
 outf.open("test",ios::out);
 outf<<"c plus plus class\n";
 outf.close();
outf.open("test",ios::app);
 outf<<"welcome to class\n";
 outf.close();
 ifstream fin;
 fin.open("test",ios::in);
 char str[60];
 while(fin.eof()==0)
 {
     fin.getline(str,60);
     m=fin.tellg();
     cout<<str<<"\t";
      cout<<m<<endl;
 }

 
 fin.close();
	return 0;
}