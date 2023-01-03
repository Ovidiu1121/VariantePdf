#include "citire_afisare.h"


//s2

/*Se consideră o listă simplu înlănţuită alocată dinamic, în care fiecare nod memorează în
câmpul info un număr întreg, iar în câmpul urm adresa elementului următor sau NULL
dacă nu există un nod următor.
Scrieţi un program C/C++ care citeşte de la tastatură 3 numere naturale nenule n, a şi r
(n≤20, a≤10, r≤10) şi construieşte în memorie o listă simplu înlănţuită astfel încât
parcurgând lista de la primul nod până la ultimul nod şi afişând pe ecran, separate prin câte
un spaţiu, numerele memorate în câmpul info al fiecărui nod, se obţin în ordine strict
crescătoare toate elementele mulţimii M={a, a+r, a+2⋅r,...,a+(n-1)⋅r}.
5.
Exemplu: dacă n=4, a=10, r=2 atunci se vor afişa elementele alăturate.
(10p.)
10 12 14 16*/

struct Node {

	int data;
	Node* next;

};

void functie(int a, int n, int r) {

	Node* head = new Node;
	head->data = a;
	head->next = NULL; 

	Node* aux = head; 

	for (int i = 1; i < n; i++) {
		Node* nou = new Node;
		nou->data = a + i * r;
		nou->next = NULL;
		aux->next = nou;
		aux = nou;
	}
	aux = head;

	while (aux) {
		cout << aux->data << " ";
		aux = aux->next;
	}

}

void ex5Var53() {

	functie(10, 4, 2);

}

//s3

/*Se consideră subprogramul cmmdc, care primeşte prin intermediul a doi parametri, a şi b,
două numere naturale nenule, cu maximum 8 cifre fiecare, şi returnează cel mai mare
divizor comun al valorilor parametrilor a şi b.
a) Scrieţi definiţia completă a subprogramului cmmdc. (4p.)
b) Scrieţi un program Pascal care citeşte de la tastatură un număr natural n (n<300), şi,
cu ajutorul subprogramului cmmdc, determină numărul perechilor de valori naturale (a,b),
1<a<b<n, cu proprietatea că a şi b nu au niciun divizor comun în afară de 1. Numărul
obţinut se va afişa pe ecran.
Exemplu: dacă se citeşte n=6, atunci se va afişa 6 (deoarece perechile (2,3), (2,5),
(3,4), (3,5), (4,5), (5,6) satisfac condiţiile din enunţ).*/

int cmmdc(int a, int b) {

	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}return b;
}

void perechi(int n) {
	int ct = 0;

	for (int i = 1; i <= n; i++) {
		int j = i;
		while (j <= n) {
			if (cmmdc(i, j) == 1) {
				ct++;
			}
			j++;
		}
		i = j;
	}
	cout << ct;
}

void ex3Var53() {

	perechi(6);

}

/*Fişierul text bac.txt are două linii: pe prima linie conţine un număr natural nenul n
(n<=100), iar pe linia a doua un şir format din n numere naturale de cel mult 4 cifre fiecare,
despărţite prin spaţii. Scrieţi un program C/C++ care adaugă în fişier toate permutările
circulare distincte ale şirului de pe linia a doua a fişierului. Astfel, se vor adăuga la sfârşitul
fişierului încă n-1 linii, fiecare linie conţinând permutarea circulară cu o poziţie către
stânga, a elementelor şirului aflat pe linia precedentă din fişier. Elementele fiecărei
permutari vor fi separate prin câte un spaţiu.
Exemplu: dacă fişierul bac.txt conţine liniile:
4
10 20 30 49
atunci, după rularea programului, fişierul va avea conţinutul
reprezentat alăturat. (10p.)
4
10 20 30 49
20 30 49 10
30 49 10 20
49 10 20 30*/

void permutareCircularaStanga(int v[], int d) {

	int aux = v[0];

	for (int i = 1; i < d; i++) {
		v[i - 1] = v[i];
	}

	v[d - 1] = aux;

}

void permutari(int v[], int d) {

	for (int i = 0; i < d; i++) {
		afisare(v, d);
		permutareCircularaStanga(v, d);
		cout << endl;
	}

}

void ex4Var53() {

	int v[100], d;

	citire(v, d);
	permutari(v, d);

}










