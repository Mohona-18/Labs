//Though user defined object can be written on to the
//file by usig the stream inserter or extractor, However
//a better and easier way to read from/write data to a file is
//by using binary functions like read() and write().
//Using binary function helps us to maintain security and
//easy accessibility of data from the file.


#include <fstream>
#include<iostream>
using namespace std;


class student
{
	private:
		int iReg_no;
		char cName[20];
	public:
		void setRegno()
		{
			cout << "\n Enter the Registration Number : ";
			cin >> iReg_no;
		}
		void setName()
		{
			cout << "\n Enter the name of the student : ";
			cin >> cName;
		}
		int getRegno()
		{
			return iReg_no;
		}
		char *getName()
		{
			return cName;
		}
};
void main()
{
	ofstream Sfil("studfile.dat");//for writing purpose.





	char ch;
	student Svar;
	while(1)
	{
		cout << "Want to enter new or more records\n";
		cin >> ch;
		if(ch == 'n')
			break;




		Svar.setRegno();
		Svar.setName();

		Sfil.write((char*)&Svar, sizeof(student));//binary writing function
	}
	Sfil.close();

	cout << "\n Do you want to view the contents of a file (y/n)?";
	cin >> ch;
	if(ch == 'y')
	{
		ifstream Sfil("studfile.dat");//for reading purpose


		Sfil.read((char*)&Svar, sizeof(student));
		while(Sfil)
		{
			cout << "\n Registration Number is " << Svar.getRegno();
			cout << "\n Student Name iis " << Svar.getName();
			Sfil.read((char*)&Svar, sizeof(student));
		}
	}
}



