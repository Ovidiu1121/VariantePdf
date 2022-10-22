#include "varianta3.h"


/*Se consideră o stivă în care iniţial au fost introduse, în această ordine,
elementele cu valorile 1, 2 şi 3, ca în figura alăturată. Se notează cu
AD(x) operaţia prin care se adaugă elementul cu valoarea x în vârful
stivei şi cu EL operaţia prin care se elimină elementul din vârful stivei.
Reprezentaţi, după modelul alăturat, conţinutul stivei, rezultat în urma
executării secvenţei de operaţii: AD(4);EL;EL;AD(5);EL.*/

struct Node {
    int data;
    Node* next;
} *pr, * ul;

void ad(Node*& pr, Node*& ul, int x){
    if (pr == NULL)
    {
        Node* q = new Node;
        q->data = x;
        q->next = NULL;
        pr = q;
        ul = q;
        return;
    }
    Node* q = new Node;
    q->data = x;
    q->next = NULL;
    ul->next = q;
    ul = q;
}

void citireStiva(Node*& pr) {

    ifstream read("in.txt");

    Node* aux = pr;

    while (!read.eof()) {
        int data;
        read >> data;
        ad(pr,ul, data);
    }


}

void el(Node*& pr){
    if (pr == NULL)
        return;
    if (pr->next == NULL)
    {
        delete pr;
        pr = NULL;
        return;
    }
    Node* q = pr->next;
    delete pr;
    pr = q;
}

void afisareStiva(Node* pr)
{

    for (; pr; pr = pr->next) {
        cout << pr->data << " ";
    }

}

void solutie10() {

    citireStiva(pr);
    ad(pr, ul, 4);
    el(pr);
    el(pr);
    ad(pr, ul, 5);
    el(pr);
    afisareStiva(pr);
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează:
- elementele aflate pe diagonala secundară a matricei vor primi valoarea 0
- elementele de pe prima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n
- elementele de pe a doua linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n-1
...
- elementele de pe ultima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii (ca
în exemplu).
Exemplu: pentru n=4 se va afişa matricea alăturată. 
4 4 4 0
3 3 0 3
2 0 2 2
0 1 1 1*/

void matrice1(int n) {

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == 3) {
                a[i][j] = 0;
            }
            else {
                a[i][j] = n - i;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

void solutie11() {

    matrice1(4);

}

/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult
100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++
care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu,
în ordine descrescătoare, toate numerele din fişier care au cel mult 2 cifre. Dacă fişierul nu
conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA.*/

void ordineDescrescatoare(int v[], int d) {

    for (int i = d - 1; i >= 0; i--) {
        if (contorCifre(v[i]) >= 2) {
            cout << v[i] << " ";
        }
    }

}

void solutie12() {

    int v[100], d;

    citire(v, d);
    ordineDescrescatoare(v, d);

}













