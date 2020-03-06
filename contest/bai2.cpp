#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Kiem tra nam nhuan
	int nam;
	cin>>nam;
	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
	return 0;
}
