/*! \file Polygon.cpp
	*
	* \brief Zawiera definicj� klasy Polygon
	*
	* Plik zawiera implementacj� metod klasy Polygon.
	*
	* \author Miko�aj Kaczmarek
	* \author Dawid Pieczy�ski
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.04.01
	* \version 1.00.10
	*/
#include <iostream>

#include "Polygon.h"
#include "Matrix.h"


int main()
{
	//deklaracja pierwszego punktu
	Punkt2 p1;
	p1.setX(10.0);
	p1.setY(20.5);
	
	//deklaracja drugiego punktu
	Punkt2* p2 = new Punkt2;
	p2->setX(11.0);
	p2->setY(60.7);
	//odleg�o�� punktu p1 do p2
	std::cout << "p2->getDistance(&p1) == " << p2->getDistance(&p1) << std::endl;
	std::cout << "p1.getDistance(p2) == " << p1.getDistance(p2)<< std::endl << std::endl;

	//wsp�rz�dne biegunowe
	std::cout << "p2->getRadius() == " << p2->getRadius()<< std::endl;
	std::cout << "p2->getAngle() == " << p2->getAngle()<< std::endl << std::endl;

	//wielko�� pami�ci dla obiektu p1
	std::cout << "sizeof(p1) == " << sizeof(p1) << std::endl << std::endl;

	//definicja dowolnego czworok�ta
	Punkt2 czw1;
	czw1.setX(11);
	czw1.setY(0);
	Punkt2 czw2;
	czw2.setX(15);
	czw2.setY(3);
	Punkt2 czw3;
	czw3.setX(15);
	czw3.setY(0);
	Punkt2 czw4;
	czw4.setX(11);
	czw4.setY(3);

	Polygon* czworokat = new Polygon;
	Punkt2* tabliczka = new Punkt2[4];
	tabliczka[0] = czw1;
	tabliczka[1] = czw2;
	tabliczka[2] = czw3;
	tabliczka[3] = czw4;
	czworokat->setVertices(tabliczka, 4);
	//zmiana punktu w czworok�cie
	Punkt2 czw1new;
	czw1new.setX(11);
	czw1new.setY(60);
	Punkt2* tablica = czworokat->getVertices();
	tablica[0] = czw1new;
	czworokat->setVertices(tablica, 4);
	//trojkacik :---DDDD
	Punkt2 tr1;
	tr1.setX(15);
	tr1.setY(3);
	Punkt2 tr2;
	tr2.setX(15);
	tr2.setY(0);
	Punkt2 tr3;
	tr3.setX(11);
	tr3.setY(3);

	Polygon* trojkat = new Polygon;
	Punkt2* tabliczuczka = new Punkt2[3];
	tabliczuczka[0] = tr1;
	tabliczuczka[1] = tr2;
	tabliczuczka[2] = tr3;
	trojkat->setVertices(tabliczuczka, 3);
	std::cout << "czworokat->getPerimeter() == " << czworokat->getPerimeter() << std::endl << std::endl;

	//pole
	std::cout<< "czworokat->getConvexArea() == " << czworokat->getConvexArea()<< std::endl << std::endl;
	//pole z wzoru szuneja
	std::cout<< "czworokat->getArea() == " << czworokat->getArea()<< std::endl << std::endl;
	//trojkat
	std::cout << "trojkat->getPerimeter() == " << trojkat->getPerimeter() << std::endl << std::endl;
	//pole
	std::cout<< "trojkat->getConvexArea() == " << trojkat->getConvexArea()<< std::endl << std::endl;
	//pole z wzoru szuneja
	std::cout<< "trojkat->getArea() == " << trojkat->getArea()<< std::endl << std::endl;

	return 0;

	//iloczyn skalarny z wektor�w zadeklarowanych jako punkty dla u�atwienia; poza klas�
	Punkt2 is1;
	is1.setX(15);
	is1.setY(3);
	Punkt2 is2;
	is2.setX(15);
	is2.setY(0);
	std::cout<<"Iloczyn skalarny: "<< is1.getX() * is2.getX() + is1.getY() * is2.getY();

	//W funkcji main() zdefiniuj zmienne dla konstruktora niedomy�lnego klasy Polygon i utw�rz adekwatny obiekt. Odczytaj ilo�� obiekt�w typu Punkt2 wygenerowanych przez program.
}
