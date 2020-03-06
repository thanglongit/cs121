#include<iostream>
#include<math.h>
using namespace std;
// Tim so lon nhat trong mot so
int numberMax(long long int n) {
	if (n == 0) return 0;
	n = abs(n);
	int max = 0;
	while (n > 0) {
		int temp = n % 10;
		n = n / 10;
		if (temp > max){
			max = temp;
		}
	}
	return max;
}
int main(){
	long long int n;
	cin >> n;
	cout << numberMax(n) << endl;
	return 0;
}
