#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,arr[mx][mx],x,y;cin >> a >> b;
	for (int i = 0;i <= 50;i++) {
		for (int j = 0;j <= 50;j++) {
			arr[i][j] = b;
		}
	}
	
	for (int i = 1;i <= b;i++) {
		x = 1,y = i;
		while (x <= b and y >= 0) {
			arr[x][y] = i;
			x++;y--;
		}
	}
	
	for (int i = 1;i <= a;i++) {
		for (int j = 1;j <= b;j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}
