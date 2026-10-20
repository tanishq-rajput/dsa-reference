#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>&a,int n){
	for (int i=n-1;i>=1;i--){
		for (int j=0;j<=i-1;j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}

}

int main(){
	int n;
	cout << "make array: " << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bubble_sort(arr, n);
	//printing array again
	for (auto it : arr) {
		cout << it << " ";
	}

}