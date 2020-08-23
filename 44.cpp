#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	char chr[mx];
	fflush(stdin);gets(chr);
	char *p = strtok(chr," ");
	int dem = 0;
	while (p != null) {
		dem++;
		p = strtok(null," ");
	}
	cout << dem;
	return 0;
}
