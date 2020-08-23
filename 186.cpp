#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,x,y,_mi,_ma,arr[mx][mx];
	cin >> a >> b;
	
	if (a > b) _ma = a,_mi = b;
	else _ma = b,_mi = a;
	
	for (int i = 1;i <= _mi;i++) {
		x = a,y = b-i+1;
		while (x >= 0 and y <= b) {
			arr[x][y] = _mi-i+1;
			x--;y++;
		}
	}
	
	for (int i = 1;i <= _ma;i++) {
		x = i,y = 1;
		while (x >= 0 and y <= b) {
			arr[x][y] = _ma - i + 1;
			x--;y++;
		}
	}
	
	for (int i = 1;i <= a;i++) {
		for (int j = 1;j <= b;j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	
	return 0;
}
