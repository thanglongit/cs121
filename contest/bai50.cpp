#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// Body Mass Index - BMI
	float weight, height, BMI;
	cin >> weight >> height;
	BMI = weight / (height * height);
	if (BMI > 25) {
		cout << "Overweight" << endl;
	}
	else if (BMI >= 18.5 && BMI <= 25) {
		cout << "Normal weight" << endl;
	}
	else if (BMI < 18.5) {
		cout << "Underweight" << endl;
	}
	return 0;
}
