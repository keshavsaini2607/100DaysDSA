#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int start, int end) {
	int max = start;
	for (int i = 0; i <= end; ++i)
	{
		if(arr[max] < arr[i]) {
			max = i;
		}
	}
	return max;
}

void selection_sort(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		int lastIndex = n - i - 1;
		int maxEle = findMax(arr, 0, lastIndex);
		swap(arr[maxEle], arr[lastIndex]);
	}
}

int main() {
	int arr[] = {13,46,24,5,20,9,0};
	int n = 7;
	selection_sort(arr, n);
	for(auto it: arr) {
		cout << it << " ";
	}
	return 0;
}