#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> rotate(vector<int>& arr, int n) {
	int t = arr[0];
	for (int i = 1; i < n;i++) {
		arr[i - 1] = arr[i];
	}
	arr[n - 1] = t;
	return arr;

}

vector <int> krotate(vector<int> arr, int n) {
	int k;
	cout << "rotate by how many places: ";
	cin >> k;
	k = k%n;
	vector<int> temp(k);
	for (int i = 0; i < k; i++) {     
		temp[i] = arr[i];            
	}
	for (int i = k; i<n;i++) {
		arr[i-k] = arr[i];
	}
	int m = 0;
	for (int i = n - k; i < n;i++) {
		arr[i] = temp[m];
		m++;
	}
	return arr;
}


vector <int> rerotate(vector<int> arr, int n) {
	int k;
	cout << "rotate by how many places: ";
	cin >> k;
	k = k % n;

	reverse(arr.begin(), arr.begin() + k);
	reverse(arr.begin() + k, arr.begin() + n);
	reverse(arr.begin(), arr.begin() + n);
	return arr;
}

int main() {
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

