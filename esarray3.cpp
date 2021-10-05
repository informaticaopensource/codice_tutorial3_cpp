#include <iostream>
#define N 100
using namespace std;
int main ()
{
	int x[N];
	int n;
	int k;
	int x1; // elemento incognito da cercare 
	int flag=0;
	cout << "\n Inserisci la dimensione dell'arry" << endl;
	cin >> n;
	for (k=0;k<n;k++)
	{
		cout << "\n Inserisci un elemento nel vettore\t";
		cin >> x[k];
	}
	cout << "\n Inserici un numero da ricercare";
	cin >> x1;
	/*	for (k=0;k<n;k++)
			if (x[k]==x1)
				cout << "\n Elemento trovato nell'array nella posizione :\t"<< k << endl ;
	cout << endl;*/
	k=0;
	while ((k<n)&&(flag==0))
		{
			if (x[k]==x1)
				{
						cout << "\n Elemento trovato nell'array nella posizione :\t"<< k << endl ;
						flag=1;
				}
			k++;
		}
	return 0;
}

