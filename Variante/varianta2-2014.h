#include "citire_afisare.h"

/*Un număr natural nenul se numește perfect dacă este egal cu suma divizorilor săi naturali
strict mai mici decât el.
Exemplu: 28 este număr perfect pentru că 28=1+2+4+7+14.
Se consideră subprogramul perfect, cu doi parametri, a și b, prin care primeşte câte un
număr natural (2≤a<b≤109). Subprogramul afișează pe ecran, separate prin câte un
spațiu, în ordine descrescătoare, toate numerele perfecte din intervalul [a,b]. Dacă în
interval nu există astfel de numere, subprogramul afișează pe ecran mesajul nu exista.
Scrieţi definiţia completă a subprogramului.
Exemplu: pentru a=5 și b=30, se afișează pe ecran: 28 6*/

bool nrPerfect(int n) {

	int s = 0;

	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	if (s == n) {
		return true;
	}
	return false;
}

void interval(int a, int b) {

	for (int i = a; i <= b; i++) {
		if (nrPerfect(i)) {
			cout << i << " ";
		}
	}

}

void ex3Var2() {

	interval(5, 30);

}

/*Numim secvență uniformă a unui șir de numere naturale un subșir al acestuia, format din
termeni cu aceeași valoare, aflați pe poziții consecutive în șirul dat. Lungimea secvenței
este egală cu numărul de termeni ai acesteia.
Fișierul bac.txt conține un șir de cel puțin două și cel mult 1000000000 de numere
naturale din intervalul [0, 109
]. Numerele sunt separate prin câte un spațiu, iar în șir există
cel puțin doi termeni egali pe poziții consecutive.
Se cere să se determine o secvență uniformă de lungime maximă în șirul aflat în fișier și
să se afișeze pe ecran lungimea acestei secvențe și, pe o linie nouă, separați prin câte un
spațiu, termenii acesteia. Dacă sunt mai multe astfel de secvențe, se afișează doar
termenii ultimei dintre acestea. Pentru determinarea numerelor cerute se utilizează un
algoritm eficient din punctul de vedere al memoriei necesare și al timpului de executare.
Exemplu: dacă fişierul bac.txt conţine numerele
2 3 3 3 3 5 4 4 11 11 11 11 16 11 11 11 11 15 15
atunci pe ecran se afișează valorile
4
11 11 11 11*/

void secventaUniforma(int v[], int d) {

	int secventaMax = 0, secventa;
	int k;
	for (int i = 0; i < d; i++) {
		int j = i;
		secventa = 1;
		while (j < d - 1 && v[j] == v[j + 1]) {
			secventa++;
			j++;
		}
		if (secventa >= secventaMax) {
			secventaMax = secventa;
			k = v[i];
		}
		i = j;
	}
	cout << secventaMax << endl;
	int ct = 0;
	while (ct < secventaMax) {
		cout << k<<" ";
		ct++;
	}
}

void ex4Var2() {

	int v[100], d;
	citire(v, d);
	secventaUniforma(v, d);

}












