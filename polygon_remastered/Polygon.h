	/*! \file Polygon.h
	*
	* \brief Zawiera deklaracjê klasy Polygon
	*
	* Plik zawiera deklaracjê klasy Polygon.h.
	* Tablica vertices zawiera punkty podane w kolejnoœci konstruowania figury.
	*
	* \author Mateusz Chlebosz
	* \author Miko³aj Kaczmarek
	* \author Jakub Marciniak
	* \author Dawid Pieczyñski
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
	unsigned int count; /*!< Liczba wierzcho³ków wielok¹ta */

	Punkt2* vertices{0}; /*!< Tablica wierzocho³ków */


public:
	Polygon();
		static int instances; /* Liczba instancji */

	//Konstruktor kopiuj¹cy zapewnij¹cy kopiê g³êbok¹
	Polygon(Polygon& schem);
	//template< class T >
	//class initializer_list;
	Polygon(std::initializer_list<Punkt2> lista);
	~Polygon();

	//Polygon(const Polygon&);


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

	//! Metoda obliczaj¹ca obwód wielok¹ta */
	double getPerimeter();

	//! Metoda zwracaj¹ca wczytane punkty wielok¹ta.
	Punkt2* getVertices();
	
	//! Metoda zwracaj¹ca pole wielok¹ta wypuk³ego.
	double getConvexArea();
	
	//! Metoda zwracaj¹ca pole dowolnego wielok¹ta.
	double getArea();


	// void saveThis(int type, char* lokalizacja);//type 1-binary,type 2-normal

	//! Metoda zwracaj¹ca liczbê zdefiniowaych instancji klasy Polygon.
	static int instanceAmount();
	
private:
	//! Metoda zwraca pole trójk¹ta na podstawie wierzcho³ków.
	double getTriangleArea(Punkt2 _p1, Punkt2 _p2, Punkt2 _p3);
};
