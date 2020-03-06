#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Tien Hoa
	long int a, tong = 0;
	cin >> a;
	while (a > 0) { 
		tong = tong + a;
		a = a / 10;
	}
	cout << tong << endl;
	return 0;
}
