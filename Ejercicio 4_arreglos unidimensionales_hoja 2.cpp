#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>

using namespace std;

int main() {

	int a = 10, b = 20, c = 30, m, j = 0,k=0,l=0;

	cout << "Ingrese el tamaño del mensaje: ";
	cin >> m;

	char *lo;
	lo = new char[m];

	cout << "Ingrese el mensaje,caracter por caracter" << endl;

	for (int i = 0; i < m; i++) {

		cout << "Ingrese el caracter "<<i+1<<"----: " ;
		cin >> lo[i];
		cout << lo[i]<<endl;
		

		if (lo[i] == 'á' || lo[i] == 'é' || lo[i] == 'i' || lo[i] == 'ó' || lo[i] == 'ú')

			j++;

		if (lo[i] == 0 || lo[i] == 1 || lo[i] == 2 || lo[i] == 3 || lo[i] == 4 || lo[i] == 5 || lo[i] == 6 || lo[i] == 7 || lo[i] == 8 || lo[i] == 9)

			k++;

	}
	
	l = m - (j + k);

	cout << "Valor del mensaje: " << (l * 10) + (j * 30) + (k * 20);

	_getch();
	return 0;
}

