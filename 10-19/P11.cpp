#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){

	vector<vector<int>> lignes (20);

	ifstream entree;
    entree.open("input.txt");

    int valeur;
    int i = 0;
    int cpt = 0;
    while (entree >> valeur)
    {
    	if (cpt==20)
    	{
    		i++;
    		cpt = 0;
    	}
    	lignes[i].push_back(valeur);
    	cpt++;
    }

	entree.close();

	long long produitMax = 0;
	long long produit;

	//vérification horizontale
	for (int i=0; i<20; i++)
	{
		for (int j=0; j<16; j++)
		{
			produit = lignes[i][j]*lignes[i][j+1]*lignes[i][j+2]*lignes[i][j+3];
			if (produit>produitMax) produitMax = produit;
		}
	}

	//vérification verticale
	for (int i=0; i<16; i++)
	{
		for (int j=0; j<20; j++)
		{
			produit = lignes[i][j]*lignes[i+1][j]*lignes[i+2][j]*lignes[i+3][j];
			if (produit>produitMax) produitMax = produit;
		}
	}

	//vérification diagonale droite
	for (int i=0; i<16; i++)
	{
		for (int j=0; j<16; j++)
		{
			produit = lignes[i][j]*lignes[i+1][j+1]*lignes[i+2][j+2]*lignes[i+3][j+3];
			if (produit>produitMax) produitMax = produit;
		}
	}

	//vérification diagonale gauche
	for (int i=3; i<17; i++)
	{
		for (int j=3; j<20; j++)
		{
			produit = lignes[i][j]*lignes[i+1][j-1]*lignes[i+2][j-2]*lignes[i+3][j-3];
			if (produit>produitMax) produitMax = produit;
		}
	}

	/*
	// Affichage du vecteur
	for (vector<int> v : lignes)
	{
		for (int i : v)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	*/

	cout << "----> " << produitMax << endl;

	return 0;
}
