#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int m,n;
	cin >> n;
	int a[mx][mx];
	m = n;
	int d = 0, i, gt = m*n;
    int hang = m - 1, cot = n - 1;
    while(gt > 0){        
        for(i = d; i <= cot; i++) {          
            a[d][i] = gt--;          
        }       
        for(i = d+1; i <= hang; i++){            
            a[i][cot] = gt--; 
        }       
        for(i = cot-1; i>=d && gt <= m * n; i--){         
            a[hang][i]=gt--; 
        }       
        for(i = hang-1; i>d && gt <= m * n; i--){         
            a[i][d] = gt--;
        }       
        d++; 
		hang--; 
		cot--;      
    }
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
