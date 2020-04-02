	/*! \file Punkt2.h
	*
	* \brief Zawiera deklaracj� klasy Punkt2
	*
	* Plik zawiera deklaracj� klasy Punkt2.h.
	* Wsp�rz�dne punktu s� podawane w uk�adzie kartezja�skim.
	* Klasa zawiera kilka metod skladowych
	*
	* \author Mateusz Chlebosz
	* \author Mikolaj Kaczmarek
	* \author Jakub Marciniak
	* \author Dawid Pieczy�ski
	* \author Jan Kaczmarek
	* \date 2020.04.02
	* \version 1.00.20
	*/

#pragma once
#include <initializer_list>

class Punkt2
{
	double x{ 0.0 };
	double y{ 0.0 };

public:
	static int instances; /* Liczba instancji */

	//constructor
	Punkt2(/*std::initializer_list<Punkt2> lista*/);
	Punkt2(std::initializer_list<double> lista);
	//Punkt2();
	//Punkt2(Punkt2&& p);
	
	~Punkt2();


	//settery
	void setX(double _x);
	void setY(double _y);

	//gettery
	double getX();
	double getY();

	//wsp�rz�dne biegunowe
	double getRadius();
	double getAngle();
	
	//odleg�o�� punktu od punktu _p
	double getDistance(Punkt2* _p);
	
	// operator odejmowania w klasie
	Punkt2 operator - (Punkt2& p);
	//operator przypisuj�cy
	Punkt2 operator=(const Punkt2& p);
	//operator mno�enia skalarnego w klasie zadeklarowany jako mno�enie wektor�w
	/*
	double operator * (Punkt2& p);
	*/
};
