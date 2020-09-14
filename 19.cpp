#include <bits/stdc++.h>
#define mx 100
using namespace std;

int gt(int n) {
	int res = 1;
	for (int i = 1;i <= n;i++) {
		res *= i;
	}
	return res;
}
 
 

bool check(int num) {
	int sum = 0,tm = num;
	while (tm) {
		sum += gt(tm % 10);
		tm /= 10;
	}
	return sum == num;
}

int main() {
	int a,b;cin >> a >> b;
	if (a > b) {
		int tm = a;
		a = b;
		b = tm;
	}
	bool flag = false;
	for (int i = a;i <= b;i++) {
		if (check(i)) {
			cout << i << " ";
			flag = true;
		}
	}
	if (!flag) {
		cout << 0;
	}
	return 0;
}
