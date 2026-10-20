#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
	vector<int> temp;
	int left = low;
	int right = mid + 1;
	while (left <= mid && right <= high) {
		if (arr[left] <= arr[right]) {
			temp.push_back(arr[left]);
			left++;
		}
		else {
			temp.push_back(arr[right]);
			right++;
		}
	}
	while (left <= mid) {
		temp.push_back(arr[left]);
		left++;
	}
	while (right <= high) {
		temp.push_back(arr[right]);
		right++;
	}
	for (int i = low; i <= high; i++) {
		arr[i] = temp[i - low];
	}
}

void divide(vector<int>& a, int low, int high) {
	if (low >= high) return;
	int mid = (low + high) / 2;
	divide(a, low, mid);
	divide(a, mid + 1, high);
	merge(a, low, mid, high);
}

void merge_sort(vector<int>& a, int n) {
	divide(a, 0, n-1);
}

int main() {
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	merge_sort(arr, n);
	//printing array again
	for (auto it : arr) {
		cout << it << " ";
	}

}