#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Tim so luong uoc cua mot so
	long int n, uoc = 0;
	cin >> n;
	for (int i = 1; i < n; i++){
		if (n % i == 0) {
			uoc++;
		}
	}
	cout<<uoc<<endl;	
	return 0;
}
