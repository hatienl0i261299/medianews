#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve(int n)
{
    int fisrt = 0, second = 1;
    while (n--)
    {
        cout << fisrt << " ";
        int newNum = fisrt + second;
        fisrt = second;
        second = newNum;
    }
}


int main() {
	int n;cin >> n;
	solve(n);
	return 0;
}
