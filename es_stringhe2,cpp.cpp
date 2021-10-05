#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char p1[20];
	char p2[20];
	cout << "Inserisci due stringhe \n" << endl;
	cin >> p1;
	cin >> p2;
	if (strcmp(p1,p2)==0)
		cout << "\n Le stringhe sono uguali \n";
	else 
		if (strcmp(p1,p2)>0)
			cout << "\n Le stringa p1 succede alla p2 sono diverse";
		else 
			cout << "\n La stringa p1 precede p2\n";
	cout << endl;
	return 0;
}
