#include "varianta17.h"


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



















