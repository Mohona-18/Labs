#include<iostream.h>
#include<fstream>
void main()
{
	char fname[15],ch;
	int pos;
	cout<<"Enter File Name :";
	cin>>fname;
        cout<<fname<<endl;
	ifstream ifil;
	ifil.open(fname);
	ifil.seekg(0,ios::beg);
	while(ifil.read((char *)&ch,sizeof(char)))
	{
		cout<<ch;
	}
	ifil.close();
}
