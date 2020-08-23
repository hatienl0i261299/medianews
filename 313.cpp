#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	vector<int> chan;
	vector<int> le;
	int n,tm;cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> tm;
		if (tm % 2 == 0) {
			chan.push_back(tm);
		} else {
			le.push_back(tm);
		}
	}
	sort(chan.begin(),chan.end());
	sort(le.begin(),le.end());
	for (int i = 0;i < chan.size();i++) {
		cout << chan[i] << " ";
	}
	for (int j = 0;j < le.size();j++) {
		cout << le[j] << " ";
	}
	return 0;
}
