#include "citire_afisare.h"

/*Utilizând metoda backtracking sunt generate numerele de 3 cifre care au cifrele în ordine
crescătoare, iar cifrele aflate pe poziţii consecutive sunt de paritate diferită. Ştiind că primele
cinci soluţii generate sunt, în această ordine, 123, 125, 127, 129, 145, care este cel de al
8-lea număr generat?*/

int s[100], n = 9, m = 3;

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] <= s[i]) {
			return 0;
		}
	}
	for (int i = 0; i < k; i++) {
		if (s[i] % 2 == 0 && s[i + 1] % 2 == 0 || s[i] % 2 == 1 && s[i + 1] % 2 == 1) {
			return 0;
		}
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

	for (int i = 1; i <= n; i++) {
		s[k] = i;
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

void ex1Var8() {

	back(0);

}


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
			s+=v[i];
		}
	}
	cout << "=" << s;
}

void ex3VarVar8() {

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
			if (v[i] < v[j]) {
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

void ex4Var8() {

	int v[5] = { 2,4,8,10,14 }, a[3] = { 3,5,11 };

	vectoriCombinati(v, 5, a, 3);

}

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi p
(2≤n≤20, 1≤p≤20) şi construieşte în memorie un tablou bidimensional cu n linii şi p
coloane. Tabloul va fi construit astfel încât, parcurgând tabloul linie cu linie de sus în jos şi
fiecare linie de la stânga la dreapta, să se obţină şirul primelor n*p pătrate perfecte
impare, ordonat strict crescător, ca în exemplu. Tabloul astfel construit va fi afişat pe
ecran, fiecare linie a tabloului pe câte o linie a ecranului, cu câte un spaţiu între elementele
fiecărei linii.
Exemplu: pentru n=2, p=3 se va afişa tabloul alăturat:
1 9 25
49 81 121*/

int urmatorulPatratPerfect(int n) {

	for (int i = n + 1; i < n+100; i++) {
		if (patratPerfect(i)) {
			return i;
		}
	}
	return -1;
}

void primelePPImpare(int n, int m) {

	int a[100][100];
	a[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i != 0 && j != 0) {
				int k = urmatorulPatratPerfect(a[i][j - 1]);
				a[i][j] = k;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var8() {

	primelePPImpare(2, 3);

}














