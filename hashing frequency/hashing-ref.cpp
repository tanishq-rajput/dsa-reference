#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, int> mp;

void precompute(const vector<int>&a) {
	for (int i = 0; i < a.size(); i++) {
		mp[a[i]]++;
	}
}

void freq(int num) {
	cout << mp.at(num) << endl;
}

void lowhi() {
	int min=mp.begin()->second, max = 0;
	int low, hi;
	for (const auto &it : mp) {
		cout << it.first << " -> " << it.second;
		if (it.second >= max) {
			max = it.second;
			hi = it.first;
		}
		if (it.second <= min) {
			min = it.second;
			low = it.first;
		}
		cout << endl;
	}
	cout << "highest occuring number is : " << hi << endl;
	cout << "lowest occuring number is : " << low;
}

int main() {
	//making array
	cout << "make array: " << endl;
	int n;
	cin >> n;
	vector<int> ar(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	//pre computing
	precompute(ar);

	//executing
	int num;
	cout << "make a query : ";
	cin >> num;
	freq(num);

	//finding numbers with lowest and maximum frequency
	lowhi();

	return 0;
}

