#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b;cin >> a >> b;
	int arr[mx][mx],_mx,x,y;
	if (a > b) _mx = a;
	else _mx = b;
	for (int i = 0;i <= 50;i++) {
		for (int j = 0;j <= 50;j++) {
			arr[i][j] = _mx;
		}
	}
	
	for (int i = 1;i <= _mx;i++) {
		x = i,y = b - i + 1;
		while (y >= 0) {
			arr[x][y] = _mx - i + 1;
			y--;
		}
		
		x = i,y = b - i + 1;
		while (x <= a) {
			arr[x][y] = _mx - i + 1;
			x++;
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
