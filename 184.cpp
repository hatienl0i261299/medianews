#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,x,y,_mi,_ma,arr[mx][mx];
	cin >> a >> b;
	_ma = b;
	for (int i = 0;i < a;i++) {
		x = i+1;
		for (int j = 0;j < b;j++) {
			if (x < _ma) {
				cout << x++;
			} else {
				for (int k = j;k < b;k++) {
					cout << x--;
				}
				break;
			}
		}
		cout << "\n";
	}
	
	return 0;
}
