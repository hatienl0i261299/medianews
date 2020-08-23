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
	for (int i = 0;i < strlen(chr);i++) {
		if (chr[strlen(chr)-i-1] != ' ')
			cout << chr[strlen(chr)-i-1] << " ";
	}
	return 0;
}
