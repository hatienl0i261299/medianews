#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b;cin >> a >> b;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			if (i == 0 or j == 0 or i == a-1 or j == b-1) cout << 1;
			else cout << 0;
		}
		cout << "\n";
	}
	return 0;
}
