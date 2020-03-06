#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
// So sieu nguyen to
// Kiem tra so nguyen to
bool songuyento(int n) {
	if(n < 2) {
		// ko phai so nguyen to
		return false;
	}
	else {
		if(n == 2) {
			// n là so nguyen to
			return true;
		}
		else {
			if(n % 2 == 0) {
				return false;
			}
			else {
				for(int i = 2; i < n; i++) {
					if(n % i == 0) {
						// ko phai so nguyen to
						return false;
					}
				}
			}
		}
	}
	// la so nguyen to
	return true;
}
// Kiem tra so sieu nguyen to
bool sosieunguyento(int n) {
	while(n != 0) {
		if(songuyento(n) == false){
			// ko phai so sieu nguyen to
			return false;
		}
		// loai bo chu so ben phai
		n = n / 10;
	}
	// la so sieu nguyen to
	return true;
}
// Check
int main(){
	long int n;
	cin >> n;
	if(sosieunguyento(n) == true) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}

