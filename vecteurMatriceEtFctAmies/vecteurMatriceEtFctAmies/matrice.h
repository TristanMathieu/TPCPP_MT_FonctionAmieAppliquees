#pragma once
class vect;

class matrice
{
private:
	float tableau[3][3];

public:
	//Constructeur
	matrice();

	//fct Affichage
	void afficher();

	//fct produit 
	vect prod2(vect &vect1);

	//liaison amitié
	friend vect prod1(vect &vect1, matrice &mat1);
};

