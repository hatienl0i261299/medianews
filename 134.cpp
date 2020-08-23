#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool check(int n)
{
    int sum = 1; 
    for ( int i=2; i*i < n; i++) 
    { 
        if (n%i==0) 
        { 
            if(i*i != n)
                sum = sum + i + n/i; 
            else
                sum = sum + i; 
        } 
    }   
    return sum == n;
}

int main() {
	int n;cin >> n;
	for (int i = 2;i <= n;i++) {
		if (check(i)) cout << i << " ";
	}
	return 0;
}
