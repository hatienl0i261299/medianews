#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,a[mx],tm;
	cin >> n;
	int s1 = INT_MIN,c1 = -1;
	int s2 = INT_MAX,c2 = -1;
	for (int i = 0;i < n;i++) {
		cin >> tm;
		if (tm >= s1) {
			s1 = tm;
			c1 = i;
		} 
		if (tm <= s2) {
			s2 = tm;
			c2 = i;
		}
	}
	
	cout << s1 << " " << c1 + 1 << "\n";
	cout << s2 << " " << c2 + 1;
	return 0;
}
