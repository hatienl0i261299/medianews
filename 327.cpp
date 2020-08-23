#include <bits/stdc++.h>
#define mx 100
using namespace std;

int main() {
	
	int size,matrix[mx][mx],n;
	vector<int> fibo;
	cin >> size;
	n = size * size;
	int first = 0,second = 1;
	while (n--)	 {
		fibo.push_back(first);
		int num = first + second;
		first = second;
		second = num;
	}
	
	int tmp = 1,row = size,col = size, pos = 0;
	while (tmp <= (size / 2 + 1)) {
		for (int i = tmp;i <= col;i++) {
			matrix[tmp][i] = fibo[pos++];
		}
		for (int i = tmp+1;i <= row;i++) {
			matrix[i][col] = fibo[pos++];
		}
		
		for (int i = col-1;i >= tmp;i--) {
			matrix[row][i] = fibo[pos++];
		}
		
		for (int i = row-1;i >= tmp+1;i--) {
			matrix[i][tmp] = fibo[pos++];
		}
		tmp++;
		row--;
		col--;
	}
	
	for (int row = 1;row <= size;row++) {
		for (int col = 1;col <= size;col++) {
			cout << matrix[row][col] << " ";
		}
		cout << "\n";
	}
	
}
