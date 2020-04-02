/*! \file Polygon.cpp
	*
	* \brief Zawiera implementacjê klasy Punkt2
	*
	* Plik zawiera implementacjê metod klasy Punkt2.
	*
	* \author Miko³aj Kaczmarek
	* \author Dawid Pieczyñski
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.04.02
	* \version 1.00.20
	*/


#include "Punkt2.h"

#include <iostream>
#include <cmath>
#include <initializer_list>

#define PI 3.14159265

int Punkt2::instances = 0;

Punkt2::Punkt2() { /* konstruktor bez argumentów, to domyœlny konstruktor, ak */
	instances++;
}

Punkt2::Punkt2(std::initializer_list<double> lista) {
	instances++;
}

Punkt2::~Punkt2() {
	instances--;
}

void Punkt2::setX(double _x)
{
	x = _x;
}

double Punkt2::getX()
{
	return x;
}

Punkt2 Punkt2::operator - (Punkt2& p)
{
	Punkt2 result;
	result.setX(x - p.getX());
	result.setY(y - p.getY());
	return result;
}
/*
double Punkt2::operator * (Punkt2& p)
{
	return x * p.getX() + y * p.getY();
}
*/
void Punkt2::setY(double _y)
{
	y = _y;
}
double Punkt2::getY()
{
	return y;
}

double Punkt2::getRadius() //done
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

double Punkt2::getAngle() //done
{
	if (x == 0)
		return y >= 0 ? 90 : -270;
	return atan(y/x) * 180 / PI;
}

double Punkt2::getDistance(Punkt2* _p)
{
	return sqrt(pow(x - _p->getX(), 2) + pow(y - _p->getY(), 2));
}
Punkt2 & Punkt2::operator=(const Punkt2 &p)
{
	x = p.x;
	y = p.y; 
	
	//testowy komentarz
	std::cout << "Uruchomi³ siê przenosz¹cy  opertor przypisania " << std::endl;
	
	return *this;
}