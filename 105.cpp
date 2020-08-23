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
	gets(chr);
	if ( (chr[0] >= 'a' and chr[0] <= 'z') or (chr[0] >= 'A' and chr[0] <= 'Z') ) cout << 1;
	else cout << 0;	
	return 0;
}
