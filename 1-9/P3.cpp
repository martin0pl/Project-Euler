#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const long TARGET = 600851475143;

	vector<long> nombres = {};

	for (long i=2; i<sqrt(TARGET); i++) {
		if (TARGET%i==0) {
			nombres.push_back(i);
		}
	}

	for (long i=0; i<nombres.size(); i++) {
		if (nombres[i]!=0){
			for (long j=i+1; j<nombres.size(); j++) {
				if (nombres[j]%nombres[i]==0) {
					nombres[j]=0;
				}
			}
		}
	}

	while (nombres[nombres.size()-1]==0) {
		nombres.pop_back();
	}

	cout << nombres[nombres.size()-1] << endl;

	return 0;
}
