#include <iostream>
using namespace std;
int main ()
{
	float x[10];
	int k;
	float s,m;
	s=0;
	m=0;
	for (k=0;k<9;k++)
	{
		cout << "\n Inserisci valore ";
		cin >> x[k];
		s=s+x[k];
	}
	m=s/10;
	cout << "\n La media dei numeri è:"<< m << endl;
	return 0;
}
