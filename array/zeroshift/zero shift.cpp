#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> zeroshift(vector<int>& a, int n) {
	int j = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			j = i;
			break;
		}
	}
	if (j == -1) cout << "there are no zeroes";

	for (int i = j + 1; i < n;i++) {
		if (a[i] != 0) {
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			j++;
		}
	}
	return a;
}

int main() {
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> ar;
	ar=zeroshift(arr, n);
	for (auto i : ar) {
		cout << i << " ";
	}
}