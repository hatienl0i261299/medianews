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
	char s[mx];
	fflush(stdin);gets(s);
	strlwr(s);
	int so = 0,chu_cai = 0,ky_tu = 0;
	for (int i = 0;i < strlen(s);i++) {
		if (s[i] >= 'a' and s[i] <= 'z') chu_cai++;
		else if (s[i] >= '0' and s[i] <= '9') so++;
		else ky_tu++;
	}
	cout << so << " " << chu_cai << " " << ky_tu;
	return 0;
}
