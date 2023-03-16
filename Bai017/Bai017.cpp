#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float x;
	cout << "\nNhap vao gia tri x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x12 = x6 * x6;
	float x11 = x12 / x;
	cout << "\nGia tri cua x12 la: " << x12;
	return 0;
}