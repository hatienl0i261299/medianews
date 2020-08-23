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
	if (b == 0) {
		printf("%d",0);
		return 0;
	}
	printf("%d %d %d %.2f %d",a+b,a-b,a*b,(float)a/(float)b,a%b);
}
