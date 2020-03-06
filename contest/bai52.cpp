#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// RSA Numbers
	int a, b, dem1, dem2 = 0, tong;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		dem1 = 0;
		tong = i;
		for (int j = 1; j <= tong; j++) {
			if (tong % j == 0) {
				dem1++;
			}
		}
		if (dem1 == 4) {
			dem2++;
		}
	}
	cout << dem2 << endl;
	return 0;
}
