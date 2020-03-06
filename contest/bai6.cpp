#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Sum Reverse Number
	long int n, a, b, c, sodu1, daonguoc1, sodu2, daonguoc2, sodu3, daonguoc3;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		daonguoc1 = 0;
		daonguoc2 = 0;
		daonguoc3 = 0;
		while (a > 0) {
			sodu1 = a % 10;
			daonguoc1 = daonguoc1 * 10 + sodu1;
			a = a / 10;
		}
		while (b > 0) {
			sodu2 = b % 10;
			daonguoc2 = daonguoc2 * 10 + sodu2;
			b = b / 10;
		}
		c = daonguoc1 + daonguoc2;
		while (c > 0) {
			sodu3 = c % 10;
			daonguoc3 = daonguoc3 * 10 + sodu3;
			c = c / 10;
		}
		cout<<daonguoc3<<endl;
	}
	return 0;
}
