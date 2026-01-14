#include <iostream>

using namespace std;

int main()
{
	int Somme = 0;

	for (int i=0 ; i < 1000 ; i++) {
		if (i%3==0 || i%5==0) {
			Somme += i;
		}
	}
	cout << Somme << endl;
}
