	/*! \file Polygon.h
	*
	* \brief Zawiera deklaracjê klasy Polygon
	*
	* Plik zawiera deklaracjê klasy Polygon.h.
	*
	* \author Mateusz Chlebosz
	* \author Mikolaj Kaczmarek
	* \author Jakub Marciniak
	* \author Dawid Pieczyñski
	* \author Jan Kaczmarek
	* \date 2020.04.01
	* \version 1.00.10
	*/

#pragma once

#include <vector>

#include "Punkt2.h"


int polygon_instances = 0;

class Polygon
{
	unsigned int count; /*!< Iloœæ wierzcho³ków wielok¹ta */

	Punkt2* vertices{0}; /*!< Tablica wierzocho³ków */


public:

	Polygon();

	~Polygon();


	//! Metoda konstruuj¹ca tablicê wierzcho³ków.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj¹cy tablicê wierzcho³ków wielok¹ta
	  \param _count argument typu  unsigned int przekazuj¹cy iloœæ wierzcho³ków.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* _vertices, int _count);

	//! Metoda zmieniaj¹ca wspólrzêdne i-tego wierzcho³ka.
	/*!
	  \param i argument typu int  przekazuj¹cy numer wiercho³ka do zmiany
	  \param x argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej x.
	  \param y argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y);

	//! Metoda ustawiaj¹ca iloœæ wierzcho³ków.
	/*!
	  \param n argument typu int przekazuj¹cy iloœæ wiercho³ków
	  \sa setVeritces()
	*/
	void setCount(int n);

	double getPerimeter(); /*!< Metoda obliczaj¹ca obwód wielok¹ta */

	Punkt2* getVertices();
	
	double getConvexArea();
	//double getConvexArea();
	double getArea();


	// void saveThis(int type, char* lokalizacja);//type 1-binary,type 2-normal

	static int instanceAmount();
	
private:
	/*oblicza pole trójk¹ta na podstawie wierzcho³ków*/
	double getTriangleArea(Punkt2 _p1, Punkt2 _p2, Punkt2 _p3);
};
