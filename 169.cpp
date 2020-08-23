#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b;cin >> a >> b;
	for (int i = 0;i < a;i++) {
		int c = 0;
		for (int j = 0;j < b;j++) {
			cout << c;
			c--;
			if (c < 0) c = -c;
		}
		cout << "\n";
	}
	return 0;
}
