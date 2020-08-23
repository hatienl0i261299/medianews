#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int n,m,a,b,ar[mx][mx];
void init() {
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cin >> ar[i][j];
		}
	}
	cin >> a >> b;
}

void swap(int &x,int &y){
	int tm = x;
	x = y;
	y = tm;
}

void solve() {
	for (int i = 1;i <= m;i++) {
		swap(ar[a][i],ar[b][i]);
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cout << ar[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	init();solve();
	return 0;
}
