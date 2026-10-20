#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>&a, int n) {
	for (int i = 0; i <= n - 2; i++) {
		int mini = i;
		for (int j=i; j <= n-1; j++) {
			if (a[j] < a[mini]) {
				mini = j;
			}
		}
		int temp = a[mini];
		a[mini] = a[i];
		a[i] = temp;
	}
}

int main() {
	// making array
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	selection_sort(ar, n);
	//printing array again
	for (int i = 0; i < n; i ++ ) {
		cout << ar[i] << " ";
	}

	bubble_sort(ar, n);
	//printing array again
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}
}