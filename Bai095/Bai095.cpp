#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	float s = 0;
	int i = n;
	while (i != 0) {
		s = sqrt(i + s);
		i = i - 1;
	}
	cout << "\nGia tri cua bieu thuc can tim la: " << s;
	return 0;
}