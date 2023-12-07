#include <iostream>
using namespace std;
struct details{
    char name[50];
    int r;
    int m[5];
    int t=0;
    int p=0;
     void input();
    void totalpercent();
    void display();
    void sort(int n);
	

};
void limit(struct details*,int);
void sort(struct details*,int);
void details:: input()
{
    cout<<"Enter name\n";
    cin>>name;
    cout<<"Enter roll\n";
    cin>>r;
    cout<<"Enter marks of 5 subjects\n";
    for(int i=0;i<5;i++)
    cin>>m[i];
}
void details::totalpercent()
{
    for(int i=0;i<5;i++)
    {
        t=t+m[i];
    }
   // cout<<"Total "<<t<<"\n";
    p=((t*100)/250);
    //cout<<"Percent"<<p<<"\n";
}
void details:: display()
{
    cout<<"Name :"<<name<<"\n";
    cout<<"Roll no."<<r<<"\n";
    for(int i=0;i<5;i++)
     cout<<" marks in subject"<<i+1<<":"<<m[i]<<"\n";
    cout<<" Total"<<t<<"\n";
     cout<<" Percentage:"<<p<<"\n";
  
}
void limit(struct details *s,int n)

{    int ll,ul,c=0;
    cout<<"Enter first upper &then lower limit of percentage range\n";
    cin>>ul;
    cin>>ll;
for(i=0;i<n;i++)
	{
	    if(((s+i)->p)>=ll&&((s+i)->p)<<ul)
{ c++;
	    cout<<"Name\t"<<(s+i)->name<<" Percentage\t"<<(s+i)->p<<" in range"<<"\n";
	   }
else
c=-1;
}
if(c==-1)
printf("No such student\n");
}
void  sort(struct details *s,int n)
{ int i,j;
struct details temp;
  for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if((s+j)->t>(s+j+1)->t)
            { *temp=*(s+j+1);
            *(s+j+1)=*(s+j);
            *(s+j)=*temp;
            }
        }
    }
}
int main() {
    int i,j, n;
    cout<<"Enter the no.of students\n";
    cin>>n;
    
	details a[n],temp;
	for(i=0;i<n;i++)
	{
	    a[i].input();
a[i].totalpercent();
}
for(i=0;i<n;i++)
a[i].display();
limit(a,n);
sort(a,n);
for(i=0;i<n;i++)
a[i].display();
return 0;
}






