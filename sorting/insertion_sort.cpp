#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; i >=0 ; --j)
		{
			if(arr[j] < arr[j-1]) {
				swap(arr[j], arr[j-1]);
			} else {
				break;
			}
		}
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