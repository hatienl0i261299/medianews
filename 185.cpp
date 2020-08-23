#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b;cin >> a >> b;
	int arr[mx][mx],x,y;
	for (int i = 1;i <= 50;i++) {
		for (int j = 1;j <= 50;j++) {
			arr[i][j] = 9;
		}
	}
	
	for (int i = 1;i <= a;i++) {
		x = a;y = i;
		while (x >= 0 and y >= 0) {
			arr[x][y] = a-i+1;
			x--;y--;
		}
	}
	
	for (int i =1;i <= b;i++) {
		x = 1;y = b-i+1;
		while (x <= a and y <= b) {
			arr[x][y] = b-i+1;
			x++;y++;
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
