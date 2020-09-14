#include <bits/stdc++.h>
#include <string.h>
#define mx 100
#define null NULL
using namespace std;

bool check(char *s) {
	for (int i = 0;i < strlen(s);i++) {
		if (s[i] >= 'a' and s[i] <= 'z') {
			return false;
		}
	}
	return true;
}

int main() {
	char s[mx],a[mx][mx];
	fgets(s,mx,stdin);
	char *token = strtok(s," ");
	int pos = 0;
	while (token != null) {
		strcpy(a[pos++],token);
		token = strtok(null," ");
	}
	for (int i = 0;i < pos;i++) {
		if (check(a[i])) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
