#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& a, int n) {
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j>0 && a[j-1] > a[j]) {
			int temp = a[j - 1];
			a[j - 1] = a[j];
			a[j] = temp;

			j--;
		}
	}
}

int main() {
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	insertion_sort(arr, n);
	//printing array again
	for (auto it : arr) {
		cout << it << " ";
	}

}