#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// ISBN
	int a, b, c, ISBN;
	cin >> a >> b >> c;
	ISBN = 9*1+7*3+8*1+0*3+9*1+2*3+1*1+4*3+1*1+8*3+a*1+b*3+c*1;
	cout << ISBN << endl;
	return 0;
}
