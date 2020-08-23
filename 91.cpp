#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nguyen_to(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2;i <= sqrt(num);i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int fb(int n)
{
    if(n==1||n==0||n==2||n==3) return n;
   return fb(n-2)+fb(n-1);
}
bool check_fibo(int num) {
	int sum = 0;
    while (num)
    {
        sum += (num % 10);
        num /= 10;
    }
	for (int i = 0;i <= sum;i++) {
		if (fb(i) == sum) {
			return true;
		}
	}
	return false;
}

void solve() {
	int a,b;cin >> a >> b;
	if (a > b) {
		int tm = a;a = b;b = tm;
	}
	for (int i = a;i <= b;i++) {
		if (nguyen_to(i) and check_fibo(i)) cout << i << " ";
	}
}

int main() {
	solve();
	return 0;
}
