#include <iostream>
using namespace std;
void carica (int x[],int d)
{
	int k;
	for (k=0;k<d;k++)
		{cout << "\n Inserisci gli elementi dell'array ";
		cin >> x[k];}
}
void stampa (int x[],int d)
{
	int k;
	cout << "Elementi del vettore"<< endl;
	for (k=0;k<d;k++)
		cout << x[k] << "\t";
	cout << "\nfine Stampa " << endl;
}
int somma(int x[],int d)
{
	int s=0;
	int k;
	for (k=0;k<d;k++)
		s=s+x[k];
	return s;
}
int main()
{
	int a[100],b[100];
	int s1;
	int n1,n2;
	cout << "\n Inserisci la dimensione del primo vettore ";
	cin >> n1;
	carica (a,n1);
	s1=somma(a,n1);
	cout << "Stampa dell'array\n";
	stampa (a,n1);
	cout << "La somma degli elementi è:\t" << s1 << endl;
	cout << "\n Inserisci la dimensione del secondo vettore ";
	cin >> n2;
	carica (b,n2);
	s1=somma(b,n2);
	cout << "Stampa dell'array\n";
	stampa (b,n2);
	cout << "La somma degli elementi è:\t" << s1 << endl;
	return 0;
}
