#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool check(int n) {
	int arr[mx],c = 0,x = n,s = 0;
	while (n) {
		arr[c++] = n% 10;
		n/=10;
	}
	for (int i = 0;i < c;i++) {
		s += pow(arr[i],c);
	}
	return s == x;
}

int main() {
	int n;cin >> n;
	cout << check(n);
	return 0;
}
