#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	int arr[mx],ans = 0,c = 0;
	while (n) {
		arr[c++] = n%10;
		n/=10;
	}
	for (int i = 0;i < c;i++) {
		ans += arr[i] * pow(10,c-i-1);
	}
	cout << ans;
	return 0;
}


