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


int main()
{
    int n,m,a[mx][mx];cin >> n >> m;
    for (int i = 0;i < mx;i++) {
    	for (int j = 0;j < mx;j++) {
    		a[i][j] = m;
		}
	}
	for (int i = 1;i <= m;i++) {
		int x = 1,y = i;
		a[x][y] = i;
		while (y != 0 ) {
			a[x][y] = i;
			x++;
			y--;
		}
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cout << static_cast<char>(a[i][j] + 'A' - 2);
		}
		cout << "\n";
	}
}




