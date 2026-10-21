#include <iostream>
#include <vector>
using namespace std;

int rmdup(vector<int>& a, int n) {
	int i = 0;
	for (int j = 1; j < n; j++) {
		if (a[j] != a[i]) {
			a[i + 1] = a[j];
			i++;
		}
	}
	for (auto it : a) {
		cout << it <<endl;
	}
	cout << endl;
	return i + 1;
}

int main() {
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = rmdup(arr, n);
	cout << ans;
}

