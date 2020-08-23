#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n-i-1;j++) {
			cout << "~";
		}
		int c = i;
		for (int j = 0;j <= i;j++) {
			cout << c--;
		}
		
		for (int j = 0;j < i;j++) {
			cout << j+1;
		}
		cout << "\n";
	}
	return 0;
}
