#include<iostream>
using namespace std;

class player
{
    protected:
    char name[20];
    char g;
    int age;
};
class location
{
    protected:
    char city[20];
    int pin;
 //   int sec;
};
class physique:public player
{
    protected :
    int h;
    int w;

};
class games:public location,public physique
{
    protected :
    char game[20];
    public :
    void input()
    {
         cout<<"Name"<<endl;
        cin>>name;
        cout<<"gender"<<endl;
        cin>>g;
        cout<<"age"<<endl;
        cin>>age;
        cout<<"height"<<endl;
        cin>>h;
        cout<<"weight"<<endl;
        cin>>w;
        cout<<"City"<<endl;
        cin>>city;
        cout<<"pin"<<endl;
        cin>>pin;
    }
     void display()
    {
         cout<<"Name"<<endl;
        cout<<name;
        cout<<"gender"<<endl;
        cout<<g;
        cout<<"age"<<endl;
        cout<<age;
        cout<<"height"<<endl;
        cout<<h;
        cout<<"weight"<<endl;
        cout<<w;
        cout<<"City"<<endl;
        cout<<city;
        cout<<"pin"<<endl;
        cout<<pin;
    }
};
int main()
{
    games obj;
    obj.input();
    obj.display();
}