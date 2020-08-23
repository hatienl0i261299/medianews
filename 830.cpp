#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nt(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2;i <= sqrt(n);i++) {
		if (n%i==0) return false;
	}
	return true;
}

void solve(int n) {
	int arr[mx],c = 0,b[mx] = {0};
	while (n) {
		arr[c++] = n%10;
		n/=10;
	}
	for (int j = c-1;j >= 0;j--)
	{
		if (nt(arr[j])) {
			b[arr[j]]++;
		}
	}
	for (int i = c - 1;i >= 0;i--) {
		if (b[arr[i]] > 0) {
			cout << arr[i] << " " << b[arr[i]] << endl;
			b[arr[i]] = -1;
		}
	}
}

int main() {
	int n;cin >> n;
	solve(n);
	return 0;
}
