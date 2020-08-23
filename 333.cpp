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
	int c = 1;
	for (int i = 0;i < n;i++) {
		int tm = c;
		for (int j = 0;j <= i;j++) {
			cout << static_cast<char>('A' + tm - 1) << " ";
			tm += n-j-1;
		}
		cout << "\n";
		c++;
	}
	return 0;
}
