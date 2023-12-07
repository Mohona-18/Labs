#include <fstream.>
#include <iostream>
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
	ofstream Sfil("studfile.dat");

	char ch;
	student Svar;
	Svar.setRegno();
	Svar.setName();

	Sfil <<Svar.getRegno() << " " << Svar.getName();
	Sfil.close(); //Closes the open file
	cout << "\n Do you want to view the contents of a file (y/n)?";
	cin >> ch;
	if(ch == 'y')
	{
		ifstream Sfil("studfile.dat");
		int ireg;
		char nam[20];
		Sfil >> ireg >> nam;
		cout << "\n Registration Number is " << ireg;
		cout << "\n Student Name iis " << nam;
	}
}



