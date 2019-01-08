
#include "pch.h"
#include <iostream>

const int Bildschirmbreite = 800;
const int Bildschirmhoehe = 600;

class CRaumschiff {

private:
	int m_xPos;
	int m_yPos;
	int m_Energie;
	int m_fGeschwindigkeit;

public:
	CRaumschiff();
	CRaumschiff(int xPos, int yPos);
	~CRaumschiff();


};


CRaumschiff::CRaumschiff() {

	m_xPos = 0;
	m_yPos = 0;
	m_Energie = 1000;
	m_fGeschwindigkeit = 0.0f;

	std::cout << "Raumschiff initialisiert!" << std::endl;

}

CRaumschiff::CRaumschiff(int xPos, int yPos) {

	if (xPos > 0 && xPos < Bildschirmbreite && yPos > 0 && yPos < Bildschirmhoehe) {
		std::cout << "Koordinaten gesetzt!" << xPos << ", " << yPos << std::endl;
		m_xPos = xPos;
		m_yPos = yPos;
	}
	else {
		std::cout << "Koordinaten ungueltig!" << std::endl;
		xPos = 0;
		yPos = 0;
	}
	m_Energie = 1000;
	m_fGeschwindigkeit = 0.0f;
	std::cout << "Raumschiff mit ueberladenem Konstruktor erstellt!" << std::endl;
	   	 
}

//Destruktor
CRaumschiff::~CRaumschiff() {
	std::cout << "Raumschiff zerstoert!" << std::endl;
}


int main()
{
   
	CRaumschiff* pSpieler = NULL;
	CRaumschiff* pGegner = NULL;

	int xPos, yPos;

	std::cout << "x-Position des Gegners" << std::endl;
	std::cin >> xPos;
	std::cout << "y-Position des Gegners" << std::endl;
	std::cin >> yPos;

	pSpieler = new CRaumschiff;
	pGegner = new CRaumschiff(xPos, yPos);

	delete pGegner;
	pSpieler = NULL;

	return 0;

}

