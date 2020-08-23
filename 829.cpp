#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nguyen_to(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2;i <= sqrt(num);i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

bool dk(int num) {
	for (int i = 1;i <= num;i++)  {
		if (nguyen_to(i)) {
			if (num % i == 0 and num % (i*i) == 0) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	int a,b;cin >> a >> b;
	if (a > b) {
		int tm = a;
		a = b;
		b = tm;
	}
	for (int i = a;i <= b;i++) {
		if (dk(i)) cout << i << " ";
	}
	return 0;
}
