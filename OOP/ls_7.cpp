#include<iostream>
#include<cstring>
using namespace std;
class Account
{
    int an;
    char name[50];
    float b;
    Account(int x,char *n,float y)
    {
        an=x;
        strcpy(name,n);
        b=y;
    }
    void show()
    {
        cout<<"Account name"<<name<<endl;
        cout<<"Account no."<<an<<endl;
        cout<<"BAlance"<<b<<endl;
    }
};
class Savings:virtual public Account
{
    float 

}