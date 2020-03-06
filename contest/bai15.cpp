#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Tim uoc nguyen to lon nhat cua mot so
	long int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		if (n % i == 0) {
			int count = 0;
			for (int j = 2; j <= sqrt(i); j++) {
				if(i % j == 0) {
					count++;
				}
			}
			if (count < 1) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
