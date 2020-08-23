#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nguyen_to(int n) {
	if (n < 2) return false;
	for (int i = 2;i <= sqrt(n);i++) {
		if (n%i== 0) return false;
	}
	return true;
}

bool dk(int n) {
	int s = 0;
	while (n) {
		s += n%10;
		n/=10;
	}
	return s%5==0;
}

int main() {
	int n,a[mx],c=0;
	cin >> n;
	for (int i = 1;i < n;i++) {
		if (nguyen_to(i) and dk(i)) a[c++] = i;
	}
	for (int i = 0;i < c;i++) {
		cout << a[i] << " ";
	}
	cout << endl << c;
	return 0;
}
