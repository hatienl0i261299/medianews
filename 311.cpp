#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;


int main() {
	vector <int> arr;
	int n,i = 0,tm;
	cin >> n;
	while (i < n) {
		cin >> tm;
		arr.push_back(tm);
		i++;
	}
	sort(arr.begin(),arr.end());
	i = 0;
	while (i < n) {
		cout << arr.at(i) << " ";
		i++;
	}
	return 0;
}
