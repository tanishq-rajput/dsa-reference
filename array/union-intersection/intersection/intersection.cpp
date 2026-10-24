#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& a, vector <int>& b) {
	vector<int> u;
	int n = a.size();
	int m = b.size();
	int i = 0;
	int j = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			i++;
		}
		else if (a[i] > b[j]) {
			j++;
		}
		else {
			u.push_back(a[i]);
			i++;
			j++;
		}

	}
	return u;
}

int main() {
	int n;
	cout << "make array1: " << endl;
	cin >> n;
	vector<int> a1(n);
	for (int i = 0; i < n; i++) {
		cin >> a1[i];
	}

	int m;
	cout << "make array2: " << endl;
	cin >> m;
	vector<int> a2(m);
	for (int i = 0; i < m; i++) {
		cin >> a2[i];
	}

	vector<int> uni;
	uni = intersection(a1, a2);
	for (auto i : uni) {
		cout << i << " ";
	}
}
