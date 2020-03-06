#include<iostream>
#include<math.h>
using namespace std;
#define max n
int main(){
	int n;
	cin>>n;
	int matran[max][max];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matran[i][j];
		}
	}
	//Tich ma tran
	int tichmatran=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tichmatran=tichmatran*matran[i][j];
		}
	}
	//Tong cac phan tu ben duoi duong cheo
	int a=0, a1=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			a=a+matran[i][j];
			a1=a1*matran[i][j];
		}
	}
	//Tich cac phan tu tren duong cheo chinh
	int c=1;
	for(int i=0;i<n;i++){
		c=c*matran[i][i];
	}
	//Tich cac phan tu ben tren duong cheo
	int b=tichmatran/(a1*c);	
	//Output
	int t=(a+b)%c;
	cout<<t<<endl;
	return 0;
}
