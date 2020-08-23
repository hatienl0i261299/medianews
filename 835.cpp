#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
void show(int arr[],int n) {
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;
		show(arr,n);
    }  
}  
int main() {
	int n,a[mx];
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	insertionSort(a,n);
	return 0;
}
