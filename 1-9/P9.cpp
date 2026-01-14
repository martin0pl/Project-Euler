#include <iostream>

using namespace std;

int main()
{
	int abc = 0;
	for (int c=3; c<1000; c++) {
		for (int b=2; b<c; b++){
			for (int a=1; a<b; a++) {
				if ((a*a+b*b)==c*c) {
					if (a+b+c==1000) {
						abc = a*b*c;
					}
				}
			}
		}
	}
	cout << abc << endl;
}
