#include<iostream>
using namespace std;
class abc
{
    int n;
    int *arr;
    int s;
    public:
    abc()
    {
        cout<<"Enter n"<<endl;
       cin>>n;
       s=0;
       arr=new int[n];
    }
    void inputelements()
    {   
        cout<<"Enter the elments"<<endl;
        for(int i=0;i<n;i++)
        {  cin>>arr[i];
        s+=arr[i];}
    }
    void display()
    {
         for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
        cout<<endl;
        cout <<"Sum of elements="<<s<<endl;
        
    }
};
int main()
{
    abc obj;
    obj.inputelements();
    obj.display();
    abc obj2;
     obj2.inputelements();
    obj2.display();
    return 0;
}