#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int roll;
    string name;
    char g;
    int a[3];
    int total=0;
    ofstream out("student");//write
    cout<<"Enter name"<<endl;
    cin>>name;
    out<<"Name:"<<name<<"\t";
    cout<<"Enter gender"<<endl;
    cin>>g;
	out<<"Gender:"<<g<<"\t";
    cout<<"Enter roll no."<<endl;
    cin>>roll;
    out<<"Roll No.:"<<roll<<"\t";
    cout<<"Enter the marks of three subject"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
          total=total+a[i];
    out<<"Marks of "<<i+1<<" :"<<a[i]<<"\t";
    out<<"Total"<<total;
    }
    out<<"Total"<<total<<endl;
    out.close();
     ifstream in("student");
    cout<<"Name:"<<name<<endl;
	cout<<"Gender:"<<g<<endl;
    cout<<"Roll No.:"<<roll<<endl;
    for(int i=0;i<3;i++)
    { 
   cout<<"Marks of "<<i+1<<" :"<<a[i]<<endl;
    }
    cout<<"Total"<<total<<"\t";
	in.close();

}
