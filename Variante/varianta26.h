#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural
n (2<=n<=9) şi elementele unui tablou bidimensional A cu n linii şi n
coloane, care memorează numere naturale mai mici decât 10, şi
afişează pe ecran (dacă există), separate prin câte un spaţiu,
elementele din matrice care au proprietatea că sunt egale cu produsul
celorlalte elemente aflate pe aceeaşi coloană. Dacă nu există astfel de
elemente, programul va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru matricea din figura alăturată se afişează, nu neapărat în
această ordine, valorile: 4 9 (4=1*2*2; 9=3*1*3).*/

void matrice(int a[100][100], int n) {

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			int p = 1;
			for (int k = 0; k < n; k++){
				if (k != i){
					p *= a[k][j];
				}
			}
			if (a[i][j] == p){
				cout << a[i][j] << " ";
			}
		}
	}

}

void ex5Var36() {

	int a[100][100], n;

	citireMatrice(a, n, n);
	matrice(a, n);

}

//s3

/*Pentru generarea numerelor cu n cifre formate cu elementele mulţimii {0,2,9} se
utilizează un algoritm backtracking care, pentru n=2, generează, în ordine, numerele
20,22,29,90,92,99.
Dacă n=4 şi se utilizează acelaşi algoritm, care este numărul generat imediat după numărul
2009?*/

int s[100], n = 3, m = 4;

int v[3] = { 0,2,9 };

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
}
	

	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = 0; i < n; i++) {
		s[k] = v[i];
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex1Var26() {

	back(0);

}

/*Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(n≤100, k≤100) şi afişează pe ecran, separaţi prin câte un spaţiu, în ordine
descrescătoare, cei mai mici k multipli naturali nenuli ai numărului n.
Exemplu: pentru n=6 şi k=5 se afişează 30 24 18 12 6.*/

void kMultiplii(int n, int k) {
	int ct = 0,i=1;
	do {
		
		cout << n * i << " ";
		
		i++;
		ct++;

	} while (ct < k);

}

void ex3Var26() {

	kMultiplii(6, 5);

}

/*Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (1≤n≤100) şi pe
următoarea linie n numere întregi din intervalul [-1000;1000], separate prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte din fişierul NUMERE.IN numărul natural n,
construieşte în memorie un tablou unidimensional v cu cele n numere întregi aflate pe linia a
doua în fişier şi utilizează apeluri utile ale subprogramului sterge pentru a elimina din
tablou un număr minim de elemente astfel încât să nu existe două elemente alăturate cu
aceeaşi valoare. Elementele tabloului obţinut se afişează pe ecran, separate prin câte un
spaţiu.
Exemplu: Dacă fişierul NUMERE.IN are conţinutul:
12
10 10 2 2 19 9 9 9 9 15 15 15 atunci se afişează 10 2 19 9 15.*/

void stergere(int v[], int& d, int p) {

	for (int i = p; i < d - 1; i++) {
		v[i] = v[i + 1];
	}
	d--;

}

void eliminareNrLaFel(int v[], int &d) {

	for (int i = 0; i < d; i++) {
		if (v[i + 1] == v[i]) {
			stergere(v, d, i + 1); 
			i--;
		}
	}

}

void ex4Var26() {

	int v[100], d;

	citire(v, d);
	eliminareNrLaFel(v, d);
	afisare(v, d);
}





















