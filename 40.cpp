#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
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

int main() {
	int m, n;
	cin >> m;
	n = m;
	int a[m][n];
	int dong = m, cot = n, k = 1, p = 0, i, j;
	int dem = 0;
	while(dem < m*n){
		for(i = p; i < cot; i++){
			while (true) {
				if (nguyen_to(k)) {
					a[p][i] = k++;
					dem++;
					break;
				}
				k++;
			}
		}
		for(i = p+1; i < dong; i++){
			while (true) {
				if (nguyen_to(k)) {
					a[i][cot-1] = k++;
					dem++;
					break;
				}
				k++;
			}
		} 
		if ( p != dong-1){
			for(i = cot-2; i >=p; i--){
				while (true) {
					if (nguyen_to(k)) {
						a[dong-1][i] = k++;
						dem++;
						break;
					}
					k++;
				}
			} 
		}	
		if(p!=cot-1){
			for(i = dong-2; i > p; i--){
				while (true) {
					if (nguyen_to(k)) {
						a[i][p] = k++;
						dem++;
						break;
					}
					k++;
				}
			}
		}	
		p++;dong --; cot --;
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
