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

void solve() {
	char s[mx];fflush(stdin);gets(s);
	for (int i = 0;i < strlen(s);i++) {
		if (s[i] >= 'a' and s[i] <= 'z') s[i] -= 32;
		else if (s[i] >= 'A' and s[i] <= 'Z') s[i] += 32;
	}
	cout << s;
}

int main() {
	solve();
	return 0;
}
