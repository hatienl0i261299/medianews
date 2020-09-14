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
	
	for (int i = 0;i < pos-1;i++) {
		cout << a[i][0];
	}
	
	for (int i = 0;i < strlen(a[pos-1])-1;i++) {
		cout << a[pos-1][i];
	}
	cout << "@ptit.edu.vn";
	return 0;
}
