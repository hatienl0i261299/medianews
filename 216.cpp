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
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		int c = 1;
		for (int j = 1;j <= i*2-1;j++) {
			cout << c++;
		}
		cout << "\n";
	}
	return 0;
}
