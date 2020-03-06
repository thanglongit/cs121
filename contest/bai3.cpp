#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Tim phan nguyen va phan du cua mot so chia
	int sochia, sobichia, phannguyen, phandu;
	cin >> sochia;
	cin >> sobichia;
	phannguyen = sochia/sobichia;
	phandu = sochia % sobichia;
	cout<<phannguyen<<endl;
	cout<<phandu<<endl;
	return 0;	
}
