// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <cstring>
#define debugas false;
using namespace std;
struct Sduomenys {
	char vardas[20];
	char pavarde[20];
	int nd_paz[10];
	int egz_paz;
	float galutinis;
};

Sduomenys studentai[20];

void galutinis(int l)
{
	float laikinas=0;
	int p = 0;
	for (int i = 0; i < size(studentai[l].nd_paz)-1; i++)
	{
		if (studentai[l].nd_paz[i] > 0) { laikinas += studentai[l].nd_paz[i]; p++; }
	}
#ifdef debugas
	cout << "Vidurkis " << laikinas / p * 0.4 + 0.6*studentai[l].egz_paz;
#endif 
	
}

void nuskaitymas()
{
	char laikinas;
	for (int i= 0; i<20; i++)
	{
		cout << "Ivesk "<<i+1<<"-o studento varda\n";
		cin >> studentai[i].vardas;
		cout << "Ivesk " << i + 1 << "-o studento pavarde\n";
		cin >> studentai[i].pavarde;
		for (int k= 0; k<10; k++)
		{
			cout << "Ivesk " << i + 1 << "-o studento " << studentai[i].vardas << " " << studentai[i].pavarde <<" "<< k + 1 << "-o namu darbu pazymi\n";
			cin >> studentai[i].nd_paz[k];
			cout << "baigti nd ivedima? b. B\n";
			cin >> laikinas;
			if ((laikinas==66 || laikinas==98)||k==9)
			{
				cout << "Ivesk " << i + 1 << "-o studento " << studentai[i].vardas << " " << studentai[i].pavarde <<  " egzamino pazymi\n";
				cin >> studentai[i].egz_paz;
				break;
			}	
		}
		
		cout << "baigti studentu ivedima? b. B\n";
		cin >> laikinas;
		if ((laikinas == 66 || laikinas == 98) || i == 20)
		{
			galutinis(i);
			break;
		}

	}
	
}

void main() 
{
	nuskaitymas();
	
}


/*

	
#ifdef debugas
	std::cout << "rofl";
#endif 
    
*/

