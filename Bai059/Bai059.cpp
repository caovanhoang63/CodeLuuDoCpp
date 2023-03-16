#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	int dem = 0;
	int t = n;
	while (t != 0) {
		dem++;
		t = t / 10;
	}

	cout << "\nSo chu so cua n la: " << dem;

	return 0;

}