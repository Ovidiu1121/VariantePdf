#include "citire_afisare.h"


/*Utilizăm metoda backtracking pentru generarea tuturor modalităţilor de a scrie numărul 6 ca
sumă a cel puţin două numere naturale nenule. Termenii fiecărei sume sunt în ordine
crescătoare. Soluţiile se generează în ordinea: 1+1+1+1+1+1, 1+1+1+1+2, 1+1+1+3,
1+1+4, 1+5, 2+2+2, 2+4 şi 3+3. Se aplică exact aceeaşi metodă pentru scrierea lui 9.
Care este penultima soluţie?*/

void ex1Var39() {


}

/*Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte valorile din fişier şi care afişează pe ecran mesajul DA dacă toate elementele pare
din şir sunt în ordine crescătoare şi mesajul NU în caz contrar.*/

bool numerePareCrescator(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			a[b] = v[i];
			b++;
		}
	}

	for (int i = 0; i < b-1; i++) {
		if (a[i] > a[i + 1]) {
			return false;
		}
	}
	return true;
}

void ex3Var39() {

	int v[100], d;

	citire(v, d);
	cout << numerePareCrescator(v, d);
}

/*Considerăm un număr natural nenul n>99 cu cel mult 9 cifre. Din n se obţine un şir de
valori prin eliminarea succesivă a ultimei cifre, apoi a ultimelor două cifre, apoi a ultimelor
trei cifre etc., până ce se obţine un număr de două cifre, ca în exemplu. Să se realizeze un
program C/C++ care citeşte de la tastatură numărul n şi care, folosind apeluri utile ale
subprogramul pr, afişează pe ecran, separate prin câte un spaţiu, doar valorile prime din
şirul numerelor obţinute din n, prin procedeul descris mai sus.
Exemplu: pentru n=193124 se obţine şirul de valori 19312,1931, 193, 19. din care se
vor afişa pe ecran doar valorile 1931 193 19 (nu neapărat în această ordine).*/

void divizare(int n) {

	while (n) {
		n /= 10;
		if (prim(n)) {
			cout << n << " ";
		}
	}

}

void ex4Var39() {

	divizare(19312);

}

















