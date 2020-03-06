#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Kiem tra so doi xung
	long int n, sodu, daonguoc = 0, i;
	cin >> n;
	for (i = n; n != 0; n = n / 10) {
		sodu = n % 10;
		daonguoc = daonguoc * 10 + sodu;
	}
	if(i == daonguoc){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
	return 0;
}
