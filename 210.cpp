#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		int c = 1;
		for (int j = 1;j <= n;j++) {
			if (j < i) cout << "~";
			else if (j <= n) cout << c++;
		}
		cout << "\n";
	}
	return 0;
}
