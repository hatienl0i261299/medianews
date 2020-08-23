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

bool is_strong(int num) {
	ll i, originalNum, lastDigit, sum,fact;
	originalNum = num;

    sum = 0;

    while(num > 0)
    {
        lastDigit = num % 10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;

        num = num / 10;
    }
    if (sum == originalNum) return true;
    return false;
}

int main() {
	int a,b;
	cin >> a >> b;
	if (a > b) {
		int temp = a;a = b;b = temp;
	}
	for (int i = a;i <= b;i++) {
		if (is_strong(i)) cout << i << " ";
	}
	return 0;
}
