#include<bits/stdc++.h>
using namespace std;

class selection {
public:
	int select(int arr[], int i, int n) {
		int min = i;
		for(int j = i + 1; j < n; ++j) {
			if(arr[j] < arr[min]) {
				min = j;
			}
		}
		return min;
	}

	void selection_sort(int arr[], int n) {
		for (int i = 0; i < n; ++i)
		{
			int min = select(arr, i, n);
			swap(arr[min], arr[i]);
		}
	}
};

int main() {
	selection s;
	int arr[] = {25, 1, 0, 72, -21};
	int n = 5;
	s.selection_sort(arr, n);
	for(auto it : arr) {
		cout << it << " ";
	}
	return 0;
}