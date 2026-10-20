#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
	int pivot = arr[low];
	int i = low;
	int j = high;
	while (i<j) {
		while (i <= high -1 && arr[i] <= pivot){
			i++;
		}
		while (j >= low + 1 && arr[j] > pivot) {
			j--;
		}
		if (i < j) swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[j]);
	return j;
}

void qs(vector<int>& ar, int low, int high) {
	if (low < high) {
		int pi = partition(ar, low, high);
		qs(ar, low, pi - 1);
		qs(ar, pi + 1, high);
	}
}

void quick_sort(vector<int>& arr, int n) {
	qs(arr, 0, n - 1);
}

int main() {
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	quick_sort(arr, n);
	//printing array again
	for (auto it : arr) {
		cout << it << " ";
	}

}

