//Binary input and output.
//character by character reading and writing
//by using get() and put() function.

#include <fstream>
#include<iostream>
#include <string.h>// For strlen()
using namespace std;
int main()
{
	ofstream outfile("CHRFILE.TST");
	char str[] = "Lead me from darkness to light";
	for(int i = 0; i <= strlen(str); i++)
	{
		outfile.put(str[i]);
	}
	outfile.close();
	ifstream infile("CHRFILE.TST");
	char chstr[80];
	int j = 0;
	while(infile.get(chstr[j++]));		// While the EOF character has not
								  								// been read
	cout << chstr;
	return 0;
}




