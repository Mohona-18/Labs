#include<iostream>
using namespace std;
class a
{
    int a[5];
    public:
   void getdata()
    {
        for(int i=0;i<5;i++)
        cin>>a[i];
    }
    void operator+(int x)//can be performed on any arithmetic operator
    {
        for(int i=0;i<5;i++)
        a[i]+=x;
    }

    void show()
    {
        for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    }
};
int main()
{
    a obj,obj2;
    cout<<"Enter"<<endl;
    obj.getdata();
   obj+(4);
  //obj2=obj.operator+(4);
    cout<<"Display :4 is added"<<endl;
    obj.show();
  //obj2.show();
}