#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b;cin >> a >> b;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < i;j++) cout << "~";
		for (int j = 0;j < b;j++) {
			if (j == 0 or j == b-1 or i == 0 or i == a-1) cout << "*";
			else cout << ".";
		}
		cout << endl;
	}
	return 0;
}
