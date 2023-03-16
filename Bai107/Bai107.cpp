#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x;
	cout << "Nhap vao x: ";
	cin >> x;
	float e = 1;
	float s = 1;
	int t = 1;
	int dau = -1;
	int m = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * i * (i + 1);
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "\nGia tri cua bieu thuc can tinh la" << s;

	return 0;

}