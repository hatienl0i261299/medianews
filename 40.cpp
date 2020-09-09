#include <bits/stdc++.h>
#define mx 100
using namespace std;

bool nt(int n) {
	if (n < 2) {
		return true;
	}
	for (int i = 2;i <= sqrt(n);i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	
	int a[mx][mx],n;
	cin >> n;
	vector <int> data;
	
	for (int i = 2;i <= 100000;i++) {
		if (nt(i)) data.push_back(i);
	}
	
	int hang = n,cot = n,value = 0,k = 1;
	while (k <= (n/2+1)) {
		for (int i = k;i <= cot;i++) {
			a[k][i] = data[value++];
		}
		for (int i = k+1;i <= hang;i++) {
			a[i][cot] = data[value++];
		}
		for (int i = cot-1;i >= k;i--) {
			a[hang][i] = data[value++];
		}
		for (int i = hang-1;i >= k+1;i--) {
			a[i][k] = data[value++];
		}
		k++;
		hang--;
		cot--;
	}
	
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
} 
