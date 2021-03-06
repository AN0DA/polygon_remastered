/*! \file Polygon.cpp
	*
	* \brief Zawiera definicję klasy Matrix
	*
	* Plik zawiera implementację metod klasy Matrix.
	*
	* \author Mikołaj Kaczmarek
	* \author Dawid Pieczyński
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.04.02
	* \version 1.00.20
	*/

#include "Matrix.h"
double* Matrix::operator[](unsigned int a) {
	return tab[a];
}
double Matrix::operator()(int a, int b) {
	return tab[a][b];
};
