#include <iostream>

using namespace std;

int sum_of_the_square(int target) 
{
	int sum = 0;

	for (int i=0; i<=target; i++) 
	{
		sum += i*i;
	}
	return sum;
}

int square_of_the_square(int target) 
{
	int sum = 0;

	for (int i=0; i<=target; i++) 
	{
		sum += i;
	}

	return sum*sum;
}

int main()
{
	const int N=100;

	int sum1 = sum_of_the_square(N);
	int sum2 = square_of_the_square(N);
	cout << "La somme des carrés est " << sum1 << endl;
	cout << "Le carré de la somme est " << sum2 << endl;
	cout << "La différence est  " << sum2 - sum1 << endl;
}