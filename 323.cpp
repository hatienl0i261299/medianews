#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool check(int n,vector <int> arr) {
	for (int i = 0;i < arr.size();i++) {
		if (n == arr.at(i)) return false;
	}
	return true;
}

int main() {
	vector <int> arr;
	int n,i = 0,tm;
	cin >> n;
	while (i < n) {
		cin >> tm;
		if (check(tm,arr))
			arr.push_back(tm);
		i++;
	}
	for (int i = 0;i < arr.size();i++){
		cout << arr.at(i) << " ";
	}
	return 0;
}
