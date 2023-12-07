//multiple catch statement
#include<iostream>
using namespace std;
void num (int k)
{
    try
    {
        if (k==0) throw k;
        else
        if (k>0) throw 'p';
        else
        if (k<0) throw .0;
        cout<<"*** try block ***"<<endl;
    }
    catch(int k)
    {
        cout<<"A null value Exception caught "<<endl;
    }
    catch(char m)
    {
        cout<<"Caught a positive value Exception"<<endl;
    }
    catch(double f)
    {
        cout<<"Caught a negative value exception"<<endl;
 }
    cout<<" try catch in num function "<<endl;
}
    

int main()
{
    num(0);
    num(5);
    num(-1);
    return 0;
}