	/*! \file Matrix.h
	*
	* \brief Zawiera deklaracj� klasy Matrix
	*
	* Plik zawiera deklaracj� klasy Matrix.h.
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


class Matrix {
	double** tab;
	int sizeX;
	int sizeY;
	double* operator[](unsigned int a);
	double operator()(int a, int b);
};

