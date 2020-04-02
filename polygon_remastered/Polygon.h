	/*! \file Polygon.h
	*
	* \brief Zawiera deklaracj� klasy Polygon
	*
	* Plik zawiera deklaracj� klasy Polygon.h.
	* Tablica vertices zawiera punkty podane w kolejno�ci konstruowania figury.
	*
	* \author Mateusz Chlebosz
	* \author Miko�aj Kaczmarek
	* \author Jakub Marciniak
	* \author Dawid Pieczy�ski
	* \author Jan Kaczmarek
	* \date 2020.04.02
	* \version 1.00.20
	*/

#pragma once

#include <vector>
#include <initializer_list>

#include "Punkt2.h"



//int polygon_instances = 0;

class Polygon
{
	unsigned int count; /*!< Liczba wierzcho�k�w wielok�ta */

	Punkt2* vertices{0}; /*!< Tablica wierzocho�k�w */


public:
	Polygon();
		static int instances; /* Liczba instancji */

	//Konstruktor kopiuj�cy zapewnij�cy kopi� g��bok�
	Polygon(Polygon& schem);
	//template< class T >
	//class initializer_list;
	Polygon(std::initializer_list<Punkt2> lista);
	~Polygon();

	//Polygon(const Polygon&);


	//! Metoda konstruuj�ca tablic� wierzcho�k�w.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj�cy tablic� wierzcho�k�w wielok�ta
	  \param _count argument typu  unsigned int przekazuj�cy ilo�� wierzcho�k�w.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* _vertices, int _count);

	//! Metoda zmieniaj�ca wsp�lrz�dne i-tego wierzcho�ka.
	/*!
	  \param i argument typu int  przekazuj�cy numer wiercho�ka do zmiany
	  \param x argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej x.
	  \param y argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y);

	//! Metoda ustawiaj�ca ilo�� wierzcho�k�w.
	/*!
	  \param n argument typu int przekazuj�cy ilo�� wiercho�k�w
	  \sa setVeritces()
	*/
	void setCount(int n);

	//! Metoda obliczaj�ca obw�d wielok�ta */
	double getPerimeter();

	//! Metoda zwracaj�ca wczytane punkty wielok�ta.
	Punkt2* getVertices();
	
	//! Metoda zwracaj�ca pole wielok�ta wypuk�ego.
	double getConvexArea();
	
	//! Metoda zwracaj�ca pole dowolnego wielok�ta.
	double getArea();


	// void saveThis(int type, char* lokalizacja);//type 1-binary,type 2-normal

	//! Metoda zwracaj�ca liczb� zdefiniowaych instancji klasy Polygon.
	static int instanceAmount();
	
private:
	//! Metoda zwraca pole tr�jk�ta na podstawie wierzcho�k�w.
	double getTriangleArea(Punkt2 _p1, Punkt2 _p2, Punkt2 _p3);
};
