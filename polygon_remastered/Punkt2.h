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
	* \date 2020.04.01
	* \version 1.00.00
	*/

#pragma once

int Punkt2_instances = 0;

class Punkt2
{
	double x{ 0.0 };
	double y{ 0.0 };

public:
	//constructor
	Punkt2();

	Punkt2(Punkt2&& p);
	

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

	//operator mno¿enia skalarnego w klasie zadeklarowany jajo mno¿enie wektorów
	double operator * (Punkt2& p);
};
