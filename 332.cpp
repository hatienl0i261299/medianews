#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		int c = 2*i-1;
		for (int j = 1;j <= n-i+1;j++) {
			cout << static_cast<char>(c + 'A' - 1);
			c+= 2;
		}
		cout << "\n";
	}
	return 0;
}
