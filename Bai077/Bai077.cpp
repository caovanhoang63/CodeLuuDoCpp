#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, k;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	cout << "\nNhap vao so mu k: ";
	cin >> k;
	float s = 0;
	int i = 1;
	while (i <= n) {
		s = s + pow(i, k);
		i = i + 1;
	}
	cout << "\nGia tri cua bieu thuc can tim la: " << s;
	return 0;

}