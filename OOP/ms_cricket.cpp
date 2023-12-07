#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class cricketer
{
protected:
char name[50];
int id,matches;
public:
cricketer(char *n,int i,int m)
{
    strcpy(name,n);
    id=i;
    matches=m;
}
};
class batsman:virtual public cricketer
{
protected:
int runs;
public:
batsman(char *n,int i,int m,int r):cricketer(n, i,m)
{
    runs=r;
}
};
class bowler:virtual public cricketer
{
protected:
int wickets;
public:
bowler(char *n,int i,int m,int w):cricketer(n, i, m)
{
    wickets=w;
}
};
class allrounder:public batsman,public bowler
{protected:
    int ba;
int wpm;
public:
allrounder(char *n,int i,int m,int w,int r):cricketer(n, i, m),batsman(n,i, m, r),bowler(n,i,m,w)
{ba=r/m;
wpm=w/m;
}
void show()
{
    cout<<name<<endl;
    cout<<id<<endl;
    cout<<matches<<endl;
    cout<<runs<<endl;
    cout<<wickets<<endl;
    cout<<ba<<endl;
    cout<<wpm<<endl;
}
};
int main()
{
allrounder a("Mohona",1905,16,500,20);
a.show();
return 0;
}