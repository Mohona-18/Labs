#include<iostream>
using namespace std;
class abc
{
    int n;
    int *arr;
    int s;
    public:
    void input()
    {   s=0;
        cout<<"Enter n"<<endl;
        cin>>n;
        arr=new int[n];
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
    obj.input();
    obj.display();
    return 0;
}