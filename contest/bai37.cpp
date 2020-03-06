#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Borrow
	long int k, n, w, s1 = 0, s2 = 0, vay;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) {
		s1 = s1 +i;
	}
	s2 = k * s1;
	if (n <= s2) {
		vay = s2 - n;
		cout << vay << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}
