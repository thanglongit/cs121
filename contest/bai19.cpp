#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Tim so nguyen to thu n
	long int check, n=0, c=0;
	cin >> n;
	for(int i = 2; i <= 10000; i++) {
		check = 0;
		for(int j = 2; j <= i/2; j++) {
			if(i % j == 0) {
				check=1;
				break;
			}    
		}
		if(check == 0) {
			c++;
		}
      	if(c == n){
			cout << i << endl;
			break;
		}
	}
	return 0;
}
