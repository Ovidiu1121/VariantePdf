#include "citire_afisare.h"

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤99), impar, şi
construieşte în memorie un tablou unidimensional A=(A1, A2,…, An) cu elementele
mulţimii {1,2,...,n} astfel încât elementele de pe poziţii impare formează şirul crescător
1,2,...,[(n+1)/2], iar elementele de pe poziţii pare şirul descrescător n,n-1,...,
[(n+1)/2]+1.
Exemplu: pentru n=11 se va construi tabloul A :
Programul va crea un fişier text TABLOU.TXT. Elementele tabloului se vor scrie, în ordine, pe
prima linie a fişierului, cu câte un spaţiu între ele.*/

void vector(int n) {

	int v[100];
	int k = 1;
	int aux = n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			v[i] = k;
			k++;
		}
		else {
			v[i] = aux;
			aux--;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << v[i] << " ";
	}

}

void ex3Var93() {

	vector(11);

}

/*a) Scrieţi definiţia completă a subprogramului dcm, cu doi parametri, care:
 - primeşte prin parametrii a şi b două valori naturale din intervalul [1,30000]
 - returnează o valoare naturală reprezentând cel mai mare număr care este atât divizor al lui a
cât şi divizor al lui b.
Exemplu: dacă a=100 şi b=120, subprogramul returnează valoarea 20. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale a şi b,
numere din intervalul [1,30000] şi determină, folosind apeluri utile ale subprogramului
dcm, cel mai mare număr care este divizor al fiecăruia dintre numerele a şi b şi are
proprietatea că este un produs de două sau mai multe numere prime distincte. Programul
afişează pe ecran numărul cu proprietatea cerută, iar dacă nu există un astfel de număr,
afişează mesajul nu exista.
Exemplu: dacă a=60 şi b=72, atunci se afişează 6
iar dacă a=100 şi b=75, atunci se afişează nu exista. */

int cmmdc(int a, int b) {

	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return b;
}

void ex4Var93() {

	cout << cmmdc(100, 120);

}





















