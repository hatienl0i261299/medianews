#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;


int main() {
	int n,tm,c_l = 0,c_c = 0;cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> tm;
		if (tm % 2 == 0) c_c++;
		else c_l++;
	}
	cout << c_c << " " << c_l;
	return 0;
}
