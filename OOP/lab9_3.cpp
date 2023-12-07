#include<iostream>
#include<stdbool.h>
using namespace std;
template <class T>
class search
{
    T s;int n;
    T a[];
    public:
   
    void input()
    {   cin>>n;
        for(int i=-0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter key"<<endl;
        cin>>s;
    }
    void searching()
    {   int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==s)
            c++;
        }
        if(c>0)
        cout<<"Found"<<endl;
        else
        {
            cout<<"Not found"<<endl;
        }   
    }
};
int main()
{   
     search<int>obj1;
     obj1.input();
     obj1.searching();
/*search<double>obj2;
     obj2.input();
     obj2.searching();

search<char>obj3;
     obj3.input();
     obj3.searching();*/

     
}
