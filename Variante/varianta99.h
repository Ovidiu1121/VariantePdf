#include "citire_afisare.h"
#include <cmath>

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤24) şi
construieşte în memorie un tablou bidimensional cu n linii şi n coloane care să conţină
primele n numere naturale nenule. Prima linie a tabloului va conţine, în această ordine,
valorile 1,2,...,n; a doua linie va conţine, în ordine, valorile 2,2,3,...,n; a treia linie
va conţine, în ordine, valorile 3,3,3,4,...,n, iar ultima linie va conţine valorile n,
n,..., n.
Programul afişează pe ecran matricea construită, câte o linie a matricei
pe câte o linie a ecranului, elementele fiecărei linii fiind despărţite prin
câte un spaţiu.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5*/

void matrice(int n) {

	int a[100][100];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1) {
				a[i][j] = j;
			}
			else if(i>a[i-1][j]) {
				a[i][j] = a[i - 1][j] + 1;
			}
			else {
				a[i][j] = a[i - 1][j];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

void ex5Var99() {

	matrice(5);

}

//s3

/*Subprogramul Nr are un singur parametru, k, prin intermediul căruia primeşte un număr
natural de cel puţin 3 cifre şi cel mult 9 cifre, cu toate cifrele nenule. Subprogramul
furnizează tot prin intermediul parametrului k, valoarea obţinută prin eliminarea primei şi
ultimei cifre a numărului transmis la apel.
Exemplu: dacă subprogramul primeşte prin intermediul parametrului k valoarea 12438, în
urma apelului subprogramului Nr, k va primi valoarea 243.
Scrieţi, în limbajul C/C++, definiţia completă a subprogramului Nr*/

void eliminareCifre(int n) {
	int nou;
	 
	int ct = 0;
	int aux = n;

	while (aux) {
		ct++;
		aux /= 10;
	}

	int pc = n / pow(10, ct - 1);
	nou = n - pc * pow(10, ct - 1);

	pc = nou % 10;
	nou /= 10;

	cout << nou;

}

void ex3Var99() {

	eliminareCifre(12345);

}

/*Pe prima linie a fişierului text DATE.TXT se află un şir de cel mult 10000 de numere întregi,
având cel mult 4 cifre fiecare. Numerele sunt despărţite prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte numerele din fişier şi afişează pe ecran lungimea
maximă a unei secvenţe de numere din şir, cu proprietatea că oricare două numere din
secvenţă, aflate pe poziţii consecutive, au parităţi diferite. Pe a doua linie a ecranului,
programul va afişa o secvenţă de lungime maximă, valorile fiind despărţite prin câte un
spaţiu. Dacă există mai multe secvenţe de lungime maximă, se va afişa una dintre ele,
oricare. Alegeţi o metodă de rezolvare eficientă ca timp de executare.
Exemplu: dacă fişierul conţine, în ordine, numerele 2 4 3 2 7 4 6 2 7 8 12, se va
afişa:
5
4 3 2 7 4 */

bool paritateDif(int a, int b) {

	if (a % 2 == 0 && b % 2 == 0 || a % 2 == 1 && b % 2 == 1) {
		return true;
	}
	return false;
}

void secventaMax(int v[], int d) {

	int st, fn, ct = 0, maxim = 0;

	for (int i = 0; i < d; i++) {
		int j = i;
		ct = 0;
		while (paritateDif(v[j], v[j + 1])==0 && j < d - 1) {
			j++;
			ct++;
			if (ct > maxim) {
				maxim = ct;
				st = i;
				fn = j;
			}
		}
		i = j;
	}

	for (int i = st; i <= fn; i++) {
		cout << v[i] << " ";
	}

}

void ex4Var99() {

	int v[100], d;

	citire(v, d);
	secventaMax(v, d);

}




