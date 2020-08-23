#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,ar[mx],pos;
	cin >> n;
	for (int i = 0;i < n;i++) cin >> ar[i];
	cin >> pos;
	for (int i = n-pos;i < n;i++) {
		cout << ar[i] << " ";
	}
	
	for (int i = 0;i < n-pos;i++) {
		cout << ar[i] << " ";
	}
	
	return 0;
}
