#include "varianta7.h"


/*Pe prima linie a fişierului text BAC.TXT se află o valoare naturală n (1<n≤50), iar pe a doua
linie n numere naturale cu maximum 4 cifre fiecare, despărţite prin câte un spaţiu. În şirul
numerelor de pe a doua linie a fişierului există cel pzâin două numere pătrate perfecte.
Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran
expresia aritmetică reprezentând suma numerelor de pe a doua linie a fişierului care au
proprietatea că sunt pătrate perfecte, cu simbolul + între ele şi, după un semn =, valoarea
acestei sume, ca în exemplu. Termenii sumei afişate se pot afla în orice ordine.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut
5
9 5 36 9 8
atunci pe ecran se poate afişa:
9+9+36=54 sau 9+36+9=54 sau 36+9+9=54*/

bool patratPerfect(int n) {

	if (sqrt(n) == (int)sqrt(n)) {
		return true;
	}
	return false;
}

void mediePatratePerf(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		if (patratPerfect(v[i]) == 1) {
			cout << v[i] << "+";
			s += v[i];
		}
	}
	cout << "=" << s;
}

void solutie22() {

	int v[100], d;

	citire(v, d);
	mediePatratePerf(v, d);

}

/*Subprogramul sub primeşte prin intermediul parametrilor:
– n şi m două numere naturale (1<n<100, 1<m<100)
– a şi b două tablouri unidimensionale, fiecare având componente numere naturale de
maximum patru cifre, ordonate crescător; tabloul a conţine n numere pare, iar tabloul b
conţine m numere impare.
Subprogramul va afişa pe ecran, în ordine crescătoare, separate prin câte un spaţiu, un şir
format dintr-un număr maxim de elemente care aparţin cel puţin unuia dintre tablouri, astfel
încât orice două elemente aflate pe poziţii consecutive să fie de paritate diferită.
Exemplu: pentru n=5, m=3 şi tablourile a=(2,4,8,10,14) şi b=(3,5,11), subprogramul
va afişa 2 3 4 5 8 11 14 sau 2 3 4 5 10 11 14.*/

bool paritatiDiferite(int a, int b) {

	if (a % 2 == 0 && b % 2 == 1 || a % 2 == 1 && b % 2 == 0) {
		return true;
	}
	return false;
}

void sortareDescrescator(int v[], int d) {

	for (int i = 0; i < d-1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void stergere(int v[], int& d, int p) {

	for (int i = p; i < d - 1; i++) {
		v[i] = v[i + 1];
	}
	d--;

}

void vectoriCombinati(int v[], int d, int a[], int b) {

	int x[100], y = 0;

	for (int i = 0; i < d; i++) {
		x[y] = v[i];
		y++;
	}
	for (int i = 0; i < b; i++) {
		x[y] = a[i];
		y++;
	}
	sortareDescrescator(x, y);

	for (int i = 0; i < y; i++) {
		if (paritatiDiferite(x[i], x[i + 1]) == 0) {
			stergere(x, y, i + 1);
			i--;
		}
	}

	for (int i = 0; i < y; i++) {
		cout << x[i] << " ";
	}

}

void solutie23() {

	int v[5] = { 2,4,8,10,14 }, a[3] = { 3,5,11 };

	vectoriCombinati(v, 5, a, 3);

}






















