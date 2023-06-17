
#include "citire_afisare.h"


/*Se consideră subprogramul valuri, cu doi parametri:
• n, prin care primeşte o valoare naturală 2<n<50;
• v, prin care furnizează un tablou unidimensional cu 2·n elemente, valori întregi din
intervalul [1, 2·n].
Subprogramul construieşte tabloul v astfel încât, în acesta, şirul elementelor impare să fie
strict crescător, iar şirul elementelor pare să fie strict descrescător. Primul element al
tabloului este impar, iar două elemente cu aceeaşi paritate nu pot ocupa poziţii
consecutive în tablou, ca în exemplu.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=4 atunci, după apel, v=( 1, 8, 3, 6, 5, 4, 7, 2).*/

void vector(int n) {

	int v[100];
	int par = 1, imp = n*2;

	for (int i = 0; i < n * 2; i++) {
		if (i % 2 == 1) {
			v[i] = imp;
			imp -= 2;
		}
		else if (i % 2 == 0) {
			v[i] = par;
			par += 2;
		}
	}

	for (int i = 0; i < n * 2; i++) {
		cout << v[i] << " ";
	}

}

void ex3Var3() {

	vector(4);

}

/*Se consideră şirul definit alăturat (unde n este
un număr natural nenul), în care nu există doi
termeni cu aceeași paritate aflați pe poziții
consecutive:
1, 2, 3, 4, 7, 8, 15, 16 ....





+ ⋅
+
=
=
, altfel 2-n
1 2 f
, dacă n par 1-n
1 f
1, dacă n 1
fn
Se citeşte de la tastatură un număr natural x, cu cel mult nouă cifre, termen al şirului dat,
şi se cere să se scrie în fişierul text bac.txt, în ordine strict descrescătoare, separați prin
câte un spațiu, toţi termenii şirului care sunt mai mici sau egali cu x.
Pentru determinarea termenilor ceruţi se utilizează un algoritm eficient din punctul de
vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă x=15, fişierul bac.txt conţine numerele
15 8 7 4 3 2 1 */

void sir(int x) {
	cout << x << " ";
	while (x >1) {
		if (x % 2 == 1) {
			x = x / 2 + 1;
			cout << x<<" ";
		}
		else if (x % 2 == 0) {
			x = x - 1;
			cout << x<<" ";
		}
	}
}

void ex4Var3() {

	sir(15);

}




































