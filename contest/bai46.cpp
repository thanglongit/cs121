#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Suy thoai
	long int n, a, b, c;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> c;
		if (a <= b && b <= c) {
			cout << "Case " << i <<": "<< b << endl;
		}
		else if (a <= c && c <= b) {
			cout << "Case " << i <<": "<< c << endl;
		}
		else if (b <= c && c <= a) {
			cout << "Case " << i <<": "<< c << endl;
		}
		else if (b <= a && a <= c) {
			cout << "Case " << i <<": "<< a << endl;
		}
		else if (c <= a && a <= b) {
			cout << "Case " << i <<": "<< a << endl;
		}
		else if (c <= b && b <= a) {
			cout << "Case " << i <<": "<< b << endl;
		}		
	}
	return 0;
}
