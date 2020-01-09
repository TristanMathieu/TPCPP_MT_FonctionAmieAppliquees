#include "vect.h"
#include "matrice.h"
#include <iostream>

//Constructeurs
vect::vect() 
{
	this->moveX = 0.0f;
	this->moveY = 0.0f;
	this->moveZ = 0.0f;
}

vect::vect(float X, float Y, float Z)
{
	this->moveX = X;
	this->moveY = Y;
	this->moveZ = Z;
}
