#include<iostream>
#include<cstring>
#include<fstream>
#include<ctype.h>
using namespace std;
int main()
{   char s[100];
cout<<"Enter a string"<<endl;
    ofstream out;
out.open("sentence");
cin.getline(s,100);
strcat(s,"\n");
for(int i=0;i<strlen(s);i++)
out.put(s[i]);
out<<"Name: Mohona Das\n";
out<<"Roll no.-1905756\n";//no-1905756 is one word since no space

out.close();char c;int sp=0,nl=0,a=0,d=0,k=0,w=0,r=0;
ifstream fin;
fin.open("sentence");
while(fin)
{
    c=fin.get();
    k++;
    if(c==' ')
    sp++;
    if(c=='\n')
    {nl++;

    }
    if(isdigit(c))
    d++;
    if(isalpha(c))
    a++;

}

fin.close();
cout<<"No. of characacters: "<<k<<endl;
cout<<"white space "<<sp<<endl;
cout<<"New line "<<nl<<endl;
cout<<"digit "<<d<<endl;
cout<<"Alpha "<<a<<endl;
cout<<"No. of words "<<sp+nl<<endl;//hr line k liye plus 1 krte h for no. of words so sp+nl
return 0;
}
