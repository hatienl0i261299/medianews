#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int main() {
	int a,b;cin >> a >> b;
	if (a > b) {
		int tm = a;a = b;b = tm;
	}
	int s = 0;
	for (int i = a;i <= b;i++) s += i;
	cout << s;
	return 0;
}
