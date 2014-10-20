#include<iostream>
using namespace std;
int main() {
	int lopetus = 0;
	int jatko = 1;
	while (jatko > lopetus) {
	int luku1, luku2;
	

	cout << "Anna kaksi kokonaislukua";
	cin >> luku1 >> luku2;
	jatko--;

	
	int valinta;


	cout << "\n0. Lopetus";
	cout << "\n1. Summa";
	cout << "\n2. Erotus";
	cout << "\n3. Tulo";
	cout << "\n4. Osamaara";
	cout << "\n5. Jakojaannos";
	cout << "\n6. Syota uudet luvut laskemista varten ";

	int Summa = luku1 + luku2;
	int Erotus = luku1 - luku2;
	int Tulo = luku1*luku2;
	int Osamaara = luku1 / luku2;
	int Jakojaannos = luku1 % luku2;
	

	
	cin >> valinta;
	
	switch (valinta)
	{
	case 0: break;

	case 1: cout << "\n " << Summa;
		jatko--;
		break;
	case 2: cout << "\n " << Erotus;
		jatko--;
		break;
	case 3: cout << "\n " << Tulo;
		jatko--;
		break;
	case 4: cout << "\n " << Osamaara;
		jatko--;
		break;
	case 5: cout << "\n " << Jakojaannos;
		jatko--;
		break;
	case 6: jatko++;
		break;
	

	default: cout << "ET VALINNUT MITAAN TOIMINTOA!\n";
		break;
	}
	}
	}
	






