#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> palindromes = {};

	for (int i=0; i<1000; i++) {
		for (int j=0; j<1000; j++) {
			string valeur = to_string(i*j);
			string inverse = valeur;
			reverse(inverse.begin(),inverse.end());
			if (valeur==inverse) {
				palindromes.push_back(stoi(valeur));
			}
		}
	}
	sort(palindromes.begin(),palindromes.end());
	cout << palindromes[palindromes.size()-1] << endl;
	return 0;
}