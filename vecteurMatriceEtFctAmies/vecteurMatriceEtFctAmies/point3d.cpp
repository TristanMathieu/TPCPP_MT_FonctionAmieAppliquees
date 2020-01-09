#include "point3d.h"

//Constructeurs
point3d::point3d()
{
	this->x = 0.0f;
	this->y = 0.0f;
	this->z = 0.0f;
}

point3d::point3d(float x, float y, float z) 
{
	this->x = x;
	this->y = y;
	this->z = z;
}