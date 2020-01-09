#pragma once
#include "matrice.h"
class vect
{
private:
	float moveX;
	float moveY;
	float moveZ;


public:
	//constructeurs
	vect();
	vect(float, float, float);

	//liaison amitié
	friend vect matrice::prod2(vect &vect1);
	friend vect prod1(vect &vect1, matrice &mat1);
};
