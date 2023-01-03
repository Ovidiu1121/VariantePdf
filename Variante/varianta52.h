#include "citire_afisare.h"


/*Subprogramul mult, cu doi parametri, primeşte prin intermediul primului parametru, n, un
număr natural nenul cu maximum trei cifre şi prin intermediul celui de-al doilea parametru,
a, un tablou unidimensional având n componente numere naturale cu cel mult 8 cifre
fiecare. Subprogramul returnează valoarea true dacă cele n componente ale lui a pot
forma o mulţime şi returnează false în caz contrar.
a) Scrieţi definiţia completă a subprogramului mult. (6p.)
b) Fişierul text date.in conţine cel mult 400 de numere naturale având maximum 8 cifre
fiecare. Scrieţi un program C/C++ care, folosind apeluri utile ale subprogramului mult,
afişează pe ecran valoarea maximă k, astfel încât primele k numere succesive din fişier să
poată forma o mulţime.
Exemplu: dacă fişierul date.in conţine
16 17 8 31 8 2 10
atunci se va afişa 4 (deoarece primele patru numere din fişier pot forma o mulţime şi
acesta este cardinalul maxim posibil în condiţiile impuse de enunţul problemei)*/

void ex3Var52() {



}

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(k<n≤10000) şi afişează pe ecran un şir format din k numere naturale consecutive care au
suma n. Numerele se vor afişa pe ecran, în ordine crescătoare, despărţite între ele prin
câte un spaţiu. În cazul în care nu există un astfel de şir, se va afişa mesajul Nu există.*/

void nrConsecutive(int s, int k) {

	if (s % k == 0) {
		int n = s / k - (k - 1) / 2;

		for (int i = n; i < n + k; i++) {
			cout << i << " ";
		}
	}
	else {
		cout << "nu se poate";
	}
}

void ex4Var52() {

	nrConsecutive(9,3);

}



















