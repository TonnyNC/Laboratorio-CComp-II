#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
	int denominaciones[11] = { 200,100,50,20,10,5,2,1,50,20,10 }; //denominaciones de billetes y monedas
	int bym[11] = {0,0,0,0,0,0,0,0,0,0,0}; //almacena cantidad de billetes y monedas

	do {
		cout << "inserte valor: ";
		cin >> valor;
		if (valor <= 0.1) {
			cout << "no hay monedas de menor denominacion" << endl;
		}
	} while (valor <= 0.1);

	//Billetes 
    /*
	int auxv = (int)(valor * 10);//elminamos los decimales
	int* pbym = bym;
	int auxi;
	for (int* i = denominaciones; i < denominaciones + 9; i++) {
		auxi = *i * 10;
		for (int *j { &auxv }; (*j % auxi) == 0 ; *j -= auxi) {
			cout << *j << "  " << *i << endl;
			if (*j == 0) {
				break;
			}
			*pbym += 1;	
		}
		pbym++;
	}

	//Monedas
	for (int* i = denominaciones+9; i < denominaciones + 11; i++) {
		for (int* j{ &auxv }; (*j % *i) == 0; *j -= *i) {
			cout << *j << "  " << *i << endl;
			if (*j == 0) {
				break;
			}
			*pbym += 1;
		}
		pbym++;
	}*/

    

	for (int i{0}; i<11; i++)
	{
		cout << "De denominacion " << denominaciones[i] << " hay: " << bym[i] << endl;
	}
    return 0;
}
