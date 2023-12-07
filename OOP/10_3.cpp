#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    string s[5];
    ofstream out;
    out.open("states");
    for(int i=0;i<2;i++)
    {
        cin>>s[i];
        out<<s[i]<<"\t";
    }
    out.close();
    out.open("capitals");
    {
        for(int i=0;i<2;i++)
    {
        cin>>s[i];
        out<<s[i]<<"\t";
    }
    }
    out.close();
    ifstream fin;
    char l[1000];
    fin.open("states");int i=0;
    while(fin)
    {
        fin.getline(l,100);
        cout<<l<<"\t";
    }
    fin.close();
    fin.open("capitals");
    while(fin)
    {
        fin.getline(l,100);
        cout<<l<<endl;
    }
    fin.close();
    return 0;

}