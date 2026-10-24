#include <iostream>
#include <vector>
using namespace std;

int miss(vector<int>& a, int N) {
	int x1 = 0, x2 = 0;
	int n = N - 1;
	for (int i = 0; i < n;i++) {
		x2 = x2 ^ a[i];
		x1 = x1 ^ (i + 1);
	}
	x1 = x1 ^ N;
	return x1 ^ x2;

}

int main() {
	int n;
	cout << "make array1: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int missing = miss(arr, n + 1);
	cout << "missing number is: " << missing;
}