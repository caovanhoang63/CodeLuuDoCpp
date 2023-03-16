#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n) {
		s = s + sqrt(1 + (float)1 / (i * i) + (float)(1 / (i + 1) * (i + 1)));
		i = i + 1;
	}
	cout << "\nGia tri cua bieu thuc can tim la: " << s;
	return 0;

}