#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Tim so chinh phuong lon nhat
	long int n, sochinhphuong;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if(i * i <= n) {
			sochinhphuong = i * i;
		}
	}
	cout << sochinhphuong << endl;
	return 0;
}
