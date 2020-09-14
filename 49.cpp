#include <bits/stdc++.h>
#include <string.h>
#define mx 100
#define null NULL
using namespace std;

int main() {
	char s[mx],a[mx][mx];
	fgets(s,mx,stdin);
	strlwr(s);
	char *token = strtok(s," ");
	int pos = 0;
	while (token != null) {
		strcpy(a[pos++],token);
		token = strtok(null," ");
	}
	
	for (int i = -1;i < pos-1;i++) {
		if (i == -1) {
			for (int j = 0;j < strlen(a[pos-1])-1;j++) {
				a[pos-1][j] -= 32;
				cout << a[pos-1][j];
			}
			cout << ", ";
		} else {
			a[i][0] -= 32;
			cout << a[i] << " ";
		}
	}
	
	return 0;
}
