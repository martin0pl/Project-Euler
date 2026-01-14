#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){

	vector<long long> nombres;
	string nombreS;
	long long nombre;

	ifstream entree;
    entree.open("input.txt");

    while (!entree.eof())
    {
    	getline(entree, nombreS);

    	nombreS = nombreS.substr(0,15);
    	nombre = stoll(nombreS);

    	nombres.push_back(nombre);
    }

	entree.close();

	long long somme = 0;

	for (long long ll : nombres)
	{
		somme += ll;
	}

	/*
	for (long long ll : nombres)
	{
		cout << ll << endl;
	}
	*/

	string sommeS = to_string(somme);
	sommeS = sommeS.substr(0,10);

	cout << "----> " << sommeS << endl;

	return 0;
}
