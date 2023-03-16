#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, x;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	cout << "\nNhap vao x: ";
	cin >> x;
	float s = x;
	float t = x;
	int i = 3;
	while (i <= 2 * n + 1) {
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "\nGia tri cua bieu thuc can tim la: " << s;
	return 0;

}