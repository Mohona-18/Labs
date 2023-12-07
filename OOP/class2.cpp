#include<iostream>
using namespace std;
class student{
	int r;
	char name[20];
	float m[3];


	 public:float t;
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
{
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
{	int n;cout<<"Enter n\n";
	cin>>n;
	student s[n],temp;
	int i;
	for(i=0;i<n;i++)
	{
	s[i].input();
	s[i].cal();
	}for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(s[j].t>s[j+1].t)
			{
			temp=s[j];
			s[j]=s[j+1];
			s[j+1]=s[j];
			}
}
}

		
	cout<<"Display"<<endl;
	for(int i=0;i<n;i++)
	s[i].display();

return 0;
}
