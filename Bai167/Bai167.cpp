#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	int s = 0;
	int k = 0;
	while (s < n) {
		s = s + k;
		k = k + 1;
	}
	cout << "Gia tri nguyen duong k thoa man bieu thuc la: " << k - 2;
	return 0;

}