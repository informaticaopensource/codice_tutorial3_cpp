#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string p1,p2;
	string p12;
	cout << "Inserisci due stringhe ";
	getline(cin,p1,'\n');
	getline(cin,p2,'\n');
	
	if (p1==p2)
		cout << "\n Le stringhe sono uguali \n";
	else
		cout << "\n Le stringhe sono diverse\n";
	p12= p1+ " "+ p2;
	cout << "\n La stringa concatenata "<< p12;
	return 0;
}
