#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 0;i < n;i++) {
		int c = n-i;
		for (int j = 0;j < n-i;j++) {
			cout << c++;
		}
		cout << "\n";
	}
	return 0;
}
