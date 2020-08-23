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
	char s[mx];fflush(stdin);gets(s);
	for (int i = 0;i < strlen(s);i++) {
		if (s[i] != ' ') {
			cout << s[i];
		}
	}
	return 0;
}
