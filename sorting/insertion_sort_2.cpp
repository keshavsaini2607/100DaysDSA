#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		int current = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > current) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
}

int main() {
	int arr[] = {5, 3, 4, 1, 2};
	int n = 5;
	insertion_sort(arr, n);
	for(auto it : arr) {
		cout << it << " ";
	}
	return 0;
}