#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
	int tm = 0;
	
	for (int i = 1;i < n;i++) {
		if (n % i == 0) {
			tm += i;
		}
	}
	return tm == n;
}

int main() {
	int a,b;
	cin >> a >> b;
	if (a > b) {
		int tm = a;
		a = b;
		b = tm;
	}
	bool flag = false;
	for (int i = a;i <= b;i++) {
		if (check(i)) {
			flag = true;
			cout << i << " ";
		}
	}
	if (!flag) cout << 0;
	return 0;
}
