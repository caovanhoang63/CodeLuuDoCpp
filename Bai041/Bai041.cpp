#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	int s = 0;
	int i = 1;
	while (i <= n) {
		s = s + i * (i + 1) * (i + 2);
		i = i + 1;
	}
	cout << "\nGia tri cua bieu thuc can tim la: " << s;
	return 0;

}