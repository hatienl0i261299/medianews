#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
ll fibonacci(ll n) {
    ll f0 = 0;
    ll f1 = 1;
    ll fn = 1;
    ll i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int main() {
    ll n;
    cin >> n;
    for (int i = 0;i < n;i++) {
    	cout << fibonacci(i) << " ";
	}
    return 0;
}

