#include <bits/stdc++.h>
#define mx 100

using namespace std;

//int main() {
//	int n;cin >> n;
//	for (int i = 1;i <= n;i++) {
//		int tm = n;
//		for (int j = 1;j <= i;j++) {
//			cout << tm-- << " ";
//		}
//		tm = n;
//		for (int j = 1;j <= n-i;j++) {
//			cout << tm - i + 1 << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

int main() {
	int n,a[mx][mx];cin >> n;
	for (int i = 1;i <= n;i++) {
		int tm = n;
		for (int j = i;j <= n;j++) {
			a[i][j] = tm - i + 1;
			a[j][i] = tm - i + 1;
		}
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
