#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long nbDiviseurs(long long);

int main(){

	long long nombreTriangle = 0;

	long long i = 0;

	long long nombreDeDiviseurs = 0;

	while (nombreDeDiviseurs<=500)
	{
		nombreTriangle += i;
		i++;
		nombreDeDiviseurs = nbDiviseurs(nombreTriangle);
		cout << nombreTriangle << " nb divieurs : " << nombreDeDiviseurs << endl;
	}

	cout << nombreTriangle << endl;

	return 0;
}

long long nbDiviseurs(long long cible)
{
	long long nbdiviseurs = 0;

	for (long long i=0; i<=sqrt(cible); i++)
	{
		if (cible%i==0) nbdiviseurs += 2;
	}

	return nbdiviseurs;
}
