#include<iostream>
#include<string.h>
using namespace std;
class a
{
protected:
char s[10];
public:
a()
{
  cout<<"Enter\n";
  cin>>s;
}
};
class b:public a
{
    protected:
char str[10];
public:
b()
{
    cout<<"Enter \n";
    cin>>str;
}
/*void strconcat()
{
    strcat(str,s);
}
    */
};
class c:public b
{
    //protected:
    //char s1[20];
    public :
    void showdata()
    {
       strcat(s,str);
       //s1=s+str;
        cout<<"Output "<<s<<endl;
        //cout<<"Output"<<str;
    }
};
int main()
{  // b obj1;
//obj1.strconcat();
    c obj;
    obj.showdata();
    return 0;
}
