#include <bits/stdc++.h>
#include <string.h>
#define mx 100
using namespace std;

int main() {
	char s[100],a[mx][mx];
	fgets(s,100,stdin);
	char *token = strtok(s, " ");
	int pos = 0;
	while (token != NULL) {
		strcpy(a[pos++],token);
		token = strtok(NULL," ");
	}
	
	for (int i = 0;i < pos;i++) {
		for (int j = 0;j < strlen(a[i]);j++) {
			if ( (i == pos-1 or j == 0) and a[i][j] >= 'a' and a[i][j] <= 'z' ) {
				a[i][j] -= 32;
			}
			if (i != pos - 1 and j != 0 and a[i][j] >= 'A' and a[i][j] <= 'Z') {
				a[i][j] += 32;
			}
		}
	}
	
	for (int i = 0;i < pos-1;i++) {
		cout << a[i];
		if (i != pos - 2) {
			cout << " ";
		}
	}
	
	cout << ", " << a[pos-1];
	
	return 0;
}
