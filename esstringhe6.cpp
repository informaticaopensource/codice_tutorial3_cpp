#include <iostream>
#include <string>
using namespace std;
int main ()
{
	char *p;
	string p1,p2;
	cout << "Inserisci due stringhe ";
	getline(cin,p1,'\n');
	getline(cin,p2,'\n');
	
	if (p1==p2)
		cout << "\n Le stringhe sono uguali \n";
	else
		cout << "\n Le stringhe sono diverse\n";
	return 0;
}
