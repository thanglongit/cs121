#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Chia dua hau
	int n;
	cin >> n;
	if(n != 2 && n % 2 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
