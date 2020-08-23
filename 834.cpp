#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void show(int a[],int &n) {
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void bubble_sort(int a[],int &n) {
	int flag = false;
	for (int i = 0;i <n;i++) {
		flag = false;
		for (int j = 0;j < n-i-1;j++) {
			if (a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = true;
			}
		}
		if (flag == false) {
			break;
		} else {
			show(a,n);
		}
	}
}

int main() {
	int n,a[mx];
	cin >> n;
	for (int i = 0;i <n;i++) cin >> a[i];
	bubble_sort(a,n);
	return 0;
}
