#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,a[mx],s1,s2;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	s1 = a[0],s2 = a[1];
	if (s1 < s2) {
		int temp = s1;
		s1 = s2;
		s2 = temp;
	}
	for (int i = 2;i < n;i++) {
		if (a[i] > s1) {
			s2 = s1;
			s1 = a[i];
		} else if (a[i] < s1 and a[i] > s2) {
			s2 = a[i];
		}
	}
	cout << s2;
	return 0;
}
