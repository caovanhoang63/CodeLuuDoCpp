#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;

	int t = 1;
	int i = 1;
	while (i <= n) {
		t = t * i;
		i = i + 1;
	}
	cout << "\nTich cua n so nguyen dau tien la: " << t;

	return 0;
}