#include<iostream>
#include<math.h>
using namespace std;
class dm;
class db
{
    float f;
    float in;
    public:  db convert(dm &);
    void input()
    {
        cout<<"Enter the feet and inches\n";
        cin>>f>>in;
    }
    void show()
    {
        cout<<f<<" feets & "<<in<<" inches"<<endl;
    }
    friend void add(dm &,db&);
    //friend void display(dm&);
   // friend void display(db&);
};
class dm
{
    float m, cm;
    public:
    void input()
    {
        cout<<"Enter the m and cm\n";
        cin>>m>>cm;
    }
      void show()
    {
        cout<<m<<" metres & "<<cm<<" cm"<<endl;
    }
      //friend db db::convert(dm&);
    friend void add(dm&,db&);
    // friend void display(dm&);
    //friend void display(db&);
};

/*db db::convert(dm &obj)
{
    db ob;
    ob.f=obj.m*3.28084;
    ob.in=obj.cm*0.0328084;
    return ob;
}*/
void add(dm &ob1,db &ob2)
{   int i;
    cout<<"in m and cm\n";
    cout<<"in feet and inches\n";
    cout<<"Enter choice"<<endl;
    cin>>i;
    if(i==1)
{
    dm o1;
    o1.cm=ob1.cm+(ob2.in*2.5400004);
    o1.m=ob2.f*0.3048+ob1.m+(o1.cm/100);
    o1.cm=fmod(o1.cm,100);
    o1.show();
}
 if(i==2)
{
    db o2;
    o2.in=ob2.in+(ob1.cm*0.393701);
    o2.f=(ob1.m*3.2808417)+ob2.f+(o2.in/12);
    o2.in=fmod(o2.in,12);
    o2.show();
}
}
int main()
{
    dm obj1;
    obj1.input();
    obj1.show();
    db obj2;
    obj2.input();
    obj2.show();
    add(obj1,obj2);
}