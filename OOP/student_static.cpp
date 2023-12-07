#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int roll;
    char name[50];
    float t;
    static float avg;//static data member is a single copy that is shared by all objects
    public:
    void input();
    void totalavg(student *,int);
    static void printavg();//static member fnc can access only static data member 
    void display();
};
void student::input()
{
    cout<<"enter the roll\n";
    cin>>roll;
    cout<<"Enter the name\n";
    cin>>name;//pura naam mat dalna getline nhi h space tk hi lega...
    cin.ignore(100,'\n');//if ignore isnt mentioned ull notice that the control directly shifts to total
    //basically its done to flush the buffer srl basha mein input atak jata h usko flush kr k nikale ka
    //taaki further input ho
    cout<<"Total\n";
    cin>>t;
   
}
 void student::totalavg(student *x,int n)//parameter mein array of object ka first index ka address n size
{   int gtotal=0;
    for(int i=0;i<n;i++)
    {
        gtotal=gtotal+((x+i)->t);
    }
        avg=gtotal/n;//avg apna static data member
    
}
float student::avg;
int main()
{   int n,i;
    cout<<"Enter the no. of students\n";
    cin>>n;
    cout<<"Enter the students details\n";
    student *a=new student [n];
    student t;
    for(i=0;i<n;i++)
    {
        a[i].input();
       
    }
 
    for(i=0;i<n;i++)
    {
        a[i].display();
    }
     t.totalavg(&a[0],n);//t obj liye alag se bs call krne k liye
     student::printavg();//static memeber fnc ko aise bulate h
   return 0;
}
 void student::printavg()
{
    cout<<"Average "<<avg<<endl;
}
void student:: display()
 {
        cout<<"Roll no. "<<roll<<"\t"<<"Name "<<name<<"\t"<<" Total "<<t<<endl;

    }
   

