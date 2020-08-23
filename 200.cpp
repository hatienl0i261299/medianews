#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int s(int num) {
	int s = 0;
	while (num) {
		s += num%10;
		num /= 10;
	}
	return s;
}

void solve(int a,int b) {
	int x = s(a),y = s(b);
	if (y < x) {
		cout << b << " " << a;
	} else cout << a << " " << b;
}

int main() {
	int a,b;cin >> a >> b;
	solve(a,b);
	return 0;
}
