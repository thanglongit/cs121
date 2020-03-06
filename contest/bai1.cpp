#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Tim so lon nhat trong 3 so
	long int a, b, c, max;
	cin>>a;
	cin>>b;
	cin>>c;
	max=a; 
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	cout<<max<<endl;
	return 0;
}
