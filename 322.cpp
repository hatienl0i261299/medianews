#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int main() {
	char chr[mx];gets(chr);
	int chu = 0,so = 0,ky_tu = 0;
	for (int i = 0;i < strlen(chr);i++) {
		if ( (chr[i] >= 'A' and chr[i] <= 'Z') or (chr[i] >= 'a' and chr[i] <= 'z') ) chu++;
		else if ( chr[i] >= '0' and chr[i] <= '9' ) so++;
		else ky_tu++;
	}
	cout << chu << " " << so << " " << ky_tu;
	return 0;
}
