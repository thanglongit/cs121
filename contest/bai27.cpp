#include<bits/stdc++.h>
using namespace std;
int main() {
	// Multiplication Table
	int n, x, i, ans = 0;
	cin >> n >> x;
	for(i=1;i<=n;i++) {
		if(x % i == 0 && x / i <= n) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
