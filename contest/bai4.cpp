#include <iostream>
using namespace std;
int main(){
	// So manh me
	long int N, so, du, tong = 0;
	cin >> N;
	so = N;
	while(so != 0){
		du = so % 10;
		tong += du * du * du;
		so /= 10;
	}
	if(tong == N){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
	return 0;
}
