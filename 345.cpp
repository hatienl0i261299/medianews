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

int main() {
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int pos;
	cin >> pos;
	for (int i = 0;i < pos-1;i++) {
		cout << s1[i];
	}
	cout << s2;
	for (int i = pos-1;i < s1.length();i++) {
		cout << s1[i];
	}
	return 0;
}
