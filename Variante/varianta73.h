#include "citire_afisare.h"

/*Se generează în ordine crescătoare toate numerele de 4 cifre, cu cifre distincte, astfel încât
diferenţa în valoare absolută dintre ultimele două cifre ale fiecărui număr generat este egală
cu 2. Primele opt soluţii generate sunt, în ordine: 1024, 1035, 1042, 1046, 1053, 1057,
1064, 1068. Care dintre următoarele numere se va genera imediat după numărul 8975?*/


int s[100], n = 4, m = 9;

void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
	}

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}

	if (k >= 3) {
		if (abs(s[2] - s[3]) != 2) {
			return 0;
		}
	}

	return 1;
}

int solutie(int k) {

	if (k == n - 1) {
		return 1;
	}
	return 0;
}

void back(int k) {

	for (int i = 0; i <= m; i++) {
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

void ex1Var73() {

	back(0);
}

/*a) Scrieţi definiţia completă a subprogramului Cautare, cu trei parametri, n, x şi v, care
primeşte prin parametrul n un număr natural (1≤n≤1000), prin parametrul x un tablou
unidimensional format din n componente (numere întregi de cel mult patru cifre fiecare: x1,
x2, …, xn) memorate în ordine crescătoare şi prin parametrul v un număr întreg de cel mult
patru cifre, diferit de oricare dintre elementele tabloului unidimensional x.
Subprogramul va căuta, în mod eficient din punct de vedere al timpului de executare, poziţia
pe care ar trebui inserată valoarea v în şirul x astfel încât să se obţină tot un şir ordonat şi
returnează această poziţie. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
c) Fişierul text sir.in conţine cel mult 1000 numere naturale de maximum patru cifre
fiecare, numerele fiind diferite două câte două şi despărţite prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte numerele din fişierul sir.in şi, folosind apeluri utile
ale subprogramului Cautare, construieşte în memorie un tablou unidimensional care va
conţine toate numerele din fişierul sir.in ordonate crescător. Programul scrie în fişierul
text sir.out şirul obţinut, câte 10 elemente pe un rând, elementele de pe acelaşi rând
fiind despărţite printr-un singur spaţiu.
Exemplu: dacă fişierul sir.in conţine numerele: 7 -5 635 -456 0 8 587 -98 65 3 -8
atunci după executarea programului fişierul sir.out va conţine:
-456 -98 -8 -5 0 3 7 8 65 587
635*/

int cautare(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] >= n) {
			return i;
		}
	}
	return -1;
}

void ex3Var73() {

	int v[100], d;

	citire(v, d);
	cout << cautare(v, d, 4);
	sortareCrescator(v, d);
	afisare(v, d);
}



















