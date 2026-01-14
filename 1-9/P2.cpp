#include <iostream>

using namespace std;

int main()
{
	vector<int> valeurs = {1,2};

	while ((valeurs[valeurs.size()-2] + valeurs[valeurs.size()-1])<4000000) {
		valeurs.push_back(valeurs[valeurs.size()-2] + valeurs[valeurs.size()-1]);
	}

	int som_n_pairs = 0;

	for (int i=0 ; i<valeurs.size() ; i++){
		if (valeurs[i]%2==0) {
			som_n_pairs+=valeurs[i];
		}
	}

	cout << som_n_pairs << endl;
}
