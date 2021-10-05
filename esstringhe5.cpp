#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char p1[20];
	char p2[20];
	char p3[50];
	char p4[50];
	char p5[10];
	cout << "\n Inserisci le due stringhe\n";
	cin.getline(p1,20);
	cin.getline(p2,20);
	memset(p3,0,50);
	strcat(p3,p1);
	strcat(p3,p2);
	cout << "La stringa risultate è: \n"<< p3 << endl;
	cout << "La lunghezza della stringa " << strlen(p3)<< endl;
	memset(p4,0,50);
	strcpy(p4,p3);
	cout << "La quarta stringha è:"<< p4 << endl;
	strncpy(p5,p4,10);
	cout << "La stringa p5 troncata da p4 " << p5 << endl;
	return 0;
}
