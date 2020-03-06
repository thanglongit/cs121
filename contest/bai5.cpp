#include <iostream>
#include <string.h>
using namespace std;
int main(){
	// Tim dang nhi phan cua so nguyen n
	long long int n;
	cin >> n;
	string a;
	while(n > 0){
		a = char((n % 2) + 48) + a;
		n = n / 2;
	}
	cout<<a<<endl;
	return 0;
}

