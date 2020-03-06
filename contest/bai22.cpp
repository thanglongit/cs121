#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int gio1, phut1, giay1, gio2, phut2, giay2;
	char haicham;
	cin >> gio1 >> haicham >> phut1 >> haicham >> giay1;
	cin >> gio2 >> haicham >> phut2 >> haicham >> giay2;
	if (gio1 > 24 || gio2 > 24 || phut1 > 60 || phut2 > 60 || giay1 > 60 || giay2 > 60) {
		cout << "No" << endl;
	}
	else if (gio1 == gio2) {
		cout << phut2 - phut1 << "'" << giay2 - giay
	return 0;
}
