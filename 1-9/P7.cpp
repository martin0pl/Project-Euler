#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int MAX = 110000;

	vector<bool> crible (MAX, true);
	crible[0]=false;
	crible[1]=false;

	for (int i=2; i<MAX; i++) {
		if (crible[i]==true) {
			for (int j=i+1; j<MAX; j++) {
				if (j%i==0){
					crible[j]=false;
				}
			}
		}
	}

	vector<int> crible_fini={};

	for (int i=0; i<MAX; i++) {
		if (crible[i]==true) {
			crible_fini.push_back(i);
		}
	}

	while (crible_fini[crible_fini.size()-1]==1){
		crible_fini.pop_back();
	}

	cout << crible_fini.size() << endl;
	cout << crible_fini[10000] << endl;
}
