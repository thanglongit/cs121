#include <iostream>
using namespace std;
int main() {
	// Help Dr.Bruce Banner
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		printf("I %s %s",!(i%2)?"hate":"love",i==n-1?"it\n":"that ");
	}
	return 0;
}
