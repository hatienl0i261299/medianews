#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,ar[mx],br[mx] = {0};
	cin >> n;
	set<int> res;
	for (int i = 0;i < n;i++) {
		cin >> ar[i];
		br[ar[i]]++;
	}
	int dem = 0;
	for (int i = 0;i < n;i++) {
		if (br[ar[i]] > 1) {
			res.insert(ar[i]);
		}
	}
	cout << res.size() << "\n";
	set<int>::iterator i;
	for (i = res.begin();i != res.end();i++) {
		cout << *i << " ";
	}
	return 0;
}
