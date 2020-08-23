#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nt(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2;i <= sqrt(num);i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	int n;cin >> n;cout << nt(n);
	return 0;
}
