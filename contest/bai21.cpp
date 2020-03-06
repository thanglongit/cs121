#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Tim so hoan hao lon nhat
	long int i, j, n, tong, sohoanhao;
	cin >> n;
	for(i=1; i<=n; i++){
		tong = 0;
		for(j=1; j<i; j++){
			if(i % j == 0){
				tong = tong + j;
			}
		}
		if(tong == i){
			sohoanhao = i;
		}
	}
	cout << sohoanhao << endl;
    return 0;
}
