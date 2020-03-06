#include<iostream>
using namespace std;
// Kiem tra so hoan hao
bool check(long int n){ // Kiem tra dung sai
	long int tong = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0) {
			tong = tong + i;
		}
	}
	if(tong == n){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	long int n;
	cin>>n;
	if(check(n)){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
	return 0;
}
