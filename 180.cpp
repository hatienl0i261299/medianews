#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,arr[mx][mx],_mx; cin >> a >> b;
	if (a > b) {
		_mx = a;
	} else _mx  =b;
	
	for (int i = 1;i <=a ;i++) {
		int x = a-i+1,y = b-i+1;
		while (x > 0) {
			arr[x][y] = _mx-i+1;
			x--;
		}
		
		x = a-i+1,y = b-i+1;
		while (y > 0) {
			arr[x][y] = _mx-i+1;
			y--;
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
