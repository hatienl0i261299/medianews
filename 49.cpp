#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool check(int tm,char *a,char *p) {
	for (int i = 0;i < strlen(p);i++) {
		if (p[i] != a[tm + i]) {
			return true;
		}
	}
	return false;
}

int main()
{
    char a[mx];
    gets(a);
    strupr(a);
    int tm;
    for (int i = 0;i < strlen(a);i++) {
    	if (a[i] == ' ') {
    		tm = i+1;
		}
	}
	for (int i = tm;i < strlen(a);i++) {
		cout << a[i];
	}
	cout << ", ";
    char *p = strtok(a, " ");
    bool kt=true;
    while(p!=null)
    {
        if (check(tm,a,p)) {
	    	if(p[0] >= 'a' and p[0] <= 'z') p[0] -= 32;
	        if(kt==true) kt=false;
	        else printf(" ");
	        	for (int i = 1;i < strlen(p);i++) {
					if (p[i] >= 'A' and p[i] <= 'Z') {
						p[i] += 32;
					}
				}
			cout << p;
		}
		p = strtok(null," ");
    }
    return 0;
}

