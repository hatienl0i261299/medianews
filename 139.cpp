#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int Fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int main() {
	int n;cin >> n;
	for (int i = 0;i <= n;i++) {
		int tm = Fibonacci(i);
		if (tm == n) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
}
