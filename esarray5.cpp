#include <iostream>
#define N 100
// 10 8 6 7 5 4 3 2 1 //
// 8 10 6 7 5 4 3 2 1 //
// 6  10 8 7 5 4 3 2 1 //
// 5  10 8 7 6 4 3 2 1 //
// 4 10 8 7 6 5 3 2 1 //
// 3 10 8 7 6 5 4 2 1 //
// 2 10 8 7 6 5 4 3 1 //
// 1 10 8 7 6 5 4 3 2
using namespace std;
int main ()
{
	int x[N];
	int n,tmp;
	int k,j;
	int x1; // elemento incognito da cercare 
	int flag=0;
	cout << "\n Inserisci la dimensione dell'arry" << endl;
	cin >> n;
	for (k=0;k<n;k++)
	{
		cout << "\n Inserisci un elemento nel vettore\t";
		cin >> x[k];
	}
	for (k=0;k<n-1;k++)
		for (j=k+1;j<n;j++)
			if (x[k]>=x[j])
				{
					tmp=x[k];
					x[k]=x[j];
					x[j]=tmp;
				}
	cout << "\n elementi dell'array\n";
	for (k=0;k<n;k++)
			cout << x[k]<<"\t";
	cout << endl;
/*
	cout << "\n Inserici un numero da ricercare";
	cin >> x1;
		for (k=0;k<n;k++)
			if (x[k]==x1)
				cout << "\n Elemento trovato nell'array nella posizione :\t"<< k << endl ;
	cout << endl;
	k=0;
	while ((k<n)&&(flag==0))
		{
			if (x[k]==x1)
				{
						cout << "\n Elemento trovato nell'array nella posizione :\t"<< k << endl ;
						flag=1;
				}
			k++;
		}*/
	return 0;
}

