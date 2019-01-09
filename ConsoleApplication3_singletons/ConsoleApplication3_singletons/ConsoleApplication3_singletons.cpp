#include <iostream>
#include "Header.hpp"
#include "pch.h"
using namespace std;

// Klassen
//
class CLogfile : public TSingleton<CLogfile>
{
public:

	// Memberfunktionen

	// Konstruktor
	//
	CLogfile()
	{
		cout << "Neues Logfile wurde erstellt." << endl;
	} // Konstruktor

	// Destruktor
	//
	~CLogfile()
	{
		cout << "Logfile wurde geschlossen." << endl;
	} // Destruktor

	// Pseudo-Funktion
	void Statusmeldung()
	{
		cout << "Status wird ins Logfile geschrieben\n";
	} // Statusmeldung

};

// Eine beliebige Funktion
void Funktion()
{
	// Eine Statusmeldung ins Logfile schreiben
	CLogfile::Get()->Statusmeldung();


} // Funktion

// Hauptprogramm
//
int main()
{
	// Eine beliebige Funktion aufrufen
	Funktion();

	// Logfile schlieﬂen
	CLogfile::Del();


	return 0;
}