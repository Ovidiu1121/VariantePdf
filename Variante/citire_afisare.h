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
















