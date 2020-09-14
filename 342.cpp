#include <bits/stdc++.h>
#include <string.h>
#define mx 100
#define null NULL
using namespace std;

bool check(char *a,char *b) {
	int l_a = strlen(a);
	int l_b = strlen(b);
	if (l_a > l_b) {
		int tm = l_a;
		l_a = l_b;
		l_b = tm;
	}
	for (int i = 0;i < l_a;i++) {
		if (a[i] !='\n' and a[i] != b[i]) return false;
	}
	return true;
}

int main() {
	char a[mx],b[mx],ar[mx][mx];
	fgets(a,mx,stdin);
	fgets(b,mx,stdin);
	char *token = strtok(a," ");
	int pos = 0;
	while (token != null) {
		strcpy(ar[pos++],token);
		token = strtok(null," ");
	}
	for (int i = 0;i < pos;i++) {
		if (!check(ar[i],b)) {
			cout << ar[i] << " ";
		}
	}
	return 0;
}
