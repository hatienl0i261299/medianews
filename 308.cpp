#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int main() {
	int a,b,ar[mx],br[mx],pos = 0;
	cin >> a >> b;
	for (int i = 1;i <= a;i++) cin >> ar[i];
	for (int j = 1;j <= b;j++) cin >> br[j];
	cin >> pos;
	
	for (int i = 1;i <= pos;i++) {
		cout << ar[i] << " ";
	}
	
	for (int i = 1;i <= b;i++) {
		cout << br[i] << " ";
	}
	
	for (int i = pos+1;i <= a;i++) {
		cout << ar[i] << " ";
	}
	
	return 0;
}
