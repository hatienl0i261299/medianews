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
	int n;cin >> n;
	
	int nam=  0,tuan = 0,ngay = 0;
	while (n > 0) {
		if ((n-365) >= 0) {
			n -= 365;
			nam++;
		} else if ((n-7) >= 0) {
			n -= 7;
			tuan++;
		} else if ((n - 1) >= 0){
			n-=1;
			ngay++;
		}
	}
	cout << nam << " " << tuan << " " << ngay;
}
int main() {
	solve();
	return 0;
}
