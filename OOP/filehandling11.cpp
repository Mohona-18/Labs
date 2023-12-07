#include "iostream.h"
#include "fstream"
int main()
{
	fstream Fil("studfile.dat",ios::in);

	Fil.seekg(0,ios::end);

	int iEnd;
	iEnd=Fil.tellg();

	cout << "The size of the file is " << iEnd << endl;

	cout << "Size of one Record is " << sizeof(student) <<endl;

	int iNorec=iEnd/sizeof(student);//number of records

	cout << "There are " << iNorec << "records in the file" << endl;
	return 0;
}