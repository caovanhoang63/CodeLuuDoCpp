#include <iostream>
using namespace std;

int main()
{
	int n, m = 1, dau = 1;
	float x, t = 1, s = -1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 2; i <= 2 * n; i += 2)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + dau * (t / m);
		dau = -dau;
	}
	cout << "s(" << x << "," << n << ") = " << s;
	return 0;
}