#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
/* Uoc chung lon nhat va boi chung nho nhat */
/* Cach 1:
int main() {
	long long int t, a, b, sobe, ucln, bcnn;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		ucln = 1, bcnn = 1;
		// Tim uoc chung lon nhat
		if (a == 0 && b == 0) {
			return 0;
		}
		else if (a == 0 && b != 0) {
			ucln = b;
		}
		else if (a != 0 && b == 0) {
			ucln = a;
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
		// Tim boi chung nho nhat 
		bcnn = (a * b) / ucln;
		// In ket qua ra man hinh
		cout << ucln << " ";
		cout << bcnn << endl;
	}
	return 0;
} */
/* Cach 2:
int main() {
	int a, b, c, d, n, s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		for (int j = 1; j <= a || j <= b; j++) {
			if (a % j == 0 && b%j == 0) {
				c = j;
			}
		}
		cout << c <<' ';
		cout << (a * b) / c << endl;
	}
	return 0;
} */
// Cach 3:
int main() {
	long long int a, b, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << __gcd(a,b) << " ";
		cout << (a * b) / __gcd(a,b) << endl;
	}
	return 0;
}
