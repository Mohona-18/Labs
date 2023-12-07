#include<iostream>
using namespace std;
class student{
	int r;
	char name[20];
	float m[3];
float t;
	public:
	void input();
	void cal();
	void display();
};
void student ::input()
{
	cout<<"Enter the name \t roll no. \t marks of 3 subjects\n";
	cin>>name;
	cin>>r;
	for(int i=0;i<3;i++)	
	cin>>m[i];
}
void student ::cal()
{t=0.0;
for(int i=0;i<3;i++)
t=t+m[i];
}
void student ::display(){
cout<<"name\t:";
cout<<name<<endl;
cout<<"Roll no.\t";
cout<<r<<endl;
for(int i=0;i<3;i++)
cout<<"Marks\t"<<m[i]<<endl;
cout<<"Total\t"<<t<<endl;
}
int main()
{
	student s[2];
	int i;
	for(i=0;i<2;i++)
	{
	s[i].input();
	s[i].cal();
	s[i].display();
}
delete(s);
return 0;
}

