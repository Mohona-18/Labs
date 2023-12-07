#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   char s1[100],s2[100],c1[100],c2[100];
    ofstream out;
    out.open("State");//write
    cout<<"Enter state"<<endl;
    //s1="Jharkhand";
    cin>>s1;
    out<<"State 1:"<<s1<<"\t";
    cout<<"Enter state"<<endl;
    //s2="Maharashtra";
    cin>>s2;
    out<<"State 2:"<<s2<<"\t";
   
    out.close();
    /*// ofstream out;
     out.open("Capital");//write
    //cout<<"Enter state"<<endl;
    c1="Ranchi";
   // cin>>c1;
    out<<"Capital of State 1:"<<c1<<"\t";
    //cout<<"Enter state"<<endl;
    c2="Mumbai";
    //cin>>c2;
    out<<"Capital of State 2:"<<c2<<"\t";
   
    out.close();*/
    ifstream in;
   in.open ("State");//read
	in.getline(s1,100);
	cout<<s1<<"\t";
	//in>>s2;
	//cout<<s2<<endl;
	in.close();
     //ifstream in;
   /*  in.open("Capital");//read
	in>>c1;
	cout<<c1<<"\t";
	in>>c2;
	cout<<c2<<endl;
	in.close();*/
	
	return 0;
}