#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>

using namespace std;

int main() {

	int a;


	do {
		cout << "Ingrese N: ";
		cin >> a;
	} while (a > 50);

	int *vector;
	vector = new int[a];

	srand(time(NULL));

	for (int i = 0; i < a; i++) {

		vector[i] = 1 + rand() % (100 + 1 - 1);

		cout << "El numero " << i + 1 << " es : " << vector[i]<<endl;
	}

	for (int i = 0; i < a; i++) {


		if (vector[i] < vector[i+1])

			cout << vector[i]<<" ";

		else {
			
			cout <<endl ;
			 if (vector[i+2] < vector[i + 3])

				 cout << vector[i+2] << " ";

				 
			
		}
	}


	_getch();
	return 0;

}
