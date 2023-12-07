#include<iostream>
using namespace std;
class fact
{
    int n,f;
    public:
    void input()
    {
        cout<<"Enter n"<<endl;
        cin>>n;
       f= this->factorial(this->n);
    }
    int factorial(int n)
    {
        if(n==1)
        return 1;
        else
         return (n*factorial(n-1));
    }
    void show(){
        cout<<"Factorial of "<<n<<" is "<<f<<endl;
    }
};
int main()
{
    fact obj;
    obj.input();
    obj.show();
 //   cout<<"Result="<<result<<endl;
}