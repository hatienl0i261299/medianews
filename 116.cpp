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

void solve() {
	int n,s = 0;
	cin >> n;
	
    while (n)
    {
        int tm = n%10;
        s += tm;
        n /= 10;
    }
    cout << s;
}

int main() {
	solve();
	return 0;
}
