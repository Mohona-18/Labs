#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char a[50];
    public:
    void getdata()
    {
        cin>>a;
    }
    void operator+(String x)
    {
       
        strcat(x.a,this->a);
        cout<<x.a<<endl;
    }
    void operator=(String &obj)
    {
        String s;
        strcpy(s.a,obj.a);
        cout<<s.a<<endl;
    }
    void operator+=(String str1)
{   
   if(strcmp(this->a,str1.a)==0)
     cout<<"Equal"<<endl;  //strings are equal
	 
     else
     {
         cout<<"Not Equal"<<endl;
     }
    
}
void show()
{
    cout<<a<<endl;
}


};
int main()
{
    String s1,y;cout<<"Enter two strings"<<endl;
    s1.getdata();
   // s1.show();
     String x;
        x.getdata();
    s1+x;cout<<"Enter the string for copy"<<endl;
    y.getdata();
    s1=y;
  //  s1.show();
   // x.show();
    s1+=x;
   string zz;
   cin>>zz;
   cout<<zz;

}