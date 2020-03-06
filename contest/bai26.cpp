#include<iostream>
#include<math.h>
using namespace std;
// So than thien
int sothanthien(int a) {
	int sodu, daonguoc = 0;
	while(a > 0) {
		sodu = a % 10;
		daonguoc = daonguoc * 10 + sodu;
		a = a / 10;
	}
	return daonguoc;
}
int ucln(int a, int b) {
	while ((a !=0 ) && (b != 0)) {
		if(a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	return (a + b);
}
int main() {
	int so1, so2, dem = 0;
	cin>>so1>>so2;
	if(so1 >= so2)
		for(int i = so2; i <= so1; i++) {
			if(ucln(i,sothanthien(i)) == 1) {
				dem++;
			}
		}
	if(so1 <= so2)
		for(int i = so1; i <= so2; i++) {
			if(ucln(i,sothanthien(i)) == 1) {
				dem++;
			}
		}
	cout << dem << endl;
	return 0;
}
