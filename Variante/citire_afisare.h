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












