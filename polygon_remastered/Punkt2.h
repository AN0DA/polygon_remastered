	/*! \file Punkt2.h
	*
	* \brief Zawiera deklaracjê klasy Punkt2
	*
	* Plik zawiera deklaracjê klasy Punkt2.h.
	* Wspó³rzêdne punktu s¹ podawane w uk³adzie kartezjañskim.
	* Klasa zawiera kilka metod skladowych
	*
	* \author Mateusz Chlebosz
	* \author Mikolaj Kaczmarek
	* \author Jakub Marciniak
	* \author Dawid Pieczyñski
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

	//wspó³rzêdne biegunowe
	double getRadius();
	double getAngle();
	
	//odleg³oœæ punktu od punktu _p
	double getDistance(Punkt2* _p);
	
	// operator odejmowania w klasie
	Punkt2 operator - (Punkt2& p);
	//operator przypisuj¹cy
	Punkt2 operator=(const Punkt2& p);
	//operator mno¿enia skalarnego w klasie zadeklarowany jako mno¿enie wektorów
	/*
	double operator * (Punkt2& p);
	*/
};
