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
    int n,m,a[mx][mx],_mx;cin >> n >> m;
    if (n > m) {
    	_mx = n;
	}else {
		_mx = m;
	}
    for (int i = 0;i < mx;i++) {
    	for (int j = 0;j < mx;j++) {
    		a[i][j] = _mx;
		}
	}
	for (int i = 1;i <= m;i++) {
		int x = i,y = i;
		while (y <= m ) {
			a[x][y] = _mx;
			y++;
		}
		
		x = i,y = i;
		while (x <= n) {
			a[x][y] = _mx;
			x++;
		}
		
		_mx--;
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cout << static_cast<char>(a[i][j] + 'a' - 1);
		}
		cout << "\n";
	}
}




