#include "citire_afisare.h"

//s2

/*Scrieþi un program C/C++ care citeºte de la tastaturã un numãr natural n (2<n<20),
construieºte în memorie ºi afiºeazã pe ecran o matrice cu n linii ºi n coloane, numerotate
de la 1 la n în care fiecare element din matrice aflat pe o linie imparã va fi egal cu numãrul
liniei pe care se aflã ºi fiecare element aflat pe o linie parã va fi egal cu numãrul coloanei pe
care se aflã.
5.
Elementele matricei vor fi afiºate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaþiu între elementele fiecãrei linii.
Exemplu: pentru n=5 se va afiºa matricea alãturatã. (10p.)
1 1 1 1 1
1 2 3 4 5
3 3 3 3 3
1 2 3 4 5
5 5 5 5 5*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				a[i][j] = i+1;
			}
			else if (i % 2 == 1) {
				a[i][j] = j+1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}

}


void ex5Var18() {

	matrice(5);

}

/*Un algoritm genereazã, în ordine lexicograficã, toate ºirurile alcãtuite din câte n cifre binare
(0 ºi 1). ªtiind cã pentru n=5, primele patru soluþii generate sunt 00000, 00001, 00010,
00011, precizaþi care sunt ultimele trei soluþii generate, în ordinea obþinerii lor.*/

void ex2Var18() {


}


/*Scrieþi definiþia completã a subprogramului count care are doi parametri, a ºi n, prin care
primeºte un tablou unidimensional cu maximum 100 de numere reale ºi respectiv numãrul
efectiv de elemente din tablou. Subprogramul returneazã numãrul de elemente din tabloul a
care sunt mai mari sau cel puþin egale cu media aritmeticã a tuturor elementelor din tablou.
Exemplu: dacã tabloul are 6 elemente ºi este de forma (12, 7.5, 6.5, 3, 8.5, 7.5),
subprogramul va returna valoarea 4 (deoarece media tuturor elementelor este 7.5 ºi
numerele subliniate sunt cel puþin egale cu aceastã medie).*/

int medieAritmetica(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		s += v[i];
	}

	return s / d;
}

void contorMedieA(int v[], int d) {

	int k = medieAritmetica(v, d);

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] >= k) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var18() {

	int v[100], d;

	citire(v, d);
	contorMedieA(v, d);
}

/*În fiºierul numere.txt este memorat un ºir de maximum 10000 numere naturale, distincte
douã câte douã, cu maximum 4 cifre fiecare, separate prin câte un spaþiu. Pentru un numãr
k citit de la tastaturã, se cere afiºarea pe ecran a poziþiei pe care se va gãsi acesta în ºirul
de numere din fiºier, dacã ºirul ar fi ordonat descrescãtor, sau mesajul nu existã, dacã
numãrul k nu se aflã printre numerele din fiºier. Alegeþi un algoritm eficient de rezolvare din
punct de vedere al memoriei utilizate ºi al timpului de executare.
Exemplu: dacã fiºierul numere.txt conþine numerele 26 2 5 30 13 45 62 7 79, iar
k are valoarea 13, se va afiºa 6 deoarece 13 s-ar gãsi pe poziþia a ºasea în ºirul
ordonat descrescãtor (79 62 45 30 26 13 7 5 2).*/

void sortareDescrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

int pozitieLaSortareDesc(int v[], int d, int k) {

	sortareDescrescator(v, d);

	for (int i = 1; i <= d; i++) {
		if (v[i] == k) {
			return i;
		}
	}
	return -1;

}

void ex4Var18() {

	int v[100], d;

	citire(v, d);
	cout<<pozitieLaSortareDesc(v, d, 13);

}



















