#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

unsigned long long giai_thua(int number) {
	if (number < 2) {
		return 1;
	}
	return number * giai_thua(number-1);
}

bool check(int num) {
	int s = 0,tm = num;
	while (num) {
		s += giai_thua(num % 10);
		num /= 10;
	}
	if (s == tm) {
		return true;
	} else return false;
}

int main()
{
	int n;cin >> n;
	for (int i = 1;i < n;i++) {
		if (check(i)) {
			cout << i << " ";
		}
	}
	return 0;
}
