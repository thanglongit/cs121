#include<iostream>
using namespace std;
int main() {
	// Advance
	int n, k;
	int x [1000];
	cin >> n >> k;
	x [0] = -1;
	for (int i=1;i<=n;i++) {
		cin >> x [i];
	}
	while (k > 0 && x [k] == 0) {
		k--;
	}
	while (k + 1 <= n && x [k+1] == x [k]) {
		k++;
	}
	cout << k << endl;
	return 0;   
}
