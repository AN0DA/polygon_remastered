#pragma once
//plik Matrix.h

	/*! \file Matrix.h
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
	* \date 2020.04.01
	* \version 1.00.00
	*/
class Matrix {
	double** tab;
	int sizeX;
	int sizeY;
	double* operator[](unsigned int a) {
		return tab[a];
	}
	double operator()(int a, int b) {
		return tab[a][b];
	};
};

