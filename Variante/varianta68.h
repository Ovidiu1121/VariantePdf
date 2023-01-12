#include "citire_afisare.h"


//s2

/*Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale m şi n
(1≤m≤50, 1≤n≤50) şi m* n numere naturale de cel mult 5 cifre ce reprezintă elementele
unui tablou bidimensional, şi afişează pe ecran ultima cifră a produsului elementelor pozitive
aflate pe linii cu numere de ordine pare şi coloane cu numere de ordine impare.
Numerotarea liniilor, respectiv a coloanelor, se va face începând cu valoarea 1. Dacă nu
există elemente pozitive aflate pe linii cu numere de ordine pare şi coloane cu numere de
ordine impare, se va afişa mesajul NU EXISTA. (10p.)
Exemplu: pentru m=4, n=4 şi matricea alăturată se va afişa 5
(care reprezintă ultima cifră a valorii 355=5*71).

11 -21 31 41
5 -61 71 -81
91 11 21 31
-11 31 -41 0*/

void ultimaCifra(int a[100][100],int n, int m) {

	int p = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i % 2 == 1 && j % 2 == 0) {
				if (a[i][j] > 0) {
					p *= a[i][j];
				}
			}
		}
	}
	cout << p%10;
}

void ex5Var68() {

	int a[100][100], n, m;
	citireMatrice(a, n, m);

	ultimaCifra(a, n, m);

}

//s3

/*Se utilizează metoda backtracking pentru a genera toate submulţimile cu 4 elemente ale
mulţimii {1,2,3,4,5,6}. Numărul de submulţimi generate este:*/

int s[100]{}, n = 4, m = 6;

void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] >= s[i+1]) {
			return 0;
		}
	}
	return 1;
}

int solutie(int k) {

	if (k == n- 1) {
		return 1;
	}
	return 0;
}

void back(int k) {

	for (int i = 1; i <= m; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k+1);
			}
		}
	}

}

void ex1Var68() {

	back(0);

}

/*a) Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
celor doi parametri ai săi două numere întregi, n şi k (1≤n≤100000000 şi 1≤k≤9), şi
returnează cifra de rang k a numărului n. Rangul unei cifre este numărul său de ordine,
numerotând cifrele de la dreapta la stânga; cifra unităţilor având rangul 1. Dacă numărul k
este mai mare decât numărul de cifre ale lui n, atunci funcţia returnează valoarea -1.
Exemplu: dacă n=9243 şi k=3, în urma apelului se va returna 2. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu cel mult 8
cifre. Programul va verifica, utilizând apeluri ale subprogramului calcul, dacă orice cifră a
lui n are rangul cifrei mai mare sau egal cu valoarea cifrei respective şi va afişa mesajul Da în
caz afirmativ şi mesajul Nu în caz contrar.
Exemplu : pentru n=4160 se va afişa Nu. (5p.)
rang 4 3 2 1
cifră 4 1 6 0*/

int cifraDeOrdine(int n, int k) {

	int ct = 1;

	while (n) {
		if (ct == k) {
			return n % 10;
		}
		n /= 10;
		ct++;
	}

}

bool rangMaiMare(int n) {

	int k = 1;

	while (n) {
		if (n % 10 > k) {
			return 0;
		}
		n /= 10;
		k++;
	}
	return 1;
}

void ex3Var68() {

	cout << cifraDeOrdine(9243, 3)<<endl;
	cout << rangMaiMare(4160);

}

/*Fişierul text SIR.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, separate prin spaţii, un şir crescător de n numere naturale cu cel mult 9 cifre
fiecare.
Numim platou într-un şir de valori o secvenţă de elemente identice situate pe poziţii
alăturate. Lungimea unui platou este egală cu numărul de elemente care îl formează.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare şi al spaţiului de memorie utilizat afişează pe
ecran, separate printr-un spaţiu, lungimea maximă a unui platou, precum şi valoarea care
formează platoul. În cazul în care sunt mai multe platouri de aceeaşi lungime se va afişa
valoarea cea mai mare care formează unul dintre aceste platouri. (6p.)
Exemplu: dacă fişierul SIR.TXT
are conţinutul alăturat,
10
11 211 211 211 328 400 400 1201 1201 1201
atunci programul va afişa pe ecran 3 1201.*/

void secventaPlatou(int v[], int d) {

	int ct = 1;
	int maxim = 0;
	int nrMax=0;

	for (int i = 0; i < d; i++) {
		int j = i;
		ct = 1;
		while (j < d - 1 && v[j] == v[j + 1]) {
			ct++;
			j++;
		}
		i = j;
		if (ct >= maxim) {
			maxim = ct;
			if (v[i] > nrMax) {
				nrMax = v[i];
			}
		}
	}
	cout << maxim << " " << nrMax;
}

void ex4Var68() {

	int v[100], d;

	citire(v, d);
	secventaPlatou(v, d);


}








