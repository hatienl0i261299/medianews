#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool dk(int n) {
	if (n%2==0) return false;
	return true;
}

int main() {
	int a,b;cin >> a >> b;
	
	for (int i = 1;i <= a;i++) {
		for (int j = 1;j <= b;j++) {
			if (dk(b) and j == b/2+1 and b > 2) cout << 0;
			else if (!dk(b) and (j == b/2 or j == b/2+1) and b > 2) cout << 0;
			else if (dk(a) and i == a/2+1 and a > 2) cout << 0;
			else if (!dk(a) and (i == a/2 or i == a/2+1) and a > 2) cout << 0;
			else cout << 1;
		}
		cout << "\n";
	}
	
	return 0;
}
