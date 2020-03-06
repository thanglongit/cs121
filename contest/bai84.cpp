#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main() {
	// Toi gian phan so
	long int t, a, b, sobe, ucln;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		ucln = 1;
		// Tim uoc chung lon nhat
		if (a == 0 && b == 0) {
			return 0;
		}
		else if (a == 0 || b == 0) {
			return 0;
		}
		else {
			if (a < b) {
				sobe = a;
			}
			else {
				sobe = b;
			}
			for (int j = 1; j <= sobe; j++) {
				if ((a % j == 0) && (b % j == 0)) {
					ucln = j;
				}
			}
		}
		cout << a/ucln << "/" << b/ucln << endl;
	}
	return 0;
}
