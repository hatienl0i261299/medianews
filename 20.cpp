#include <bits/stdc++.h>
#include <math.h>
#define mx 100
using namespace std;

bool check(int num) {
	int tm = num,sum = 0,a[mx],c = 1;
	while (tm) {
		a[c++] = tm % 10;
		tm /= 10;
	}
	for (int i = 1;i < c;i++) {
		sum += pow(a[i],c-1);
	}
	return sum == num;
}

int main() {
	int a,b;cin >> a >> b;
	if (a > b) {
		int tm = a;a = b;b = tm;
	}
	bool flag = false;
	for (int i = a;i <= b;i++) {
		if (check(i)) {
			cout << i << " ";
			flag = true;
		}
	}
	if (!flag) cout << 0;
	return 0;
}
