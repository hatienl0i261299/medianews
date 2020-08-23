#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;


int main() {
	int a,b,c;cin >> a >> b >> c;
	vector<int> arr;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	cout << *min_element(arr.begin(),arr.end());
	return 0;
}
