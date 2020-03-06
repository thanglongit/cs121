#include<iostream>
#include<math.h>
using namespace std;
// Tim so nguyen to lon nhat
int main() {
	long long int n;
	cin >> n;
	for (int i = n; i >= 2; i--) {
		int b = 0;
		for (int j = 2; j <= i/2; j++) {
			if (i % j == 0) {
				b = 1;
				break;
			}
		}
		if (b == 0) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
