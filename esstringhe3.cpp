#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char p1[20];
	char p2[20];
	char p3[50];
	cout << "\n Inserisci le due stringhe\n";
	cin.getline(p1,20);
	cin.getline(p2,20);
	memset(p3,0,50);
	strcat(p3,p1);
	strcat(p3,p2);
	cout << "La stringa risultate è: \n"<< p3 << endl;
	cout << "La lunghezza della stringa" << strlen(p3)<< endl;
	return 0;
}
