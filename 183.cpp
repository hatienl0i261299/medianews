#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,c,_mx;cin >> a >> b;
	for (int i = 0;i < a;i++) {
		c = i+1;
		if (i < b) {
			for (int j = 1;j < b-i+1;j++) {
				cout << c++;
			}
			c = i;
			for (int j = 0;j < i;j++) {
				cout << c--;
			}
		} else {
			cout << i+1;
			for (int j = b-1;j >= 1;j--) {
				cout << j;
			}
		}
		cout << "\n";
	}
	return 0;
}
