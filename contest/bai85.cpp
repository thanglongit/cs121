#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Giai thua cua giai thua
	long int n, giaithua1 = 1, giaithua2 = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		giaithua1 = giaithua1 * i;
	}
	for (int j = 1; j <= giaithua1; j++) {
		giaithua2 = giaithua2 * j;
	}
	cout << giaithua2 << endl;
	return 0;
}
