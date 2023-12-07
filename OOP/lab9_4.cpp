#include<iostream>
#include<stdbool.h>
using namespace std;
template <class T>
class sorting
{
    int n;
    T a[];
    public:
   
    void input()
    {   cin>>n;
        for(int i=-0;i<n;i++)
        {
            cin>>a[i];
        }
      
    }
    void sort()
    {       T t;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
           {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
        }
    }
    void show()
    {
         for(int i=-0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<endl;
    }
       
};
int main()
{   
     sorting<int>obj1;
     obj1.input();
     obj1.sort();
     obj1.show();
/*search<double>obj2;
     obj2.input();
     obj2.searching();

*/

     
}
