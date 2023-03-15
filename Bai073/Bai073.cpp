#include <iostream>
using namespace std;

int main()
{
	int n, m = 0;
	float x, t = 1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		m = m + i;
		s = s + (t / m);
	}
	cout << "s(" << x << "," << n << ") = " << s;
	return 0;
}