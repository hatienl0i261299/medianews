#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool is_perfect(int num) {
	int s = 0;
	for (int i = 1;i < num;i++) {
		if (num % i == 0) {
			s += i;
		}
	}
	return s == num;
}

int main() {
	int n,m;cin >> n >> m;
	if (n > m) {
		int temp =n;
		n =m;
		m = temp;
	}
	for (int i = n;i <= m;i++) {
		if (is_perfect(i)) cout << i << " ";
	}
	return 0;
}
