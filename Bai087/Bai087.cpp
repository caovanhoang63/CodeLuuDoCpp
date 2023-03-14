#include <iostream>
using namespace std;
int main() {
	int n;
	float x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	float s = x;
	float t = x;
	int a = 1;
	for (int i = 0;i < 2 * n + 1;i = i + 2) {
		t = t * x * x;
		a *= -1;
		s += a * t;
	}
	cout << "S(" << x << "," << n << ")= " << s;
}