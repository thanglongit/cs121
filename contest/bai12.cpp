#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Tim hang nghin va hang tram cua mot so nguyen
	long int n, hangnghin, hangtram;
	cin >> n;
	hangnghin = n / 1000;
	hangnghin = hangnghin % 10;
	hangtram = n / 100;
	hangtram = hangtram % 10;
	cout << hangnghin << hangtram << endl;
	return 0;
}
