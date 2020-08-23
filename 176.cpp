#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b;cin >> a >> b;
	int c = 1;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			cout << c++;
		}
		cout << "\n";
	}
	return 0;
}
