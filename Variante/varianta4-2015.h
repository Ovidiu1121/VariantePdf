#include "citire_afisare.h"


/*Șirul lui Fibonacci (1, 1, 2, 3, 5, 8, 13, 21,…) se definește astfel:
f1=1, f2=1 și fi=fi-1+fi-2 pentru orice număr natural i, i≥3.
Subprogramul Fibo are un singur parametru, n, prin care primeşte un număr natural
(n∈[1,30]). Subprogramul returnează al n-lea termen impar al șirului lui Fibonacci.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=6, subprogramul returnează numărul 21*/

void fibonacci(int n) {

	int f1 = 1, f2 = 1, f3=0;
	int k = 2;
	
	while (k != 6) {
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
		if (f3 % 2 == 1) {
			k++;
		}
	}
	cout << f3;
}

void ex3Var4() {

	fibonacci(6);

}

/*Fișierul bac.txt conține un șir de cel mult un milion de numere naturale din intervalul
[0,102], separate prin câte un spațiu.
Se cere să se determine toate perechile distincte formate din termeni ai șirului aflat în
fișier, x și y (y-x≥2), astfel încât să nu existe niciun termen al șirului care să aparțină
intervalului (x,y). Numerele din fiecare pereche sunt afișate pe câte o linie a ecranului, în
ordine strict crescătoare, separate printr-un spațiu, iar dacă nu există nicio astfel de
pereche, se afișează pe ecran mesajul nu exista. Pentru determinarea numerelor
cerute utilizați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele
5 9 0 8 10 11 12 13 15 14 6 7 40 10 0 0 5 41 95 7
atunci pe ecran se afișează, nu neapărat în această ordine, perechile
0 5
15 40
41 95 */


void ex4Var4() {



}

















