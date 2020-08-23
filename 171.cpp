#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,c;cin >> a >> b;
	for (int i = 1;i <= a;i++) {
		if (i % 2 == 0) c = 0;
		else c = 1;
		for (int j = 1;j <= b;j++) {
			cout << c;
			c--;
			if (c < 0) c = -c;
		}
		cout << "\n";
	}
	return 0;
}
