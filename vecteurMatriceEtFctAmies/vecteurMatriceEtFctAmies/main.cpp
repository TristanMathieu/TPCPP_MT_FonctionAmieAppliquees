#include <iostream>
#include <cstdlib>
#include "vect.h"
#include "matrice.h"
//#include "point3d.h"

/*
R�aliser un programme qui calcule le produit vectoriel d'une matrice.

Il nous faudra une foncion permettant de determiner le produit d'un vetceur, soit un objet de classe vecteur, par une matrice object de classe matrice

Par soucis de simplicit�, nous limitons les fonctions membres � :
-un constructeur (pour vect et pour matrice)
-fonction d'affichage pour matrice

vous fournirez 2 solutions fond�es sur l'emplois d'une fonction amie nomm�e "Prod" comme produit
- prod est ind�pendante et amies de la classe vect et matrice
- prod est membre de matrice et amie de classe vect
*/

/*
- - - - -
Cas 1 : La fonction amie est ind�pendante
Cette fonction est nom�e prod1
- - - - -

- - - - -
Cas 2 : La fonction est membre de matrice, et amie de vect
Cette fonction est nom�e prod2
- - - - -
*/

int main()
{
	matrice maMatTest;
	maMatTest.afficher();

	vect vT1(15.0f, 50.0f, 70.0f);

	prod1(vT1, maMatTest);
	maMatTest.prod2(vT1);

	system("pause");
	return 0;
}

//fonction amie
vect prod1(vect &vect1, matrice &mat1)
{
	float x, y, z;
	x = (vect1.moveY * mat1.tableau[1][2]) - (vect1.moveZ * mat1.tableau[1][1]);
	y = (vect1.moveZ * mat1.tableau[1][0]) - (vect1.moveX * mat1.tableau[1][2]);
	z = (vect1.moveX * mat1.tableau[1][1]) - (vect1.moveY * mat1.tableau[1][0]);

	vect vectSomme(x, y, z);
	return vectSomme;
}

//Code r�alis� par Tristan et la sueure de son front.