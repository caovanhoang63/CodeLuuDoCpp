#include <iostream>
#include<cmath>
using namespace std;
int main() {
	float a, b;
	cout << "Nhap vao 2 so thuc a va b: ";
	cin >> a >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << "\nTri tuyet doi cua cac so thuc a va b la: " << a << "  " << b;
	return 0;
}