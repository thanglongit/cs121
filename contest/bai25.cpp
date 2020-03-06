#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Find Max
	long int n, a, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > max) {
			max = a;
		}
	}
	cout << max << endl;
	return 0;
}
