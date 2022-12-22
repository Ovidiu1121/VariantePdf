#include <iostream>
using namespace std;
#include <fstream>



void citire(int v[], int& d) {

	ifstream read("in.txt");

	read >> d;

	for (int i = 0; i < d; i++) {
		read >> v[i];
	}

}

void afisare(int v[], int d) {

	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}

}

void citireMatrice(int a[100][100], int& n, int& m) {

	ifstream read("in.txt");

	read >> n;
	read >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			read >> a[i][j];
		}
	}

}

void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

bool prim(int n) {

	if (n == 0 || n == 1) {
		return false;
	}

	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool nrGasit(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}

void sortareDescrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void sortareCrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}




