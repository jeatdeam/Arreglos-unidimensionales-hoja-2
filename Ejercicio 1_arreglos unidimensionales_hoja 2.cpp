#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int main() {
	int n,suma=0,p,j=0;
	cout << "Cantidad de Pernos: ";
	cin >> n;

	int *nose, *Vec;
	nose = new int[n];
	Vec = new int[n];
	
	srand(time(NULL));

	cout << "Ingrese el diametro DE (5-30): " << endl;
	cin >> p;

	for (int i = 0; i < n; i++) {

		nose[i] = 5 + rand() % (30 + 1 - 5);

		cout << "El diametro del perno " << i + 1 << " es : " << nose[i] << endl;

		suma += nose[i];

		if (nose[i] < p)

			j++;

	}

    if (j > n / 2)
	cout << "Lote defectuoso--" <<j<<" tornillos menores al diametro de DE  "<< endl;
	else {
		cout << "La cantidad de pernos que tienen el diametro inferior a DE es:  " << j<<endl;

	}
	
	//1. Ordenar el vector
	/*int aux; //un temporal que ayuda al intercambio
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (nose[i] > Vec[j])
			{
				aux = Vec[i];
				nose[i] = Vec[j];
				Vec[j] = aux;
			}
	}
	*/
	/*for (int i = 0; i < n; i++) {
		cout <<"Los numeros en orden son: "<< Vec[i]<<endl;
	}*/

	cout << "EL Diametro promedio es: " << suma / n;

	

	

	_getch();
	return 0;
}