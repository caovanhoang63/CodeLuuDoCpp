#include <iostream>
using namespace std;

int main()
{
	int n, dau = 1;
	float x, t = 1, s = 0;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		s = s + dau * t;
		dau = -dau;
	}
	cout << "s(" << x << "," << n << ") = " << s;
	return 0;
}