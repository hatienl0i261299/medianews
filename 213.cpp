#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;


int main() {
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		int c = i;
		for (int j = 1;j <= i;j++) {
			cout << c++;
		}
		cout << "\n";
	}
	return 0;
}
