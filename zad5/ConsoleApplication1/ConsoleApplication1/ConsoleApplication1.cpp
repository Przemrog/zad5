#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ZADANIE 3


	/*
	char tab[] = "wiosna";

	cout << size(tab);

	*/


	// ZADANIE 4

	
	/*

	char tab[10];
	char tab1[10];

	cin.getline(tab, 10);

	strcpy_s(tab1, tab);

	cout << tab1 << endl;

	strcat_s(tab1, tab);

	cout << tab1 << endl;

	cout << size(tab1);
	*/


	// ZADANIE 5

	
	/*
	char tabImie[100];
	char tabDom[100];
	int ocena=0;
	int staz=0;

	cout << "Podaj nazwe ulicy na ktorej mieszkasz: ", cin.getline(tabImie, 100);

	cout << "Podaj nr domu: ", cin.getline(tabDom, 100);

	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ", cin >> ocena;

	cout << "Twoj staz programistyczny: ", cin >> staz;

	cout << "Adres : " << tabImie << " " << tabDom << endl;

	if (ocena < 2) {
		cout << "Ocena : " << 2 << endl;
	}
	else if (ocena >= 2 && ocena <= 5) {
		cout << "Ocena : " << ocena - 1 << endl;
	}
	else {
		cout << "Ocena : " << 5 << endl;
	}
	
	cout << "Staz: " << staz << " dni";
	*/



	// ZADANIE 6


	/*

	string tSamogloski = "aeiouyAEIOUY";
	string tSpolgloski = "bcdfghjklmnprstwzBCDFGHJKLMNPRSTWZ";

	int samogloski = 0;
	int spolgloski = 0; 
	
	string tekst;

	cout << "Wprowadz tekst: ";
	getline(cin, tekst);

	for (int i = 0; i < tekst.length(); i++) {
		for (int j = 0; j < tSamogloski.length(); j++) {
			if (tekst[i] == tSamogloski[j]) {
				samogloski++;
			}

		}
	}


	for (int i = 0; i < tekst.length(); i++) {
		for (int k = 0; k < tSpolgloski.length(); k++) {
			if (tekst[i] == tSpolgloski[k]) {
				spolgloski++;
			}

		}
	}


	cout << "Dlugosc tekstu = " << spolgloski + samogloski << endl << "Ilosc samoglosek = " << samogloski << endl << "Ilosc spolglosek = " << spolgloski << endl;


	*/

}
