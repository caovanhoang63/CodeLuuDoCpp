#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, x;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	cout << "\nNhap vao x: ";
	cin >> x;
	float s = 0;
	float t = 1;
	int i = 1;
	int m = 0;
	int dau = -1;
	while (i <= n) {
		t = t * x;
		m = m + i;
		s = s + dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "\nGia tri cua bieu thuc can tim la: " << s;
	return 0;

}