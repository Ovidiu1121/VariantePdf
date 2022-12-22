#include "varianta28.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr
natural n (1≤n≤6) şi elementele unui tablou bidimensional A cu n linii
şi n coloane, care memorează numere naturale nenule mai mici decât
100, şi afişează pe ecran produsul numerelor “pivot” pentru matricea
A dacă există astfel de numere, altfel va afişa mesajul NU EXISTA.
Un număr natural x este “pivot” pentru matricea A dacă înmulţind
fiecare element de pe prima coloană cu numărul x, se obţin, în
aceeaşi ordine, elementele unei alte coloane din matrice.*/

void matrice(int a[100][100], int n) {
    int k = 1;
    for (int i = 1; i < n; i++){
        bool flag = true;
        for (int j = 0; j < n; j++){
            if (a[j][0] * i != a[j][i]) {
                flag = false;
                break;
            }
        }
        if (flag){
            k *= i;
        }

    }
    cout << k;
}

void ex5Var29() {

    int a[100][100], n, m;

    citireMatrice(a, n, m);
    matrice(a, n);

}

//s3

/*Scrieţi definiţia completă a subprogramului multipli, cu trei parametri a,b,c (a≤b),
numere naturale din intervalul [1,10000] ce returnează numărul numărul multiplilor lui c
din intervalul [a;b].
Exemplu: pentru a=10, b=27,c=5 subprogramul returnează valoarea 4.*/

int mulpipliiINterval(int a, int b, int c) {
	int ct = 0;
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			ct++;
		}
	}
	return ct;
}

void ex3Var29() {

	cout << mulpipliiINterval(10, 27, 5);

}

/*Se consideră două tablouri unidimensionale A şi B cu elemente numere naturale din
intervalul [1,10000]. Spunem că tabloul A “se poate reduce” la tabloul B dacă există o
împărţire a tabloului A în secvenţe disjuncte de elemente aflate pe poziţii consecutive în
tabloul A astfel încât prin înlocuirea secvenţelor cu suma elementelor din secvenţă să se
obţină, în ordine, elementele tabloului B.
De exemplu tabloul
se poate reduce la tabloul
Fişierul text NUMERE.IN conţine pe prima linie două numere naturale nenule n şi m
(1≤m≤n≤100), pe linia a doua n numere naturale din intervalul [1;10000] şi pe linia a
treia alte m numere naturale din intervalul [1;10000]. Pe fiecare linie numerele sunt
separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte toate numerele din fişierul NUMERE.IN şi verifică,
utilizând un algoritm eficient din punctul de vedere al timpului de executare, dacă tabloul
construit cu cele n numere aflate pe linia a doua în fişier se poate reduce la tabloul construit
cu cele m numere aflate pe linia a treia în fişier. Programul afişează pe ecran mesajul DA în
caz afirmativ şi mesajul NU în caz negativ.*/

void ex4Var29() {


}

















