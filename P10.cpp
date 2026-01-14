#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int MAX = 2000000;

	vector<bool> crible (MAX, true);
	crible[0]=false;
	crible[1]=false;

	for (int i=2; i<MAX; i++) {
		if (crible[i]==true) {
			for (int j=i+i; j<MAX; j+=i) {
				crible[j]=false;
			}
		}
	}

	vector<int> crible_fini={};

	for (int i=0; i<MAX; i++) {
		if (crible[i]==true) {
			crible_fini.push_back(i);
		}
	}

	long somme = 0;
	for (int v : crible_fini) {
		somme+=v;
	}

	cout << somme << endl;
}