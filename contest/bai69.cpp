#include<iostream>
#include<math.h>
using namespace std;
int main() {
	// Thanos tim da
	int n; // n la so da da tim thay
	char name[] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
	char color[] = {"purple", "green", "blue", "orange", "red", "yellow"};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> color;
	}
	for (int j = 0; j < 6; j++) {
		cout << name[j] << endl;
		cout << color[j] << endl;
	}
	return 0;
}
