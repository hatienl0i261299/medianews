#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,arr[mx][mx],x,y,_mx;
	cin >> a >> b;
	if (a > b) _mx = a;
	else _mx = b;
	for (int i = 0;i <= 50;i++) {
		for (int j = 0;j <= 50;j++) {
			arr[i][j] = b;
		}
	}
	
	for (int i = 1;i <= b;i++) {
		x = i,y = i;
		while (y <= b) {
			arr[x][y] = _mx-i+1;
			y++;
		}
	}
	
	for (int i = 1;i <= b;i++) {
		x = i,y = i;
		while (x <= a) {
			arr[x][y] = _mx-i+1;
			x++;
		}
	}
	
	
	for (int i = 1;i <= a;i++) {
		for (int j = 1;j <= b;j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}
