#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){

	vector<long long> longueursChaines = {0};

	int i = 1;

	while (i<1000000)
	{
		long long n = i;
		int longueurSequence = 1;
		while(n!=1)
		{
			if (n%2==0) n = n/2;
			else n = 3*n + 1;
			longueurSequence++;
		}
		i++;
		longueursChaines.push_back(longueurSequence);

	}

	long long plusGrand = 0;
	int indicePlusGrand = 0;

	for (int j=0; j<longueursChaines.size(); j++)
	{
		if (longueursChaines[j]>plusGrand)
		{
			plusGrand = longueursChaines[j];
			indicePlusGrand = j;
		}
	}

	cout << indicePlusGrand << endl;

	return 0;
}
