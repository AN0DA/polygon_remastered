/*! \file Polygon.cpp
	*
	* \brief Zawiera definicjê klasy Polygon
	*
	* Plik zawiera implementacjê metod klasy Polygon.
	*
	* \author Miko³aj Kaczmarek
	* \author Dawid Pieczyñski
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.04.02
	* \version 1.00.20
	*/


#include "polygon.h"

#include <initializer_list>
#include <iostream>
#include <fstream>

int Polygon::instances = 0;

Polygon::Polygon() {
	instances++;
};

Polygon::Polygon(std::initializer_list<Punkt2> lista) {
	instances++;
	int i = 0;
	for (auto x : lista) {
		vertices[i] = x;
		i++;
	}
};


Polygon::~Polygon() {
	instances--;
}

//Polygon::Polygon(const Polygon& old_poly) {
////zawartoœæ kontruktora kopiuj¹cego g³êboko
//}

void Polygon::setVertices(Punkt2* _vertices, int _count)
{
	if (_vertices == vertices)
		return;

	delete vertices;
	vertices = new Punkt2[_count];
	for (int i = 0; i < _count; i++)
		vertices[i] = _vertices[i];
	count = _count;
}

void Polygon::changeVertex(int i, double x, double y)
{
	vertices[i].setX(x);
	vertices[i].setY(y);
}

void Polygon::setCount(int n)
{
	for (int i = count - 1; i >= n; i--)
		delete[i] vertices;
	count = n;
}

double Polygon::getPerimeter() //done
{
	double n = 0;

	for (unsigned int i = 0; i < count; i++)
		n += vertices[i].getDistance(&vertices[(i + 1) % count]);
	return n;
}

Punkt2* Polygon::getVertices() //done
{
	return vertices;
}

double Polygon::getTriangleArea(Punkt2 _p1, Punkt2 _p2, Punkt2 _p3)
{
	return abs(((_p1.getX() * (_p2.getY() - _p3.getY())) + (_p2.getX() * (_p3.getY() - _p1.getY())) + (_p3.getX() * (_p1.getY() - _p2.getY())) / 2));
}

/*
double Polygon::getCircumference(Punkt2* _vertices, int nuber_of_points)
{
	int sum = 0;
	for (int i = 0; i < nuber_of_points; i++)
	{
		sum += _vertices[0].getDistance(_vertices[1]);
	}
	sum += vertices[nuber_of_points - 1].getDistance(_vertices[0]);
	return sum;
}*/

double Polygon::getArea() {
	double f = 0.0;
  
	int j = count - 1; 
    for (unsigned int i = 0; i < count; i++) 
    { 
        f += (vertices[j].getX() + vertices[i].getX()) * (vertices[j].getY() - vertices[i].getY()); 
        j = i;
    } 
  
    return fabs(f / 2.0);
	
	/*for (unsigned int i = 0; i < count; i++)
		f += (vertices[i].getY() + vertices[(i + 1) % count].getY())
		   * (vertices[i].getX() - vertices[(i + 1) % count].getX());
	return fabs(f) / 2;*/
}

double Polygon::getConvexArea() {
	int de_v = count % 2;
	double dyn_x = 0, dyn_y = 0;

	for (unsigned int i = 0; i < count; i++) {
		dyn_x += vertices[i].getX();
		dyn_y += vertices[i].getY();
	}

	dyn_x /= count;
	dyn_y /= count;

	Punkt2 p2;

	p2.setX(dyn_x);
	p2.setY(dyn_y);

	double field = 0;

	for (unsigned int i = 0; i < count; i++)
		field += getTriangleArea(vertices[i], vertices[(i + 1)%count], p2);
	return field;
}
