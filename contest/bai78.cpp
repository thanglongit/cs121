#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Cap so than thien
	long int a, b, uoca = 0, uocb = 0;
	cin >> a >> b;
	for (int i = 1; i <= a/2; i++) {
		if (a % i == 0) {
			uoca = uoca + i;
		}
	}
	for (int j = 1; j <= b/2; j++) {
		if (b % j == 0) {
			uocb = uocb + j;
		}
	}
	if ((uoca == b) && (uocb == a)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
