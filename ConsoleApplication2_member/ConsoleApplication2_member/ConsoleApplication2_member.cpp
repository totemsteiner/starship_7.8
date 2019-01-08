

#include "pch.h"
#include <iostream>

class CRaumschiff {

protected:
	int m_Farbe;
	int m_Energie;

public:
	CRaumschiff() {
		m_Farbe = 0;
		m_Energie = 1000;
		std::cout << "Neues Raumschiff erstellt!" << std::endl;
	}

	void Starten() {
		std::cout << "Raumschiff startet..." << std::endl;
	}
	void Landen() {
		std::cout << "Raumschiff landet..." << std::endl;
	}
};



class CMinenleger : public CRaumschiff {

private:
	int m_Minen;
public:
	CMinenleger() {
		m_Minen = 10;
		std::cout << "Minenleger erstellt!" << std::endl;
	}

	void MinenLegen() {
		m_Minen--;
		std::cout << "Mine gelegt. Es sind noch " << m_Minen << " Minen vorhanden. " << std::endl;
	}
};

class CAbfangjaeger : public CRaumschiff {
	
private:
	int m_Raketen;
public:
	CAbfangjaeger() {
		m_Raketen = 20;
		std::cout << "Abfangjaeger erstellt!" << std::endl;
	}
	void RaketeFeuern() {
		m_Raketen--;
		std::cout << "Rakete abgefeuert. Es sind noch " << m_Raketen << " Raketen vorhanden." << std::endl;
	}
};


int main()
{
    
	CAbfangjaeger Jaeger;
	CMinenleger Miner;

	Miner.Starten();
	Miner.MinenLegen();
	Miner.Landen();

	Jaeger.Starten();
	Jaeger.RaketeFeuern();
	Jaeger.Landen();


	Miner.Starten();
	Miner.MinenLegen();
	Miner.Landen();

	Jaeger.Starten();
	Jaeger.RaketeFeuern();
	Jaeger.Landen();

	Miner.Starten();
	Miner.MinenLegen();
	Miner.Landen();

	Jaeger.Starten();
	Jaeger.RaketeFeuern();
	Jaeger.Landen();
	return 0;
}

