#include <iostream>
using namespace std;
class a
{
    int x;
    public:
    a(){}    
 a(int z)
    {x=z;
        }    
    a small(a obj)
    {
        a c;
        if(this->x>obj.x)
        c.x=obj.x;
        else
        c.x=this->x;
        return c;
    }
    void display(){
    cout<<"The no. is "<<x<<endl;
    }
};
int main()
{   int m,n;
    a obj3;
    cout<<"Enter the value "<<endl;
        cin>>m;
cout<<"Enter the value "<<endl;
        cin>>n;
    a obj1(m);
    a obj2(n);
    obj1.display();
    obj2.display();
   obj3= obj1.small(obj2);
   cout<<"Smallest no"<<endl;
    obj3.display();
}