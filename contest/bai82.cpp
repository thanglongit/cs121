#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Easy Problem
	long int t, N, M;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> M;
		int tong = 0, j = 1;
		do {
			tong = tong + j;
			j = j + 2;
			N = j - 4;
		}
		while (tong < M);
		cout << N << endl;
	}
	return 0;
}
