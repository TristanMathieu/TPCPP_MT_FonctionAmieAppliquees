#include "matrice.h"
#include "vect.h"
#include <iostream>

//Constructeur
matrice::matrice()
{
	this->tableau[0][0] = 0.0f;
	this->tableau[0][1] = 0.0f;
	this->tableau[0][2] = 0.0f;

	this->tableau[1][0] = 5.0f;
	this->tableau[1][1] = 8.0f;
	this->tableau[1][2] = 7.0f;

	this->tableau[2][0] = 69.0f;
	this->tableau[2][1] = 47.0f;
	this->tableau[2][2] = 21.0f;
}

//fct Affichage
void matrice::afficher()
{
	int i, j;
	std::cout << "x y z" << std::endl;
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++)
		{
			std::cout << tableau[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

//fct produit
vect matrice::prod2(vect &vect1)
{
	float x, y, z;
	x = (vect1.moveY * tableau[1][2]) - (vect1.moveZ * tableau[1][1]);
	y = (vect1.moveZ * tableau[1][0]) - (vect1.moveX * tableau[1][2]);
	z = (vect1.moveX * tableau[1][1]) - (vect1.moveY * tableau[1][0]);

	vect vectSomme(x, y, z);
	return vectSomme;
}
