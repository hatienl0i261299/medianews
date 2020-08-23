#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,a[mx];cin >> n;
	for (int i = 1;i <= n;i++) cin >> a[i];
	int s1 = a[1],s2 = a[2];
	if (s1 > s2) {
		int tm = s1;
		s1 = s2;
		s2 = tm;
	}
	for (int i = 3;i <= n;i++) {
		if (a[i] < s1) {
			s2 = s1;
			s1 = a[i];
		}  else if (a[i] < s2 and a[i] > s1) {
			s2 = a[i];
		}
	}
	cout << s1 << " " << s2;
	return 0;
}
