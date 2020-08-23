#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int CountDigit(int n) {
	int ans = 0;
	while (n) {
		n/=10;
		ans++;
	}
	return ans;
}

bool IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; 
        tmp /= 10;       
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
int main() {
	int a;cin >> a;
	for (int i = 1;i <= a;i++) {
		if (IsArmstrong(i)) {
			cout << i << " ";
		}
	}
	
	return 0;
}
