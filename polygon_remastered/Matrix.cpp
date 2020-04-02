/*! \file Polygon.cpp
	*
	* \brief Zawiera definicj� klasy Matrix
	*
	* Plik zawiera implementacj� metod klasy Matrix.
	*
	* \author Miko�aj Kaczmarek
	* \author Dawid Pieczy�ski
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
