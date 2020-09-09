#include <bits/stdc++.h>
#define mx 100
using namespace std;

int main() {
	int a[mx][mx],n;
	cin >> n;
	int hang = n,cot = n,value = 0,k = 1;
	
	vector <int> fibo;
	int first = 0,second = 1,tmp = n*n;
	while (tmp--) {
		fibo.push_back(first);
		int num = first + second;
		first = second;
		second = num;
	}
	
	while (k <= (n/2 + 1)) {
		for (int i = k;i <= cot;i++) {
			a[k][i] = fibo[value++];
		}
		for (int i = k+1;i <= hang;i++) {
			a[i][cot] = fibo[value++];
		}
		for (int i = cot-1;i >= k;i--) {
			a[hang][i] = fibo[value++];
		}
		for (int i = hang-1;i >= k+1;i--) {
			a[i][k] = fibo[value++];
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
