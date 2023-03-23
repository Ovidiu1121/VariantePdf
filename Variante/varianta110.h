#include "citire_afisare.h"

/*Subprogramul produs are doi parametri:
• n, prin care primește un număr natural (n[0,109]);
• p, prin care furnizează produsul cifrelor pare distincte din scrierea acestuia, sau -1 dacă nu există
astfel de cifre.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=1622325, după apel p=12 (12=6∙2), iar dacă n=122325, după apel p=2.*/

void produs(int n) {

	int v[10]{}, p = 1 , k = 0;

	while (n > 0)
	{
		int ok = 0;
		for (int i = 1; i <= 4; i++) {
			if (n % 10 == v[i]) {
				ok = 1;
			}
		}
		if (ok == 0 && n % 2 == 0) {
			k++;
			v[k] = n % 10;
			p *= n % 10;
		}
		n /= 10;

	}
	cout << p;

}

void ex1Var10() {

	produs(1622325);

}

/*Un șir format din cel puțin trei termeni formează o progresie aritmetică de rație r dacă diferența dintre
oricare termen al acestuia și cel aflat pe poziția consecutivă în șir este egală cu r.
Fișierul text bac.txt conține un șir de cel puțin trei și cel mult 106 numere întregi din intervalul
[-108,108]. Numerele sunt separate prin câte un spațiu. Se cere să se afișeze pe ecran rația unei
secvențe din șir cu număr maxim de termeni, secvență care formează o progresie aritmetică. Dacă
există mai multe astfel de secvențe de lungime maximă se afișează rația cea mai mare, iar dacă nu
există nicio astfel de secvență, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient
din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 4 9 14 19 18 17 8 5 3 1 -1 -3 -5 -7
pe ecran se afișează valoarea -2 (corespunzătoare secvenței 5 3 1 -1 -3 -5 -7).*/

void progresieAritmetica(int v[], int d) {
	int secventaMax = 0;
	int ct, ratieFinala;

	for (int i = 0; i < d; i++) {
		int j = i;
		ct = 0;
		int r = v[i + 1] - v[i];
		while (v[j + 1] - v[j] == r && j < d - 1) {
			j++;
			ct++;
			if (ct > secventaMax) {
				secventaMax = ct;
				ratieFinala = r;
			}
		}
	}
	cout << ratieFinala;
}

void ex3Var10() {

	int v[100], d;
	citire(v, d);
	progresieAritmetica(v, d);

}














