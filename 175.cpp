#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int a,b,c;cin >> a >> b;
	for (int i = 0;i< a;i++) {
		c = i+1;	
		for (int j = 0;j < b;j++) {
			cout << c++;
		}
		cout << "\n";
	}
	return 0;
}
