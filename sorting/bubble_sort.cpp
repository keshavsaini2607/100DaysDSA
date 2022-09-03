#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
	bool swapped;
	for (int i = 0; i < n; ++i)
	{
		swapped = false;
		for (int j = 1; j < n - i; ++j)
		{
			if(arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
				swapped = true;
			}
		}
		if(!swapped) {
			break;
		}
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;
	bubble_sort(arr, n);
	for(auto it : arr) {
		cout << it << " ";
	}
	return 0;
}