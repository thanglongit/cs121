#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Goku - Fibonaci
	// F(n)=F(n-1)+F(n-2)
	long int n, x, y, t;
	cin >> n;
	x = 1;
	y = 1;
	for (int i=4; i<=n; i++) {
		t = y;
		y = x + y;
		x = t;
	}
	cout << x+y << endl;
	return 0;
}
